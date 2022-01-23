﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Northern Saami language locale for Norway"),.source=tsc("http:////www.hum.uit.no//a//trond//loc.html\t\t;\t\tfast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("Børre Gaup\t\t;\t\tfast_io"),.email=tsc("boerre.gaup@pc.nu;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Northern Sami"),.territory=tsc("Norway"),.revision=tsc("0.1"),.date=tsc("2001-11-09")},.monetary={.int_curr_symbol=tsc("NOK "),.currency_symbol=tsc("kr"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("sotn"),tsc("vuos"),tsc("maŋ"),tsc("gask"),tsc("duor"),tsc("bear"),tsc("láv")},.day={tsc("sotnabeaivi"),tsc("vuossárga"),tsc("maŋŋebarga"),tsc("gaskavahkku"),tsc("duorasdat"),tsc("bearjadat"),tsc("lávvardat")},.abmon={tsc("ođđj"),tsc("guov"),tsc("njuk"),tsc("cuoŋ"),tsc("mies"),tsc("geas"),tsc("suoi"),tsc("borg"),tsc("čakč"),tsc("golg"),tsc("skáb"),tsc("juov")},.mon={tsc("ođđajagemánnu"),tsc("guovvamánnu"),tsc("njukčamánnu"),tsc("cuoŋománnu"),tsc("miessemánnu"),tsc("geassemánnu"),tsc("suoidnemánnu"),tsc("borgemánnu"),tsc("čakčamánnu"),tsc("golggotmánnu"),tsc("skábmamánnu"),tsc("juovlamánnu")},.d_t_fmt=tsc("%a, %b %e. b. %Y %T %Z"),.d_fmt=tsc("%Y-%m-%d"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%A, %B %d. b. %Y %H:%M:%S %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1JjYy]"),.noexpr=tsc("^[-0IiNn]"),.yesstr=tsc("jo"),.nostr=tsc("ii")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %l"),.tel_dom_fmt=tsc("%l"),.int_select=tsc("00"),.int_prefix=tsc("47")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Norga"),.country_ab2=tsc("NO"),.country_ab3=tsc("NOR"),.country_num=578,.country_car=tsc("N"),.lang_name=tsc("davvisámegiella"),.lang_ab=tsc("se"),.lang_term=tsc("sme"),.lang_lib=tsc("sme")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Northern Saami language locale for Norway"),.source=tsc(L"http:////www.hum.uit.no//a//trond//loc.html\t\t;\t\tfast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"Børre Gaup\t\t;\t\tfast_io"),.email=tsc(L"boerre.gaup@pc.nu;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Northern Sami"),.territory=tsc(L"Norway"),.revision=tsc(L"0.1"),.date=tsc(L"2001-11-09")},.monetary={.int_curr_symbol=tsc(L"NOK "),.currency_symbol=tsc(L"kr"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"sotn"),tsc(L"vuos"),tsc(L"maŋ"),tsc(L"gask"),tsc(L"duor"),tsc(L"bear"),tsc(L"láv")},.day={tsc(L"sotnabeaivi"),tsc(L"vuossárga"),tsc(L"maŋŋebarga"),tsc(L"gaskavahkku"),tsc(L"duorasdat"),tsc(L"bearjadat"),tsc(L"lávvardat")},.abmon={tsc(L"ođđj"),tsc(L"guov"),tsc(L"njuk"),tsc(L"cuoŋ"),tsc(L"mies"),tsc(L"geas"),tsc(L"suoi"),tsc(L"borg"),tsc(L"čakč"),tsc(L"golg"),tsc(L"skáb"),tsc(L"juov")},.mon={tsc(L"ođđajagemánnu"),tsc(L"guovvamánnu"),tsc(L"njukčamánnu"),tsc(L"cuoŋománnu"),tsc(L"miessemánnu"),tsc(L"geassemánnu"),tsc(L"suoidnemánnu"),tsc(L"borgemánnu"),tsc(L"čakčamánnu"),tsc(L"golggotmánnu"),tsc(L"skábmamánnu"),tsc(L"juovlamánnu")},.d_t_fmt=tsc(L"%a, %b %e. b. %Y %T %Z"),.d_fmt=tsc(L"%Y-%m-%d"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%A, %B %d. b. %Y %H:%M:%S %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1JjYy]"),.noexpr=tsc(L"^[-0IiNn]"),.yesstr=tsc(L"jo"),.nostr=tsc(L"ii")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %l"),.tel_dom_fmt=tsc(L"%l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"47")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Norga"),.country_ab2=tsc(L"NO"),.country_ab3=tsc(L"NOR"),.country_num=578,.country_car=tsc(L"N"),.lang_name=tsc(L"davvisámegiella"),.lang_ab=tsc(L"se"),.lang_term=tsc(L"sme"),.lang_lib=tsc(L"sme")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Northern Saami language locale for Norway"),.source=tsc(u8"http:////www.hum.uit.no//a//trond//loc.html\t\t;\t\tfast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"Børre Gaup\t\t;\t\tfast_io"),.email=tsc(u8"boerre.gaup@pc.nu;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Northern Sami"),.territory=tsc(u8"Norway"),.revision=tsc(u8"0.1"),.date=tsc(u8"2001-11-09")},.monetary={.int_curr_symbol=tsc(u8"NOK "),.currency_symbol=tsc(u8"kr"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"sotn"),tsc(u8"vuos"),tsc(u8"maŋ"),tsc(u8"gask"),tsc(u8"duor"),tsc(u8"bear"),tsc(u8"láv")},.day={tsc(u8"sotnabeaivi"),tsc(u8"vuossárga"),tsc(u8"maŋŋebarga"),tsc(u8"gaskavahkku"),tsc(u8"duorasdat"),tsc(u8"bearjadat"),tsc(u8"lávvardat")},.abmon={tsc(u8"ođđj"),tsc(u8"guov"),tsc(u8"njuk"),tsc(u8"cuoŋ"),tsc(u8"mies"),tsc(u8"geas"),tsc(u8"suoi"),tsc(u8"borg"),tsc(u8"čakč"),tsc(u8"golg"),tsc(u8"skáb"),tsc(u8"juov")},.mon={tsc(u8"ođđajagemánnu"),tsc(u8"guovvamánnu"),tsc(u8"njukčamánnu"),tsc(u8"cuoŋománnu"),tsc(u8"miessemánnu"),tsc(u8"geassemánnu"),tsc(u8"suoidnemánnu"),tsc(u8"borgemánnu"),tsc(u8"čakčamánnu"),tsc(u8"golggotmánnu"),tsc(u8"skábmamánnu"),tsc(u8"juovlamánnu")},.d_t_fmt=tsc(u8"%a, %b %e. b. %Y %T %Z"),.d_fmt=tsc(u8"%Y-%m-%d"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%A, %B %d. b. %Y %H:%M:%S %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1JjYy]"),.noexpr=tsc(u8"^[-0IiNn]"),.yesstr=tsc(u8"jo"),.nostr=tsc(u8"ii")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %l"),.tel_dom_fmt=tsc(u8"%l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"47")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Norga"),.country_ab2=tsc(u8"NO"),.country_ab3=tsc(u8"NOR"),.country_num=578,.country_car=tsc(u8"N"),.lang_name=tsc(u8"davvisámegiella"),.lang_ab=tsc(u8"se"),.lang_term=tsc(u8"sme"),.lang_lib=tsc(u8"sme")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Northern Saami language locale for Norway"),.source=tsc(u"http:////www.hum.uit.no//a//trond//loc.html\t\t;\t\tfast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"Børre Gaup\t\t;\t\tfast_io"),.email=tsc(u"boerre.gaup@pc.nu;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Northern Sami"),.territory=tsc(u"Norway"),.revision=tsc(u"0.1"),.date=tsc(u"2001-11-09")},.monetary={.int_curr_symbol=tsc(u"NOK "),.currency_symbol=tsc(u"kr"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"sotn"),tsc(u"vuos"),tsc(u"maŋ"),tsc(u"gask"),tsc(u"duor"),tsc(u"bear"),tsc(u"láv")},.day={tsc(u"sotnabeaivi"),tsc(u"vuossárga"),tsc(u"maŋŋebarga"),tsc(u"gaskavahkku"),tsc(u"duorasdat"),tsc(u"bearjadat"),tsc(u"lávvardat")},.abmon={tsc(u"ođđj"),tsc(u"guov"),tsc(u"njuk"),tsc(u"cuoŋ"),tsc(u"mies"),tsc(u"geas"),tsc(u"suoi"),tsc(u"borg"),tsc(u"čakč"),tsc(u"golg"),tsc(u"skáb"),tsc(u"juov")},.mon={tsc(u"ođđajagemánnu"),tsc(u"guovvamánnu"),tsc(u"njukčamánnu"),tsc(u"cuoŋománnu"),tsc(u"miessemánnu"),tsc(u"geassemánnu"),tsc(u"suoidnemánnu"),tsc(u"borgemánnu"),tsc(u"čakčamánnu"),tsc(u"golggotmánnu"),tsc(u"skábmamánnu"),tsc(u"juovlamánnu")},.d_t_fmt=tsc(u"%a, %b %e. b. %Y %T %Z"),.d_fmt=tsc(u"%Y-%m-%d"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%A, %B %d. b. %Y %H:%M:%S %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1JjYy]"),.noexpr=tsc(u"^[-0IiNn]"),.yesstr=tsc(u"jo"),.nostr=tsc(u"ii")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %l"),.tel_dom_fmt=tsc(u"%l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"47")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Norga"),.country_ab2=tsc(u"NO"),.country_ab3=tsc(u"NOR"),.country_num=578,.country_car=tsc(u"N"),.lang_name=tsc(u"davvisámegiella"),.lang_ab=tsc(u"se"),.lang_term=tsc(u"sme"),.lang_lib=tsc(u"sme")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Northern Saami language locale for Norway"),.source=tsc(U"http:////www.hum.uit.no//a//trond//loc.html\t\t;\t\tfast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"Børre Gaup\t\t;\t\tfast_io"),.email=tsc(U"boerre.gaup@pc.nu;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Northern Sami"),.territory=tsc(U"Norway"),.revision=tsc(U"0.1"),.date=tsc(U"2001-11-09")},.monetary={.int_curr_symbol=tsc(U"NOK "),.currency_symbol=tsc(U"kr"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=0,.n_cs_precedes=1,.n_sep_by_space=0,.p_sign_posn=4,.n_sign_posn=4},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"sotn"),tsc(U"vuos"),tsc(U"maŋ"),tsc(U"gask"),tsc(U"duor"),tsc(U"bear"),tsc(U"láv")},.day={tsc(U"sotnabeaivi"),tsc(U"vuossárga"),tsc(U"maŋŋebarga"),tsc(U"gaskavahkku"),tsc(U"duorasdat"),tsc(U"bearjadat"),tsc(U"lávvardat")},.abmon={tsc(U"ođđj"),tsc(U"guov"),tsc(U"njuk"),tsc(U"cuoŋ"),tsc(U"mies"),tsc(U"geas"),tsc(U"suoi"),tsc(U"borg"),tsc(U"čakč"),tsc(U"golg"),tsc(U"skáb"),tsc(U"juov")},.mon={tsc(U"ođđajagemánnu"),tsc(U"guovvamánnu"),tsc(U"njukčamánnu"),tsc(U"cuoŋománnu"),tsc(U"miessemánnu"),tsc(U"geassemánnu"),tsc(U"suoidnemánnu"),tsc(U"borgemánnu"),tsc(U"čakčamánnu"),tsc(U"golggotmánnu"),tsc(U"skábmamánnu"),tsc(U"juovlamánnu")},.d_t_fmt=tsc(U"%a, %b %e. b. %Y %T %Z"),.d_fmt=tsc(U"%Y-%m-%d"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%A, %B %d. b. %Y %H:%M:%S %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1JjYy]"),.noexpr=tsc(U"^[-0IiNn]"),.yesstr=tsc(U"jo"),.nostr=tsc(U"ii")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %l"),.tel_dom_fmt=tsc(U"%l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"47")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Norga"),.country_ab2=tsc(U"NO"),.country_ab3=tsc(U"NOR"),.country_num=578,.country_car=tsc(U"N"),.lang_name=tsc(U"davvisámegiella"),.lang_ab=tsc(U"se"),.lang_term=tsc(U"sme"),.lang_lib=tsc(U"sme")},.measurement={.measurement=1}};


}
}

#include"../main.h"