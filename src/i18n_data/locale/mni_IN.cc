﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3,2};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Manipuri language locale for India"),.source=tsc("Red Hat Pune\t\t;\t\tfast_io"),.address=tsc("Level 1, Tower X, Cybercity, Magarpatta City, Hadapsar, Pune-411013 \t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("fast_io"),.email=tsc("libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Manipuri"),.territory=tsc("India"),.revision=tsc("1.0"),.date=tsc("2012-01-17")},.monetary={.int_curr_symbol=tsc("INR "),.currency_symbol=tsc("₹"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc("."),.thousands_sep=tsc(","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc("নোং"),tsc("নিং"),tsc("লৈবাক"),tsc("য়ুম"),tsc("শগোল"),tsc("ইরা"),tsc("থাং")},.day={tsc("নোংমাইজিং"),tsc("নিংথৌকাবা"),tsc("লৈবাকপোকপা"),tsc("য়ুমশকৈশা"),tsc("শগোলশেন"),tsc("ইরাই"),tsc("থাংজ")},.abmon={tsc("জান"),tsc("ফেব"),tsc("মার"),tsc("এপ্রি"),tsc("মে"),tsc("জুন"),tsc("জুল"),tsc("আগ"),tsc("সেপ"),tsc("ওক্ত"),tsc("নবে"),tsc("ডিস")},.mon={tsc("জানুৱারি"),tsc("ফেব্রুৱারি"),tsc("মার্চ"),tsc("এপ্রিল"),tsc("মে"),tsc("জুন"),tsc("জুলাই"),tsc("আগষ্ট"),tsc("সেপ্তেম্বর"),tsc("ওক্তোবর"),tsc("নবেম্বর"),tsc("ডিসেম্বর")},.d_t_fmt=tsc("%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc("%-d//%-m//%y"),.t_fmt=tsc("%I:%M:%S %p %Z"),.t_fmt_ampm=tsc("%I:%M:%S %p %Z"),.date_fmt=tsc("%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc("এ.ম."),tsc("প.ম.")},.week={7,19971130,1}},.messages={.yesexpr=tsc("^[+1yY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("yes"),.nostr=tsc("no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c ;%a ;%l"),.int_select=tsc("00"),.int_prefix=tsc("91")},.name={.name_fmt=tsc("%p%t%f%t%g"),.name_gen=tsc(""),.name_miss=tsc("কুমারী"),.name_mr=tsc("শ্রী"),.name_mrs=tsc("শ্রীমতি"),.name_ms=tsc("কুমার")},.address={.postal_fmt=tsc("%z%c%T%s%b%e%r"),.country_name=tsc("ভারত"),.country_ab2=tsc("IN"),.country_ab3=tsc("IND"),.country_num=356,.country_car=tsc("IND"),.lang_name=tsc("মৈতৈলোন্"),.lang_term=tsc("mni"),.lang_lib=tsc("mni")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Manipuri language locale for India"),.source=tsc(L"Red Hat Pune\t\t;\t\tfast_io"),.address=tsc(L"Level 1, Tower X, Cybercity, Magarpatta City, Hadapsar, Pune-411013 \t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"fast_io"),.email=tsc(L"libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Manipuri"),.territory=tsc(L"India"),.revision=tsc(L"1.0"),.date=tsc(L"2012-01-17")},.monetary={.int_curr_symbol=tsc(L"INR "),.currency_symbol=tsc(L"₹"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L"."),.thousands_sep=tsc(L","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(L"নোং"),tsc(L"নিং"),tsc(L"লৈবাক"),tsc(L"য়ুম"),tsc(L"শগোল"),tsc(L"ইরা"),tsc(L"থাং")},.day={tsc(L"নোংমাইজিং"),tsc(L"নিংথৌকাবা"),tsc(L"লৈবাকপোকপা"),tsc(L"য়ুমশকৈশা"),tsc(L"শগোলশেন"),tsc(L"ইরাই"),tsc(L"থাংজ")},.abmon={tsc(L"জান"),tsc(L"ফেব"),tsc(L"মার"),tsc(L"এপ্রি"),tsc(L"মে"),tsc(L"জুন"),tsc(L"জুল"),tsc(L"আগ"),tsc(L"সেপ"),tsc(L"ওক্ত"),tsc(L"নবে"),tsc(L"ডিস")},.mon={tsc(L"জানুৱারি"),tsc(L"ফেব্রুৱারি"),tsc(L"মার্চ"),tsc(L"এপ্রিল"),tsc(L"মে"),tsc(L"জুন"),tsc(L"জুলাই"),tsc(L"আগষ্ট"),tsc(L"সেপ্তেম্বর"),tsc(L"ওক্তোবর"),tsc(L"নবেম্বর"),tsc(L"ডিসেম্বর")},.d_t_fmt=tsc(L"%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc(L"%-d//%-m//%y"),.t_fmt=tsc(L"%I:%M:%S %p %Z"),.t_fmt_ampm=tsc(L"%I:%M:%S %p %Z"),.date_fmt=tsc(L"%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc(L"এ.ম."),tsc(L"প.ম.")},.week={7,19971130,1}},.messages={.yesexpr=tsc(L"^[+1yY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"yes"),.nostr=tsc(L"no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c ;%a ;%l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"91")},.name={.name_fmt=tsc(L"%p%t%f%t%g"),.name_gen=tsc(L""),.name_miss=tsc(L"কুমারী"),.name_mr=tsc(L"শ্রী"),.name_mrs=tsc(L"শ্রীমতি"),.name_ms=tsc(L"কুমার")},.address={.postal_fmt=tsc(L"%z%c%T%s%b%e%r"),.country_name=tsc(L"ভারত"),.country_ab2=tsc(L"IN"),.country_ab3=tsc(L"IND"),.country_num=356,.country_car=tsc(L"IND"),.lang_name=tsc(L"মৈতৈলোন্"),.lang_term=tsc(L"mni"),.lang_lib=tsc(L"mni")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Manipuri language locale for India"),.source=tsc(u8"Red Hat Pune\t\t;\t\tfast_io"),.address=tsc(u8"Level 1, Tower X, Cybercity, Magarpatta City, Hadapsar, Pune-411013 \t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"fast_io"),.email=tsc(u8"libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Manipuri"),.territory=tsc(u8"India"),.revision=tsc(u8"1.0"),.date=tsc(u8"2012-01-17")},.monetary={.int_curr_symbol=tsc(u8"INR "),.currency_symbol=tsc(u8"₹"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8"."),.thousands_sep=tsc(u8","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(u8"নোং"),tsc(u8"নিং"),tsc(u8"লৈবাক"),tsc(u8"য়ুম"),tsc(u8"শগোল"),tsc(u8"ইরা"),tsc(u8"থাং")},.day={tsc(u8"নোংমাইজিং"),tsc(u8"নিংথৌকাবা"),tsc(u8"লৈবাকপোকপা"),tsc(u8"য়ুমশকৈশা"),tsc(u8"শগোলশেন"),tsc(u8"ইরাই"),tsc(u8"থাংজ")},.abmon={tsc(u8"জান"),tsc(u8"ফেব"),tsc(u8"মার"),tsc(u8"এপ্রি"),tsc(u8"মে"),tsc(u8"জুন"),tsc(u8"জুল"),tsc(u8"আগ"),tsc(u8"সেপ"),tsc(u8"ওক্ত"),tsc(u8"নবে"),tsc(u8"ডিস")},.mon={tsc(u8"জানুৱারি"),tsc(u8"ফেব্রুৱারি"),tsc(u8"মার্চ"),tsc(u8"এপ্রিল"),tsc(u8"মে"),tsc(u8"জুন"),tsc(u8"জুলাই"),tsc(u8"আগষ্ট"),tsc(u8"সেপ্তেম্বর"),tsc(u8"ওক্তোবর"),tsc(u8"নবেম্বর"),tsc(u8"ডিসেম্বর")},.d_t_fmt=tsc(u8"%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc(u8"%-d//%-m//%y"),.t_fmt=tsc(u8"%I:%M:%S %p %Z"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p %Z"),.date_fmt=tsc(u8"%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc(u8"এ.ম."),tsc(u8"প.ম.")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u8"^[+1yY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"yes"),.nostr=tsc(u8"no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c ;%a ;%l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"91")},.name={.name_fmt=tsc(u8"%p%t%f%t%g"),.name_gen=tsc(u8""),.name_miss=tsc(u8"কুমারী"),.name_mr=tsc(u8"শ্রী"),.name_mrs=tsc(u8"শ্রীমতি"),.name_ms=tsc(u8"কুমার")},.address={.postal_fmt=tsc(u8"%z%c%T%s%b%e%r"),.country_name=tsc(u8"ভারত"),.country_ab2=tsc(u8"IN"),.country_ab3=tsc(u8"IND"),.country_num=356,.country_car=tsc(u8"IND"),.lang_name=tsc(u8"মৈতৈলোন্"),.lang_term=tsc(u8"mni"),.lang_lib=tsc(u8"mni")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Manipuri language locale for India"),.source=tsc(u"Red Hat Pune\t\t;\t\tfast_io"),.address=tsc(u"Level 1, Tower X, Cybercity, Magarpatta City, Hadapsar, Pune-411013 \t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"fast_io"),.email=tsc(u"libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Manipuri"),.territory=tsc(u"India"),.revision=tsc(u"1.0"),.date=tsc(u"2012-01-17")},.monetary={.int_curr_symbol=tsc(u"INR "),.currency_symbol=tsc(u"₹"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u"."),.thousands_sep=tsc(u","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(u"নোং"),tsc(u"নিং"),tsc(u"লৈবাক"),tsc(u"য়ুম"),tsc(u"শগোল"),tsc(u"ইরা"),tsc(u"থাং")},.day={tsc(u"নোংমাইজিং"),tsc(u"নিংথৌকাবা"),tsc(u"লৈবাকপোকপা"),tsc(u"য়ুমশকৈশা"),tsc(u"শগোলশেন"),tsc(u"ইরাই"),tsc(u"থাংজ")},.abmon={tsc(u"জান"),tsc(u"ফেব"),tsc(u"মার"),tsc(u"এপ্রি"),tsc(u"মে"),tsc(u"জুন"),tsc(u"জুল"),tsc(u"আগ"),tsc(u"সেপ"),tsc(u"ওক্ত"),tsc(u"নবে"),tsc(u"ডিস")},.mon={tsc(u"জানুৱারি"),tsc(u"ফেব্রুৱারি"),tsc(u"মার্চ"),tsc(u"এপ্রিল"),tsc(u"মে"),tsc(u"জুন"),tsc(u"জুলাই"),tsc(u"আগষ্ট"),tsc(u"সেপ্তেম্বর"),tsc(u"ওক্তোবর"),tsc(u"নবেম্বর"),tsc(u"ডিসেম্বর")},.d_t_fmt=tsc(u"%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc(u"%-d//%-m//%y"),.t_fmt=tsc(u"%I:%M:%S %p %Z"),.t_fmt_ampm=tsc(u"%I:%M:%S %p %Z"),.date_fmt=tsc(u"%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc(u"এ.ম."),tsc(u"প.ম.")},.week={7,19971130,1}},.messages={.yesexpr=tsc(u"^[+1yY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"yes"),.nostr=tsc(u"no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c ;%a ;%l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"91")},.name={.name_fmt=tsc(u"%p%t%f%t%g"),.name_gen=tsc(u""),.name_miss=tsc(u"কুমারী"),.name_mr=tsc(u"শ্রী"),.name_mrs=tsc(u"শ্রীমতি"),.name_ms=tsc(u"কুমার")},.address={.postal_fmt=tsc(u"%z%c%T%s%b%e%r"),.country_name=tsc(u"ভারত"),.country_ab2=tsc(u"IN"),.country_ab3=tsc(u"IND"),.country_num=356,.country_car=tsc(u"IND"),.lang_name=tsc(u"মৈতৈলোন্"),.lang_term=tsc(u"mni"),.lang_lib=tsc(u"mni")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Manipuri language locale for India"),.source=tsc(U"Red Hat Pune\t\t;\t\tfast_io"),.address=tsc(U"Level 1, Tower X, Cybercity, Magarpatta City, Hadapsar, Pune-411013 \t\t;\t\thttps://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"fast_io"),.email=tsc(U"libc-alpha@sourceware.org;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Manipuri"),.territory=tsc(U"India"),.revision=tsc(U"1.0"),.date=tsc(U"2012-01-17")},.monetary={.int_curr_symbol=tsc(U"INR "),.currency_symbol=tsc(U"₹"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U","),.mon_grouping={numeric_grouping_storage,2},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U"."),.thousands_sep=tsc(U","),.grouping={numeric_grouping_storage,2}},.time={.abday={tsc(U"নোং"),tsc(U"নিং"),tsc(U"লৈবাক"),tsc(U"য়ুম"),tsc(U"শগোল"),tsc(U"ইরা"),tsc(U"থাং")},.day={tsc(U"নোংমাইজিং"),tsc(U"নিংথৌকাবা"),tsc(U"লৈবাকপোকপা"),tsc(U"য়ুমশকৈশা"),tsc(U"শগোলশেন"),tsc(U"ইরাই"),tsc(U"থাংজ")},.abmon={tsc(U"জান"),tsc(U"ফেব"),tsc(U"মার"),tsc(U"এপ্রি"),tsc(U"মে"),tsc(U"জুন"),tsc(U"জুল"),tsc(U"আগ"),tsc(U"সেপ"),tsc(U"ওক্ত"),tsc(U"নবে"),tsc(U"ডিস")},.mon={tsc(U"জানুৱারি"),tsc(U"ফেব্রুৱারি"),tsc(U"মার্চ"),tsc(U"এপ্রিল"),tsc(U"মে"),tsc(U"জুন"),tsc(U"জুলাই"),tsc(U"আগষ্ট"),tsc(U"সেপ্তেম্বর"),tsc(U"ওক্তোবর"),tsc(U"নবেম্বর"),tsc(U"ডিসেম্বর")},.d_t_fmt=tsc(U"%A %d %b %Y %I:%M:%S %p"),.d_fmt=tsc(U"%-d//%-m//%y"),.t_fmt=tsc(U"%I:%M:%S %p %Z"),.t_fmt_ampm=tsc(U"%I:%M:%S %p %Z"),.date_fmt=tsc(U"%A %d %b %Y %I:%M:%S %p %Z"),.am_pm={tsc(U"এ.ম."),tsc(U"প.ম.")},.week={7,19971130,1}},.messages={.yesexpr=tsc(U"^[+1yY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"yes"),.nostr=tsc(U"no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c ;%a ;%l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"91")},.name={.name_fmt=tsc(U"%p%t%f%t%g"),.name_gen=tsc(U""),.name_miss=tsc(U"কুমারী"),.name_mr=tsc(U"শ্রী"),.name_mrs=tsc(U"শ্রীমতি"),.name_ms=tsc(U"কুমার")},.address={.postal_fmt=tsc(U"%z%c%T%s%b%e%r"),.country_name=tsc(U"ভারত"),.country_ab2=tsc(U"IN"),.country_ab3=tsc(U"IND"),.country_num=356,.country_car=tsc(U"IND"),.lang_name=tsc(U"মৈতৈলোন্"),.lang_term=tsc(U"mni"),.lang_lib=tsc(U"mni")},.measurement={.measurement=1}};


}
}

#include"../main.h"