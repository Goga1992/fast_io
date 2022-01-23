﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Furlan locale for Italy"),.source=tsc("fast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc("pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Friulian"),.territory=tsc("Italy"),.revision=tsc("0.3"),.date=tsc("2004-04-26")},.monetary={.int_curr_symbol=tsc("EUR "),.currency_symbol=tsc("€"),.mon_decimal_point=tsc(","),.mon_thousands_sep=tsc("."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Dom"),tsc("Lun"),tsc("Mar"),tsc("Mie"),tsc("Joi"),tsc("Vin"),tsc("Sab")},.day={tsc("Domenie"),tsc("Lunis"),tsc("Martars"),tsc("Miercus"),tsc("Joibe"),tsc("Vinars"),tsc("Sabide")},.abmon={tsc("Zen"),tsc("Fev"),tsc("Mar"),tsc("Avr"),tsc("Mai"),tsc("Jug"),tsc("Lui"),tsc("Avo"),tsc("Set"),tsc("Otu"),tsc("Nov"),tsc("Dic")},.mon={tsc("Zenâr"),tsc("Fevrâr"),tsc("Març"),tsc("Avrîl"),tsc("Mai"),tsc("Jugn"),tsc("Lui"),tsc("Avost"),tsc("Setembar"),tsc("Otubar"),tsc("Novembar"),tsc("Dicembar")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d. %m. %y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc(""),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc(""),tsc("")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc("^[+1sSjJoOyY]"),.noexpr=tsc("^[-0nN]"),.yesstr=tsc("sì"),.nostr=tsc("no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("00"),.int_prefix=tsc("39")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Italie"),.country_ab2=tsc("IT"),.country_ab3=tsc("ITA"),.country_num=380,.country_car=tsc("I"),.country_isbn=tsc("978-88,979-12"),.lang_name=tsc("furlan"),.lang_term=tsc("fur")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Furlan locale for Italy"),.source=tsc(L"fast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(L"pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Friulian"),.territory=tsc(L"Italy"),.revision=tsc(L"0.3"),.date=tsc(L"2004-04-26")},.monetary={.int_curr_symbol=tsc(L"EUR "),.currency_symbol=tsc(L"€"),.mon_decimal_point=tsc(L","),.mon_thousands_sep=tsc(L"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Dom"),tsc(L"Lun"),tsc(L"Mar"),tsc(L"Mie"),tsc(L"Joi"),tsc(L"Vin"),tsc(L"Sab")},.day={tsc(L"Domenie"),tsc(L"Lunis"),tsc(L"Martars"),tsc(L"Miercus"),tsc(L"Joibe"),tsc(L"Vinars"),tsc(L"Sabide")},.abmon={tsc(L"Zen"),tsc(L"Fev"),tsc(L"Mar"),tsc(L"Avr"),tsc(L"Mai"),tsc(L"Jug"),tsc(L"Lui"),tsc(L"Avo"),tsc(L"Set"),tsc(L"Otu"),tsc(L"Nov"),tsc(L"Dic")},.mon={tsc(L"Zenâr"),tsc(L"Fevrâr"),tsc(L"Març"),tsc(L"Avrîl"),tsc(L"Mai"),tsc(L"Jugn"),tsc(L"Lui"),tsc(L"Avost"),tsc(L"Setembar"),tsc(L"Otubar"),tsc(L"Novembar"),tsc(L"Dicembar")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d. %m. %y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L""),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L""),tsc(L"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1sSjJoOyY]"),.noexpr=tsc(L"^[-0nN]"),.yesstr=tsc(L"sì"),.nostr=tsc(L"no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"00"),.int_prefix=tsc(L"39")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Italie"),.country_ab2=tsc(L"IT"),.country_ab3=tsc(L"ITA"),.country_num=380,.country_car=tsc(L"I"),.country_isbn=tsc(L"978-88,979-12"),.lang_name=tsc(L"furlan"),.lang_term=tsc(L"fur")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Furlan locale for Italy"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u8"pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Friulian"),.territory=tsc(u8"Italy"),.revision=tsc(u8"0.3"),.date=tsc(u8"2004-04-26")},.monetary={.int_curr_symbol=tsc(u8"EUR "),.currency_symbol=tsc(u8"€"),.mon_decimal_point=tsc(u8","),.mon_thousands_sep=tsc(u8"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Dom"),tsc(u8"Lun"),tsc(u8"Mar"),tsc(u8"Mie"),tsc(u8"Joi"),tsc(u8"Vin"),tsc(u8"Sab")},.day={tsc(u8"Domenie"),tsc(u8"Lunis"),tsc(u8"Martars"),tsc(u8"Miercus"),tsc(u8"Joibe"),tsc(u8"Vinars"),tsc(u8"Sabide")},.abmon={tsc(u8"Zen"),tsc(u8"Fev"),tsc(u8"Mar"),tsc(u8"Avr"),tsc(u8"Mai"),tsc(u8"Jug"),tsc(u8"Lui"),tsc(u8"Avo"),tsc(u8"Set"),tsc(u8"Otu"),tsc(u8"Nov"),tsc(u8"Dic")},.mon={tsc(u8"Zenâr"),tsc(u8"Fevrâr"),tsc(u8"Març"),tsc(u8"Avrîl"),tsc(u8"Mai"),tsc(u8"Jugn"),tsc(u8"Lui"),tsc(u8"Avost"),tsc(u8"Setembar"),tsc(u8"Otubar"),tsc(u8"Novembar"),tsc(u8"Dicembar")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d. %m. %y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8""),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8""),tsc(u8"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1sSjJoOyY]"),.noexpr=tsc(u8"^[-0nN]"),.yesstr=tsc(u8"sì"),.nostr=tsc(u8"no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"00"),.int_prefix=tsc(u8"39")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Italie"),.country_ab2=tsc(u8"IT"),.country_ab3=tsc(u8"ITA"),.country_num=380,.country_car=tsc(u8"I"),.country_isbn=tsc(u8"978-88,979-12"),.lang_name=tsc(u8"furlan"),.lang_term=tsc(u8"fur")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Furlan locale for Italy"),.source=tsc(u"fast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(u"pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Friulian"),.territory=tsc(u"Italy"),.revision=tsc(u"0.3"),.date=tsc(u"2004-04-26")},.monetary={.int_curr_symbol=tsc(u"EUR "),.currency_symbol=tsc(u"€"),.mon_decimal_point=tsc(u","),.mon_thousands_sep=tsc(u"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Dom"),tsc(u"Lun"),tsc(u"Mar"),tsc(u"Mie"),tsc(u"Joi"),tsc(u"Vin"),tsc(u"Sab")},.day={tsc(u"Domenie"),tsc(u"Lunis"),tsc(u"Martars"),tsc(u"Miercus"),tsc(u"Joibe"),tsc(u"Vinars"),tsc(u"Sabide")},.abmon={tsc(u"Zen"),tsc(u"Fev"),tsc(u"Mar"),tsc(u"Avr"),tsc(u"Mai"),tsc(u"Jug"),tsc(u"Lui"),tsc(u"Avo"),tsc(u"Set"),tsc(u"Otu"),tsc(u"Nov"),tsc(u"Dic")},.mon={tsc(u"Zenâr"),tsc(u"Fevrâr"),tsc(u"Març"),tsc(u"Avrîl"),tsc(u"Mai"),tsc(u"Jugn"),tsc(u"Lui"),tsc(u"Avost"),tsc(u"Setembar"),tsc(u"Otubar"),tsc(u"Novembar"),tsc(u"Dicembar")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d. %m. %y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u""),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u""),tsc(u"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1sSjJoOyY]"),.noexpr=tsc(u"^[-0nN]"),.yesstr=tsc(u"sì"),.nostr=tsc(u"no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"00"),.int_prefix=tsc(u"39")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Italie"),.country_ab2=tsc(u"IT"),.country_ab3=tsc(u"ITA"),.country_num=380,.country_car=tsc(u"I"),.country_isbn=tsc(u"978-88,979-12"),.lang_name=tsc(u"furlan"),.lang_term=tsc(u"fur")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Furlan locale for Italy"),.source=tsc(U"fast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"Pablo Saratxaga\t\t;\t\tfast_io"),.email=tsc(U"pablo@mandrakesoft.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Friulian"),.territory=tsc(U"Italy"),.revision=tsc(U"0.3"),.date=tsc(U"2004-04-26")},.monetary={.int_curr_symbol=tsc(U"EUR "),.currency_symbol=tsc(U"€"),.mon_decimal_point=tsc(U","),.mon_thousands_sep=tsc(U"."),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=1,.p_sep_by_space=1,.n_cs_precedes=1,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Dom"),tsc(U"Lun"),tsc(U"Mar"),tsc(U"Mie"),tsc(U"Joi"),tsc(U"Vin"),tsc(U"Sab")},.day={tsc(U"Domenie"),tsc(U"Lunis"),tsc(U"Martars"),tsc(U"Miercus"),tsc(U"Joibe"),tsc(U"Vinars"),tsc(U"Sabide")},.abmon={tsc(U"Zen"),tsc(U"Fev"),tsc(U"Mar"),tsc(U"Avr"),tsc(U"Mai"),tsc(U"Jug"),tsc(U"Lui"),tsc(U"Avo"),tsc(U"Set"),tsc(U"Otu"),tsc(U"Nov"),tsc(U"Dic")},.mon={tsc(U"Zenâr"),tsc(U"Fevrâr"),tsc(U"Març"),tsc(U"Avrîl"),tsc(U"Mai"),tsc(U"Jugn"),tsc(U"Lui"),tsc(U"Avost"),tsc(U"Setembar"),tsc(U"Otubar"),tsc(U"Novembar"),tsc(U"Dicembar")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d. %m. %y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U""),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U""),tsc(U"")},.week={7,19971130,4},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1sSjJoOyY]"),.noexpr=tsc(U"^[-0nN]"),.yesstr=tsc(U"sì"),.nostr=tsc(U"no")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"00"),.int_prefix=tsc(U"39")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Italie"),.country_ab2=tsc(U"IT"),.country_ab3=tsc(U"ITA"),.country_num=380,.country_car=tsc(U"I"),.country_isbn=tsc(U"978-88,979-12"),.lang_name=tsc(U"furlan"),.lang_term=tsc(U"fur")},.measurement={.measurement=1}};


}
}

#include"../main.h"