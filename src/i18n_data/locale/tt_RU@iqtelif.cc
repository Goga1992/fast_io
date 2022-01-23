﻿#include"../localedef.h"

namespace fast_io_i18n
{
namespace
{

inline constexpr std::size_t numeric_grouping_storage[]{3};

inline constexpr lc_all lc_all_global{.identification={.title=tsc("Tatar language locale using IQTElif alphabet; for Tatarstan, Russian Federation"),.source=tsc("fast_io"),.address=tsc("https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc("Reshat Sabiq\t\t;\t\tfast_io"),.email=tsc("tatar.iqtelif.i18n@gmail.com;euloanty@live.com"),.tel=tsc(""),.fax=tsc(""),.language=tsc("Tatar"),.territory=tsc("Russia"),.revision=tsc("0.1"),.date=tsc("2006-10-12")},.monetary={.int_curr_symbol=tsc("RUB "),.currency_symbol=tsc("₽"),.mon_decimal_point=tsc("."),.mon_thousands_sep=tsc(" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(""),.negative_sign=tsc("-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(","),.thousands_sep=tsc("."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc("Yek"),tsc("Düş"),tsc("Siş"),tsc("Çer"),tsc("Pen"),tsc("Com"),tsc("Şim")},.day={tsc("Yekşembí"),tsc("Düşembí"),tsc("Sişembí"),tsc("Çerşembí"),tsc("Pencíşembí"),tsc("Comğa"),tsc("Şimbe")},.abmon={tsc("Ğın"),tsc("Fiw"),tsc("Mar"),tsc("Apr"),tsc("May"),tsc("Yün"),tsc("Yül"),tsc("Awg"),tsc("Sin"),tsc("Ükt"),tsc("Noy"),tsc("Dik")},.mon={tsc("Ğınwar"),tsc("Fiwral'"),tsc("Mart"),tsc("April"),tsc("May"),tsc("Yün"),tsc("Yül"),tsc("Awgust"),tsc("Sintebír"),tsc("Üktebír"),tsc("Noyebír"),tsc("Dikebír")},.d_t_fmt=tsc("%a %d %b %Y %T"),.d_fmt=tsc("%d.%m.%Y"),.t_fmt=tsc("%T"),.t_fmt_ampm=tsc("%I:%M:%S %p"),.date_fmt=tsc("%a %d %b %Y %T %Z"),.am_pm={tsc("ÖA"),tsc("ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc("^[+1Ee]"),.noexpr=tsc("^[-0YyNn]"),.yesstr=tsc("eyí"),.nostr=tsc("yuq")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc("+%c %a %l"),.int_select=tsc("0~10"),.int_prefix=tsc("7")},.name={.name_fmt=tsc("%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc("%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc("Urıs Patşahlıq"),.country_ab2=tsc("RU"),.country_ab3=tsc("RUS"),.country_num=643,.country_car=tsc("RUS"),.lang_name=tsc("tatar tele"),.lang_ab=tsc("tt"),.lang_term=tsc("tat"),.lang_lib=tsc("tat")},.measurement={.measurement=1}};

inline constexpr wlc_all wlc_all_global{.identification={.title=tsc(L"Tatar language locale using IQTElif alphabet; for Tatarstan, Russian Federation"),.source=tsc(L"fast_io"),.address=tsc(L"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(L"Reshat Sabiq\t\t;\t\tfast_io"),.email=tsc(L"tatar.iqtelif.i18n@gmail.com;euloanty@live.com"),.tel=tsc(L""),.fax=tsc(L""),.language=tsc(L"Tatar"),.territory=tsc(L"Russia"),.revision=tsc(L"0.1"),.date=tsc(L"2006-10-12")},.monetary={.int_curr_symbol=tsc(L"RUB "),.currency_symbol=tsc(L"₽"),.mon_decimal_point=tsc(L"."),.mon_thousands_sep=tsc(L" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(L""),.negative_sign=tsc(L"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(L","),.thousands_sep=tsc(L"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(L"Yek"),tsc(L"Düş"),tsc(L"Siş"),tsc(L"Çer"),tsc(L"Pen"),tsc(L"Com"),tsc(L"Şim")},.day={tsc(L"Yekşembí"),tsc(L"Düşembí"),tsc(L"Sişembí"),tsc(L"Çerşembí"),tsc(L"Pencíşembí"),tsc(L"Comğa"),tsc(L"Şimbe")},.abmon={tsc(L"Ğın"),tsc(L"Fiw"),tsc(L"Mar"),tsc(L"Apr"),tsc(L"May"),tsc(L"Yün"),tsc(L"Yül"),tsc(L"Awg"),tsc(L"Sin"),tsc(L"Ükt"),tsc(L"Noy"),tsc(L"Dik")},.mon={tsc(L"Ğınwar"),tsc(L"Fiwral'"),tsc(L"Mart"),tsc(L"April"),tsc(L"May"),tsc(L"Yün"),tsc(L"Yül"),tsc(L"Awgust"),tsc(L"Sintebír"),tsc(L"Üktebír"),tsc(L"Noyebír"),tsc(L"Dikebír")},.d_t_fmt=tsc(L"%a %d %b %Y %T"),.d_fmt=tsc(L"%d.%m.%Y"),.t_fmt=tsc(L"%T"),.t_fmt_ampm=tsc(L"%I:%M:%S %p"),.date_fmt=tsc(L"%a %d %b %Y %T %Z"),.am_pm={tsc(L"ÖA"),tsc(L"ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(L"^[+1Ee]"),.noexpr=tsc(L"^[-0YyNn]"),.yesstr=tsc(L"eyí"),.nostr=tsc(L"yuq")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(L"+%c %a %l"),.int_select=tsc(L"0~10"),.int_prefix=tsc(L"7")},.name={.name_fmt=tsc(L"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(L"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(L"Urıs Patşahlıq"),.country_ab2=tsc(L"RU"),.country_ab3=tsc(L"RUS"),.country_num=643,.country_car=tsc(L"RUS"),.lang_name=tsc(L"tatar tele"),.lang_ab=tsc(L"tt"),.lang_term=tsc(L"tat"),.lang_lib=tsc(L"tat")},.measurement={.measurement=1}};

inline constexpr u8lc_all u8lc_all_global{.identification={.title=tsc(u8"Tatar language locale using IQTElif alphabet; for Tatarstan, Russian Federation"),.source=tsc(u8"fast_io"),.address=tsc(u8"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u8"Reshat Sabiq\t\t;\t\tfast_io"),.email=tsc(u8"tatar.iqtelif.i18n@gmail.com;euloanty@live.com"),.tel=tsc(u8""),.fax=tsc(u8""),.language=tsc(u8"Tatar"),.territory=tsc(u8"Russia"),.revision=tsc(u8"0.1"),.date=tsc(u8"2006-10-12")},.monetary={.int_curr_symbol=tsc(u8"RUB "),.currency_symbol=tsc(u8"₽"),.mon_decimal_point=tsc(u8"."),.mon_thousands_sep=tsc(u8" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u8""),.negative_sign=tsc(u8"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u8","),.thousands_sep=tsc(u8"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u8"Yek"),tsc(u8"Düş"),tsc(u8"Siş"),tsc(u8"Çer"),tsc(u8"Pen"),tsc(u8"Com"),tsc(u8"Şim")},.day={tsc(u8"Yekşembí"),tsc(u8"Düşembí"),tsc(u8"Sişembí"),tsc(u8"Çerşembí"),tsc(u8"Pencíşembí"),tsc(u8"Comğa"),tsc(u8"Şimbe")},.abmon={tsc(u8"Ğın"),tsc(u8"Fiw"),tsc(u8"Mar"),tsc(u8"Apr"),tsc(u8"May"),tsc(u8"Yün"),tsc(u8"Yül"),tsc(u8"Awg"),tsc(u8"Sin"),tsc(u8"Ükt"),tsc(u8"Noy"),tsc(u8"Dik")},.mon={tsc(u8"Ğınwar"),tsc(u8"Fiwral'"),tsc(u8"Mart"),tsc(u8"April"),tsc(u8"May"),tsc(u8"Yün"),tsc(u8"Yül"),tsc(u8"Awgust"),tsc(u8"Sintebír"),tsc(u8"Üktebír"),tsc(u8"Noyebír"),tsc(u8"Dikebír")},.d_t_fmt=tsc(u8"%a %d %b %Y %T"),.d_fmt=tsc(u8"%d.%m.%Y"),.t_fmt=tsc(u8"%T"),.t_fmt_ampm=tsc(u8"%I:%M:%S %p"),.date_fmt=tsc(u8"%a %d %b %Y %T %Z"),.am_pm={tsc(u8"ÖA"),tsc(u8"ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u8"^[+1Ee]"),.noexpr=tsc(u8"^[-0YyNn]"),.yesstr=tsc(u8"eyí"),.nostr=tsc(u8"yuq")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u8"+%c %a %l"),.int_select=tsc(u8"0~10"),.int_prefix=tsc(u8"7")},.name={.name_fmt=tsc(u8"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u8"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u8"Urıs Patşahlıq"),.country_ab2=tsc(u8"RU"),.country_ab3=tsc(u8"RUS"),.country_num=643,.country_car=tsc(u8"RUS"),.lang_name=tsc(u8"tatar tele"),.lang_ab=tsc(u8"tt"),.lang_term=tsc(u8"tat"),.lang_lib=tsc(u8"tat")},.measurement={.measurement=1}};

inline constexpr u16lc_all u16lc_all_global{.identification={.title=tsc(u"Tatar language locale using IQTElif alphabet; for Tatarstan, Russian Federation"),.source=tsc(u"fast_io"),.address=tsc(u"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(u"Reshat Sabiq\t\t;\t\tfast_io"),.email=tsc(u"tatar.iqtelif.i18n@gmail.com;euloanty@live.com"),.tel=tsc(u""),.fax=tsc(u""),.language=tsc(u"Tatar"),.territory=tsc(u"Russia"),.revision=tsc(u"0.1"),.date=tsc(u"2006-10-12")},.monetary={.int_curr_symbol=tsc(u"RUB "),.currency_symbol=tsc(u"₽"),.mon_decimal_point=tsc(u"."),.mon_thousands_sep=tsc(u" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(u""),.negative_sign=tsc(u"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(u","),.thousands_sep=tsc(u"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(u"Yek"),tsc(u"Düş"),tsc(u"Siş"),tsc(u"Çer"),tsc(u"Pen"),tsc(u"Com"),tsc(u"Şim")},.day={tsc(u"Yekşembí"),tsc(u"Düşembí"),tsc(u"Sişembí"),tsc(u"Çerşembí"),tsc(u"Pencíşembí"),tsc(u"Comğa"),tsc(u"Şimbe")},.abmon={tsc(u"Ğın"),tsc(u"Fiw"),tsc(u"Mar"),tsc(u"Apr"),tsc(u"May"),tsc(u"Yün"),tsc(u"Yül"),tsc(u"Awg"),tsc(u"Sin"),tsc(u"Ükt"),tsc(u"Noy"),tsc(u"Dik")},.mon={tsc(u"Ğınwar"),tsc(u"Fiwral'"),tsc(u"Mart"),tsc(u"April"),tsc(u"May"),tsc(u"Yün"),tsc(u"Yül"),tsc(u"Awgust"),tsc(u"Sintebír"),tsc(u"Üktebír"),tsc(u"Noyebír"),tsc(u"Dikebír")},.d_t_fmt=tsc(u"%a %d %b %Y %T"),.d_fmt=tsc(u"%d.%m.%Y"),.t_fmt=tsc(u"%T"),.t_fmt_ampm=tsc(u"%I:%M:%S %p"),.date_fmt=tsc(u"%a %d %b %Y %T %Z"),.am_pm={tsc(u"ÖA"),tsc(u"ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(u"^[+1Ee]"),.noexpr=tsc(u"^[-0YyNn]"),.yesstr=tsc(u"eyí"),.nostr=tsc(u"yuq")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(u"+%c %a %l"),.int_select=tsc(u"0~10"),.int_prefix=tsc(u"7")},.name={.name_fmt=tsc(u"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(u"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(u"Urıs Patşahlıq"),.country_ab2=tsc(u"RU"),.country_ab3=tsc(u"RUS"),.country_num=643,.country_car=tsc(u"RUS"),.lang_name=tsc(u"tatar tele"),.lang_ab=tsc(u"tt"),.lang_term=tsc(u"tat"),.lang_lib=tsc(u"tat")},.measurement={.measurement=1}};

inline constexpr u32lc_all u32lc_all_global{.identification={.title=tsc(U"Tatar language locale using IQTElif alphabet; for Tatarstan, Russian Federation"),.source=tsc(U"fast_io"),.address=tsc(U"https://gitee.com/qabeowjbtkwb/fast_io"),.contact=tsc(U"Reshat Sabiq\t\t;\t\tfast_io"),.email=tsc(U"tatar.iqtelif.i18n@gmail.com;euloanty@live.com"),.tel=tsc(U""),.fax=tsc(U""),.language=tsc(U"Tatar"),.territory=tsc(U"Russia"),.revision=tsc(U"0.1"),.date=tsc(U"2006-10-12")},.monetary={.int_curr_symbol=tsc(U"RUB "),.currency_symbol=tsc(U"₽"),.mon_decimal_point=tsc(U"."),.mon_thousands_sep=tsc(U" "),.mon_grouping={numeric_grouping_storage,1},.positive_sign=tsc(U""),.negative_sign=tsc(U"-"),.int_frac_digits=2,.frac_digits=2,.p_cs_precedes=0,.p_sep_by_space=1,.n_cs_precedes=0,.n_sep_by_space=1,.p_sign_posn=1,.n_sign_posn=1},.numeric={.decimal_point=tsc(U","),.thousands_sep=tsc(U"."),.grouping={numeric_grouping_storage,1}},.time={.abday={tsc(U"Yek"),tsc(U"Düş"),tsc(U"Siş"),tsc(U"Çer"),tsc(U"Pen"),tsc(U"Com"),tsc(U"Şim")},.day={tsc(U"Yekşembí"),tsc(U"Düşembí"),tsc(U"Sişembí"),tsc(U"Çerşembí"),tsc(U"Pencíşembí"),tsc(U"Comğa"),tsc(U"Şimbe")},.abmon={tsc(U"Ğın"),tsc(U"Fiw"),tsc(U"Mar"),tsc(U"Apr"),tsc(U"May"),tsc(U"Yün"),tsc(U"Yül"),tsc(U"Awg"),tsc(U"Sin"),tsc(U"Ükt"),tsc(U"Noy"),tsc(U"Dik")},.mon={tsc(U"Ğınwar"),tsc(U"Fiwral'"),tsc(U"Mart"),tsc(U"April"),tsc(U"May"),tsc(U"Yün"),tsc(U"Yül"),tsc(U"Awgust"),tsc(U"Sintebír"),tsc(U"Üktebír"),tsc(U"Noyebír"),tsc(U"Dikebír")},.d_t_fmt=tsc(U"%a %d %b %Y %T"),.d_fmt=tsc(U"%d.%m.%Y"),.t_fmt=tsc(U"%T"),.t_fmt_ampm=tsc(U"%I:%M:%S %p"),.date_fmt=tsc(U"%a %d %b %Y %T %Z"),.am_pm={tsc(U"ÖA"),tsc(U"ÖS")},.week={7,19971130,1},.first_weekday=2},.messages={.yesexpr=tsc(U"^[+1Ee]"),.noexpr=tsc(U"^[-0YyNn]"),.yesstr=tsc(U"eyí"),.nostr=tsc(U"yuq")},.paper={.width=210,.height=297},.telephone={.tel_int_fmt=tsc(U"+%c %a %l"),.int_select=tsc(U"0~10"),.int_prefix=tsc(U"7")},.name={.name_fmt=tsc(U"%d%t%g%t%m%t%f")},.address={.postal_fmt=tsc(U"%f%N%a%N%d%N%b%N%s %h %e %r%N%z %T%N%c%N"),.country_name=tsc(U"Urıs Patşahlıq"),.country_ab2=tsc(U"RU"),.country_ab3=tsc(U"RUS"),.country_num=643,.country_car=tsc(U"RUS"),.lang_name=tsc(U"tatar tele"),.lang_ab=tsc(U"tt"),.lang_term=tsc(U"tat"),.lang_lib=tsc(U"tat")},.measurement={.measurement=1}};


}
}

#include"../main.h"