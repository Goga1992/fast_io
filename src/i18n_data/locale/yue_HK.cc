﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Yue Chinese (Cantonese) language locale for Hong Kong"),.source=tsc("fast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("fast_io"),.email=tsc("bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Cantonese"),.territory=tsc("Hong Kong SAR China"),.revision=tsc("1.0"),.date=tsc("2010-11-07")},.monetary={.int_curr_symbol=tsc("HKD "),.currency_symbol=tsc("HK$"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=0},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("日"),tsc("一"),tsc("二"),tsc("三"),tsc("四"),tsc("五"),tsc("六")},.day={tsc("星期日"),tsc("星期一"),tsc("星期二"),tsc("星期三"),tsc("星期四"),tsc("星期五"),tsc("星期六")},.abmon={tsc("1月"),tsc("2月"),tsc("3月"),tsc("4月"),tsc("5月"),tsc("6月"),tsc("7月"),tsc("8月"),tsc("9月"),tsc("10月"),tsc("11月"),tsc("12月")},.mon={tsc("1月"),tsc("2月"),tsc("3月"),tsc("4月"),tsc("5月"),tsc("6月"),tsc("7月"),tsc("8月"),tsc("9月"),tsc("10月"),tsc("11月"),tsc("12月")},.d_t_fmt=tsc("%Y年%m月%d日 %A %H點%M分%S秒"),.d_fmt=tsc("%Y年%m月%d日 %A"),.t_fmt=tsc("%H點%M分%S秒"),.t_fmt_ampm=tsc("%p%I點%M分%S秒"),.date_fmt=tsc("%Y年 %b %e日 %A %H:%M:%S %Z"),.am_pm={tsc("上午"),tsc("下午")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("係"),.nostr=tsc("唔係")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c ;%a ;%l"),.int_select=tsc("001"),.int_prefix=tsc("852")},.name={.name_fmt=tsc("%f%t%g%t%d"),.name_gen=tsc(""),.name_miss=tsc("小姐"),.name_mr=tsc("先生"),.name_mrs=tsc("太太"),.name_ms=tsc("女士")},.address={.postal_fmt=tsc("%c%T%s%h%N%b%e%r%N%f%N%d%N%a"),.country_name=tsc("中華人民共和國香港特別行政區"),.country_ab2=tsc("HK"),.country_ab3=tsc("HKG"),.country_num=344,.country_car=tsc("HK"),.country_isbn=tsc("962"),.lang_name=tsc("粵語"),.lang_term=tsc("yue"),.lang_lib=tsc("yue")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Yue Chinese (Cantonese) language locale for Hong Kong"),.source=tsc(L"fast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Cantonese"),.territory=tsc(L"Hong Kong SAR China"),.revision=tsc(L"1.0"),.date=tsc(L"2010-11-07")},.monetary={.int_curr_symbol=tsc(L"HKD "),.currency_symbol=tsc(L"HK$"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=0},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"日"),tsc(L"一"),tsc(L"二"),tsc(L"三"),tsc(L"四"),tsc(L"五"),tsc(L"六")},.day={tsc(L"星期日"),tsc(L"星期一"),tsc(L"星期二"),tsc(L"星期三"),tsc(L"星期四"),tsc(L"星期五"),tsc(L"星期六")},.abmon={tsc(L"1月"),tsc(L"2月"),tsc(L"3月"),tsc(L"4月"),tsc(L"5月"),tsc(L"6月"),tsc(L"7月"),tsc(L"8月"),tsc(L"9月"),tsc(L"10月"),tsc(L"11月"),tsc(L"12月")},.mon={tsc(L"1月"),tsc(L"2月"),tsc(L"3月"),tsc(L"4月"),tsc(L"5月"),tsc(L"6月"),tsc(L"7月"),tsc(L"8月"),tsc(L"9月"),tsc(L"10月"),tsc(L"11月"),tsc(L"12月")},.d_t_fmt=tsc(L"%Y年%m月%d日 %A %H點%M分%S秒"),.d_fmt=tsc(L"%Y年%m月%d日 %A"),.t_fmt=tsc(L"%H點%M分%S秒"),.t_fmt_ampm=tsc(L"%p%I點%M分%S秒"),.date_fmt=tsc(L"%Y年 %b %e日 %A %H:%M:%S %Z"),.am_pm={tsc(L"上午"),tsc(L"下午")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"係"),.nostr=tsc(L"唔係")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c ;%a ;%l"),.int_select=tsc(L"001"),.int_prefix=tsc(L"852")},.name={.name_fmt=tsc(L"%f%t%g%t%d"),.name_gen=tsc(L""),.name_miss=tsc(L"小姐"),.name_mr=tsc(L"先生"),.name_mrs=tsc(L"太太"),.name_ms=tsc(L"女士")},.address={.postal_fmt=tsc(L"%c%T%s%h%N%b%e%r%N%f%N%d%N%a"),.country_name=tsc(L"中華人民共和國香港特別行政區"),.country_ab2=tsc(L"HK"),.country_ab3=tsc(L"HKG"),.country_num=344,.country_car=tsc(L"HK"),.country_isbn=tsc(L"962"),.lang_name=tsc(L"粵語"),.lang_term=tsc(L"yue"),.lang_lib=tsc(L"yue")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Yue Chinese (Cantonese) language locale for Hong Kong"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Cantonese"),.territory=tsc(u8"Hong Kong SAR China"),.revision=tsc(u8"1.0"),.date=tsc(u8"2010-11-07")},.monetary={.int_curr_symbol=tsc(u8"HKD "),.currency_symbol=tsc(u8"HK$"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=0},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"日"),tsc(u8"一"),tsc(u8"二"),tsc(u8"三"),tsc(u8"四"),tsc(u8"五"),tsc(u8"六")},.day={tsc(u8"星期日"),tsc(u8"星期一"),tsc(u8"星期二"),tsc(u8"星期三"),tsc(u8"星期四"),tsc(u8"星期五"),tsc(u8"星期六")},.abmon={tsc(u8"1月"),tsc(u8"2月"),tsc(u8"3月"),tsc(u8"4月"),tsc(u8"5月"),tsc(u8"6月"),tsc(u8"7月"),tsc(u8"8月"),tsc(u8"9月"),tsc(u8"10月"),tsc(u8"11月"),tsc(u8"12月")},.mon={tsc(u8"1月"),tsc(u8"2月"),tsc(u8"3月"),tsc(u8"4月"),tsc(u8"5月"),tsc(u8"6月"),tsc(u8"7月"),tsc(u8"8月"),tsc(u8"9月"),tsc(u8"10月"),tsc(u8"11月"),tsc(u8"12月")},.d_t_fmt=tsc(u8"%Y年%m月%d日 %A %H點%M分%S秒"),.d_fmt=tsc(u8"%Y年%m月%d日 %A"),.t_fmt=tsc(u8"%H點%M分%S秒"),.t_fmt_ampm=tsc(u8"%p%I點%M分%S秒"),.date_fmt=tsc(u8"%Y年 %b %e日 %A %H:%M:%S %Z"),.am_pm={tsc(u8"上午"),tsc(u8"下午")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"係"),.nostr=tsc(u8"唔係")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c ;%a ;%l"),.int_select=tsc(u8"001"),.int_prefix=tsc(u8"852")},.name={.name_fmt=tsc(u8"%f%t%g%t%d"),.name_gen=tsc(u8""),.name_miss=tsc(u8"小姐"),.name_mr=tsc(u8"先生"),.name_mrs=tsc(u8"太太"),.name_ms=tsc(u8"女士")},.address={.postal_fmt=tsc(u8"%c%T%s%h%N%b%e%r%N%f%N%d%N%a"),.country_name=tsc(u8"中華人民共和國香港特別行政區"),.country_ab2=tsc(u8"HK"),.country_ab3=tsc(u8"HKG"),.country_num=344,.country_car=tsc(u8"HK"),.country_isbn=tsc(u8"962"),.lang_name=tsc(u8"粵語"),.lang_term=tsc(u8"yue"),.lang_lib=tsc(u8"yue")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Yue Chinese (Cantonese) language locale for Hong Kong"),.source=tsc(u"fast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Cantonese"),.territory=tsc(u"Hong Kong SAR China"),.revision=tsc(u"1.0"),.date=tsc(u"2010-11-07")},.monetary={.int_curr_symbol=tsc(u"HKD "),.currency_symbol=tsc(u"HK$"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=0},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"日"),tsc(u"一"),tsc(u"二"),tsc(u"三"),tsc(u"四"),tsc(u"五"),tsc(u"六")},.day={tsc(u"星期日"),tsc(u"星期一"),tsc(u"星期二"),tsc(u"星期三"),tsc(u"星期四"),tsc(u"星期五"),tsc(u"星期六")},.abmon={tsc(u"1月"),tsc(u"2月"),tsc(u"3月"),tsc(u"4月"),tsc(u"5月"),tsc(u"6月"),tsc(u"7月"),tsc(u"8月"),tsc(u"9月"),tsc(u"10月"),tsc(u"11月"),tsc(u"12月")},.mon={tsc(u"1月"),tsc(u"2月"),tsc(u"3月"),tsc(u"4月"),tsc(u"5月"),tsc(u"6月"),tsc(u"7月"),tsc(u"8月"),tsc(u"9月"),tsc(u"10月"),tsc(u"11月"),tsc(u"12月")},.d_t_fmt=tsc(u"%Y年%m月%d日 %A %H點%M分%S秒"),.d_fmt=tsc(u"%Y年%m月%d日 %A"),.t_fmt=tsc(u"%H點%M分%S秒"),.t_fmt_ampm=tsc(u"%p%I點%M分%S秒"),.date_fmt=tsc(u"%Y年 %b %e日 %A %H:%M:%S %Z"),.am_pm={tsc(u"上午"),tsc(u"下午")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"係"),.nostr=tsc(u"唔係")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c ;%a ;%l"),.int_select=tsc(u"001"),.int_prefix=tsc(u"852")},.name={.name_fmt=tsc(u"%f%t%g%t%d"),.name_gen=tsc(u""),.name_miss=tsc(u"小姐"),.name_mr=tsc(u"先生"),.name_mrs=tsc(u"太太"),.name_ms=tsc(u"女士")},.address={.postal_fmt=tsc(u"%c%T%s%h%N%b%e%r%N%f%N%d%N%a"),.country_name=tsc(u"中華人民共和國香港特別行政區"),.country_ab2=tsc(u"HK"),.country_ab3=tsc(u"HKG"),.country_num=344,.country_car=tsc(u"HK"),.country_isbn=tsc(u"962"),.lang_name=tsc(u"粵語"),.lang_term=tsc(u"yue"),.lang_lib=tsc(u"yue")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Yue Chinese (Cantonese) language locale for Hong Kong"),.source=tsc(U"fast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"bug-glibc-locales@gnu.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Cantonese"),.territory=tsc(U"Hong Kong SAR China"),.revision=tsc(U"1.0"),.date=tsc(U"2010-11-07")},.monetary={.int_curr_symbol=tsc(U"HKD "),.currency_symbol=tsc(U"HK$"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=0},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"日"),tsc(U"一"),tsc(U"二"),tsc(U"三"),tsc(U"四"),tsc(U"五"),tsc(U"六")},.day={tsc(U"星期日"),tsc(U"星期一"),tsc(U"星期二"),tsc(U"星期三"),tsc(U"星期四"),tsc(U"星期五"),tsc(U"星期六")},.abmon={tsc(U"1月"),tsc(U"2月"),tsc(U"3月"),tsc(U"4月"),tsc(U"5月"),tsc(U"6月"),tsc(U"7月"),tsc(U"8月"),tsc(U"9月"),tsc(U"10月"),tsc(U"11月"),tsc(U"12月")},.mon={tsc(U"1月"),tsc(U"2月"),tsc(U"3月"),tsc(U"4月"),tsc(U"5月"),tsc(U"6月"),tsc(U"7月"),tsc(U"8月"),tsc(U"9月"),tsc(U"10月"),tsc(U"11月"),tsc(U"12月")},.d_t_fmt=tsc(U"%Y年%m月%d日 %A %H點%M分%S秒"),.d_fmt=tsc(U"%Y年%m月%d日 %A"),.t_fmt=tsc(U"%H點%M分%S秒"),.t_fmt_ampm=tsc(U"%p%I點%M分%S秒"),.date_fmt=tsc(U"%Y年 %b %e日 %A %H:%M:%S %Z"),.am_pm={tsc(U"上午"),tsc(U"下午")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"係"),.nostr=tsc(U"唔係")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c ;%a ;%l"),.int_select=tsc(U"001"),.int_prefix=tsc(U"852")},.name={.name_fmt=tsc(U"%f%t%g%t%d"),.name_gen=tsc(U""),.name_miss=tsc(U"小姐"),.name_mr=tsc(U"先生"),.name_mrs=tsc(U"太太"),.name_ms=tsc(U"女士")},.address={.postal_fmt=tsc(U"%c%T%s%h%N%b%e%r%N%f%N%d%N%a"),.country_name=tsc(U"中華人民共和國香港特別行政區"),.country_ab2=tsc(U"HK"),.country_ab3=tsc(U"HKG"),.country_num=344,.country_car=tsc(U"HK"),.country_isbn=tsc(U"962"),.lang_name=tsc(U"粵語"),.lang_term=tsc(U"yue"),.lang_lib=tsc(U"yue")},.measurement={.measurement=1}};


}
}

#include"../main.h"