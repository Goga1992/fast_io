#pragma once

namespace fast_io
{

namespace details
{

inline constexpr bool calculate_can_simd_vector_run_with_cpu_instruction(std::size_t sizeofsimdvector) noexcept
{
	if(sizeofsimdvector==16)
	{
#if (defined(__SSE2__) || (defined(_MSC_VER)&&!defined(__clang__)&&!defined(_KERNEL_MODE))) && (defined(__x86_64__) || defined(_M_X64)) || defined(__wasm_simd128__)
		return true;
#endif
	}
	else if(sizeofsimdvector==32)
	{
#if defined(__AVX2__) && (defined(__x86_64__) || defined(_M_X64))
		return true;
#endif
	}
	else if(sizeofsimdvector==64)
	{
#if defined(__AVX512F__) && defined(__AVX512VL__) && defined(__AVX512BW__) && (defined(__x86_64__) || defined(_M_X64))
		return true;
#endif
	}
	return false;
}

template<std::size_t sizeofsimdvector>
inline constexpr bool can_simd_vector_run_with_cpu_instruction
{
calculate_can_simd_vector_run_with_cpu_instruction(sizeofsimdvector)
};

inline constexpr std::size_t optimal_simd_vector_run_with_cpu_instruction_size
{
can_simd_vector_run_with_cpu_instruction<64>?64:
(can_simd_vector_run_with_cpu_instruction<32>?32:
(can_simd_vector_run_with_cpu_instruction<16>?16:0))
};

template<unsigned pos,typename T>
inline constexpr bool is_all_zeros_recursive_impl(T const& v2) noexcept
{
	constexpr std::uint_least64_t mx{std::numeric_limits<std::uint_least64_t>::max()};
	constexpr unsigned digits{std::numeric_limits<std::uint_least64_t>::digits};
	constexpr unsigned digitspos{digits*pos};
	constexpr std::size_t N{sizeof(T)/sizeof(std::uint_least64_t)};
	static_assert(N!=0);
	std::uint_least64_t element{v2[pos]};
	if constexpr(pos+2==N)
	{
		constexpr unsigned posp1{pos+1};
		return !element&&!v2[posp1];
	}
	else if constexpr(pos!=N-1)
	{
		return !element&&is_all_zeros_recursive_impl<pos+1>(v2);
	}
	else
	{
		return !element;
	}
}

template<std::integral T,std::size_t n>
inline
#if __cpp_if_consteval >= 202106L || __cpp_lib_is_constant_evaluated >= 201811L
constexpr
#endif
bool is_all_zeros_impl(::fast_io::intrinsics::simd_vector<T,n> const& vec) noexcept
{
#if __cpp_if_consteval >= 202106L || __cpp_lib_is_constant_evaluated >= 201811L
#if __cpp_if_consteval >= 202106L
	if consteval
#elif __cpp_lib_is_constant_evaluated >= 201811L
	if (std::is_constant_evaluated())
#endif
	{
		return is_all_zeros_recursive_impl<0>(vec);
	}
#endif
	constexpr std::size_t szofvec{sizeof(::fast_io::intrinsics::simd_vector<T,n>)};

	if constexpr(sizeof(::fast_io::intrinsics::simd_vector<T,n>)==16)
	{
#if defined(__has_builtin) && __has_cpp_attribute(__gnu__::__vector_size__)
#if defined(__x86_64__) && defined(__SSE4_1__) && __has_builtin(__builtin_ia32_pmovmskb128)
		using x86_64_v2di [[__gnu__::__vector_size__ (16)]] = long long;
#if __has_builtin(__builtin_bit_cast)
		return __builtin_ia32_ptestz128(__builtin_bit_cast(x86_64_v2di,vec),__builtin_bit_cast(x86_64_v2di,vec));
#else
		return __builtin_ia32_ptestz128((x86_64_v2di)vec.value,(x86_64_v2di)vec.value);
#endif

#elif defined(__x86_64__) && __has_builtin(__builtin_ia32_pmovmskb128) && defined(__SSE2__)
		using x86_64_v16qi [[__gnu__::__vector_size__ (16)]] = char;
#if __has_builtin(__builtin_bit_cast)
		return !__builtin_ia32_pmovmskb128(__builtin_bit_cast(x86_64_v16qi,vec.value));
#else
		return !__builtin_ia32_pmovmskb128((x86_64_v16qi)vec.value);
#endif

#elif defined(__wasm_simd128__) && __has_builtin(__builtin_wasm_bitmask_i8x16)
		using wasmsimd128_i8x16 [[__gnu__::__vector_size__ (16)]] = char;
		return !__builtin_wasm_bitmask_i8x16(static_cast<wasmsimd128_i8x16>(vec.value));
#endif
#elif (defined(__x86_64__) || defined(_M_X64)) && defined(__SSE4_1__)
		__m128i a = __builtin_bit_cast(__m128i,vec);
		return _mm_testz_si128(a,a);
#elif (defined(__x86_64__) || defined(_M_X64)) && (defined(__SSE2__)||(defined(_MSC_VER)&&!defined(__clang__)))
		__m128i a = __builtin_bit_cast(__m128i,vec);
		return !_mm_movemask_epi8(a);
#endif
	}
	else if constexpr(sizeof(::fast_io::intrinsics::simd_vector<T,n>)==32)
	{
#if defined(__has_builtin) && __has_cpp_attribute(__gnu__::__vector_size__)
#if defined(__AVX2__) && defined(__x86_64__) && __has_builtin(__builtin_ia32_ptestz256)
		using x86_64_v4di [[__gnu__::__vector_size__ (32)]] = long long;
#if __has_builtin(__builtin_bit_cast)
		return __builtin_ia32_ptestz256(__builtin_bit_cast(x86_64_v4di,vec),__builtin_bit_cast(x86_64_v4di,vec));
#else
		return __builtin_ia32_ptestz256((x86_64_v4di)vec.value,(x86_64_v4di)vec.value);
#endif
#elif defined(__AVX2__) && defined(__x86_64__) && __has_builtin(__builtin_ia32_pmovmskb256)
		using x86_64_v32qi [[__gnu__::__vector_size__ (32)]] = char;
#if __has_builtin(__builtin_bit_cast)
		return !__builtin_ia32_pmovmskb256(__builtin_bit_cast(x86_64_v32qi,vec.value));
#else
		return !__builtin_ia32_pmovmskb256((x86_64_v32qi)vec.value);
#endif

#endif
#elif (defined(__x86_64__) || defined(_M_X64)) && defined(__AVX2__)
		__m256i a = __builtin_bit_cast(__m256i,vec);
		return _mm256_testz_si256(a,a);
#endif
	}
	else if constexpr(sizeof(::fast_io::intrinsics::simd_vector<T,n>)==64)
	{
#if defined(__has_builtin) && __has_cpp_attribute(__gnu__::__vector_size__)
#if defined(__AVX512BW__)  && defined(__x86_64__) && __has_builtin(__builtin_ia32_ptestmb512)
		using x86_64_v64qi [[__gnu__::__vector_size__ (64)]] = char;
#if __has_builtin(__builtin_bit_cast)
		return __builtin_ia32_ptestmb512(__builtin_bit_cast(x86_64_v64qi,vec),
						__builtin_bit_cast(x86_64_v64qi,vec),
						UINT_LEAST64_MAX);
#else
		return __builtin_ia32_ptestmb512((x86_64_v64qi)vec.value,
						(x86_64_v64qi)vec.value,
						UINT_LEAST64_MAX);
#endif
#endif

#elif (defined(__x86_64__) || defined(_M_X64)) && defined(__AVX512BW__)
		__m512i a = __builtin_bit_cast(__m512i,vec);
		return _mm512_test_epi8_mask(a,a);
#endif
	}
	constexpr std::size_t N{sizeof(::fast_io::intrinsics::simd_vector<T,n>)/sizeof(std::uint_least64_t)};
	return is_all_zeros_recursive_impl<0>(static_cast<::fast_io::intrinsics::simd_vector<std::uint_least64_t,N>>(vec));
}

}

namespace intrinsics
{

template<typename T,std::size_t N>
inline constexpr bool is_all_zeros(simd_vector<T,N> const& vec) noexcept
{
	return ::fast_io::details::is_all_zeros_impl(vec);
}
}

}
