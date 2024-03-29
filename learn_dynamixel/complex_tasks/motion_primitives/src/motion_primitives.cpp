#include "motion_primitives.h"
#include <cmath>

vector<double> motion_primitives::home_to_sleep(double phase) {
  vector<double> angles(5);

  angles[0] =
      -0.043134189487943786 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.029376782128568202 * exp(-pow(phase - 0.9285714285714285, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.007286554069645845 * exp(-pow(phase - 0.8571428571428571, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.022614550940596168 * exp(-pow(phase - 0.7857142857142857, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.04552374430389872 * exp(-pow(phase - 0.7142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.007306051092166754 * exp(-pow(phase - 0.6428571428571428, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.04748653588871665 * exp(-pow(phase - 0.5714285714285714, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.00536065259717855 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.03992580545564728 * exp(-pow(phase - 0.42857142857142855, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.051634167456556135 * exp(-pow(phase - 0.3571428571428571, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.01356236926598875 * exp(-pow(phase - 0.2857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.00965308308266799 * exp(-pow(phase - 0.21428571428571427, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.03440587996614752 * exp(-pow(phase - 0.14285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.0030184716447707594 * exp(-pow(phase - 0.07142857142857142, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.03930542576079077 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      3.2087598933561132;

  angles[1] =
      -0.6533220880802824 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.23585205333752435 * exp(-pow(phase - 0.9285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.37405145692006414 * exp(-pow(phase - 0.8571428571428571, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.17361833230220958 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.18240458758787348 * exp(-pow(phase - 0.7142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.05690417792401048 * exp(-pow(phase - 0.6428571428571428, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.02651032837135281 * exp(-pow(phase - 0.5714285714285714, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.14807478681794128 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.2141771695120891 * exp(-pow(phase - 0.42857142857142855, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.20142800808125338 * exp(-pow(phase - 0.3571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.38839033676989576 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.2608859581870431 * exp(-pow(phase - 0.21428571428571427, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.5992984221785065 * exp(-pow(phase - 0.14285714285714285, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.185474316600033 * exp(-pow(phase - 0.07142857142857142, 2) /
                              (2 * pow(0.06666666666666667, 2))) +
      0.8301165358278553 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      2.1121866418103066;

  angles[2] =
      -0.5268640901293633 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.11255831971201102 * exp(-pow(phase - 0.9285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.3436445109076409 * exp(-pow(phase - 0.8571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.11249073210212934 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.23717353411720632 * exp(-pow(phase - 0.7142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.01437764850502754 * exp(-pow(phase - 0.6428571428571428, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.11746297450972909 * exp(-pow(phase - 0.5714285714285714, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.12756730062762545 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.07440988435607387 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.18055313249490945 * exp(-pow(phase - 0.3571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.19498871710772914 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.273132761428867 * exp(-pow(phase - 0.21428571428571427, 2) /
                              (2 * pow(0.06666666666666667, 2))) +
      0.39631427995329727 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.15277516963073645 * exp(-pow(phase - 0.07142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.5917378559063486 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      2.3796274288917205;

  angles[3] =
      -0.33545146379342405 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.1425202913174477 * exp(-pow(phase - 0.9285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.10994496898257022 * exp(-pow(phase - 0.8571428571428571, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.10567908941444326 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.08345574438085634 * exp(-pow(phase - 0.7142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.02690587409330636 * exp(-pow(phase - 0.6428571428571428, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.07157585630362728 * exp(-pow(phase - 0.5714285714285714, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.0206153727859828 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.04802192048941745 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.0593768437843023 * exp(-pow(phase - 0.3571428571428571, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.15283638326172433 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.0424665218499487 * exp(-pow(phase - 0.21428571428571427, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.16921432123340008 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.1294399528375232 * exp(-pow(phase - 0.07142857142857142, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.29745419321336364 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      2.796936956448281;

  angles[4] = M_PI;

  return angles;
}

vector<double> motion_primitives::sleep_to_home(double phase) {
  vector<double> angles(5);

  angles[0] =
      0.09367006728308169 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.043540496282709285 * exp(-pow(phase - 0.9285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.03491447055528507 * exp(-pow(phase - 0.8571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.07998130077591004 * exp(-pow(phase - 0.7857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.0524741267635509 * exp(-pow(phase - 0.7142857142857142, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.08250299041356168 * exp(-pow(phase - 0.6428571428571428, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.0471991152503346 * exp(-pow(phase - 0.5714285714285714, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.08102607219915559 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.03870635589405946 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.07198013855623575 * exp(-pow(phase - 0.3571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.09498887752173157 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.050449987527038775 * exp(-pow(phase - 0.21428571428571427, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.11474544229881012 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.007773214675046436 * exp(-pow(phase - 0.07142857142857142, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      0.1328487313275506 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      3.0034633695725628;

  angles[1] =
      1.110397801146684 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.2517326717669919 * exp(-pow(phase - 0.9285714285714285, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.8392732699838703 * exp(-pow(phase - 0.8571428571428571, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.465396722103228 * exp(-pow(phase - 0.7857142857142857, 2) /
                              (2 * pow(0.06666666666666667, 2))) +
      0.6917236872326677 * exp(-pow(phase - 0.7142857142857142, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.573379621384869 * exp(-pow(phase - 0.6428571428571428, 2) /
                              (2 * pow(0.06666666666666667, 2))) +
      0.6170505129361405 * exp(-pow(phase - 0.5714285714285714, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.5975302364566817 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.4725553955955224 * exp(-pow(phase - 0.42857142857142855, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.467162984721905 * exp(-pow(phase - 0.3571428571428571, 2) /
                              (2 * pow(0.06666666666666667, 2))) +
      0.0878271587671291 * exp(-pow(phase - 0.2857142857142857, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.11743408843931036 * exp(-pow(phase - 0.21428571428571427, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.3094130712610168 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.1927940606620342 * exp(-pow(phase - 0.07142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.36939669661415486 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      1.8034275863400762;

  angles[2] =
      0.9468242007446435 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.2282033114319546 * exp(-pow(phase - 0.9285714285714285, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.7060936724522247 * exp(-pow(phase - 0.8571428571428571, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.4086505121396238 * exp(-pow(phase - 0.7857142857142857, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.5733201636386225 * exp(-pow(phase - 0.7142857142857142, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.40871777026967493 * exp(-pow(phase - 0.6428571428571428, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.7724550202495362 * exp(-pow(phase - 0.5714285714285714, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.26146736612555266 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.7004199659248931 * exp(-pow(phase - 0.42857142857142855, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.18424315422518678 * exp(-pow(phase - 0.3571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.28563832689388047 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.10532429958872802 * exp(-pow(phase - 0.21428571428571427, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.1583812342651587 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.257380703116624 * exp(-pow(phase - 0.07142857142857142, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.33620226407906273 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      1.9968199874181494;

  angles[3] =
      0.5127126888549736 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.031097779584076335 * exp(-pow(phase - 0.9285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.4629855668059095 * exp(-pow(phase - 0.8571428571428571, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.031582903735882795 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.49980328921550576 * exp(-pow(phase - 0.7142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.02345521173582643 * exp(-pow(phase - 0.6428571428571428, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.23778445546421434 * exp(-pow(phase - 0.5714285714285714, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.14745045917625443 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.20438028281176113 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.09562663437931107 * exp(-pow(phase - 0.3571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.0913950570600468 * exp(-pow(phase - 0.2857142857142857, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.04341161826775286 * exp(-pow(phase - 0.21428571428571427, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.01820251676955209 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.001992519800095849 * exp(-pow(phase - 0.07142857142857142, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      0.03698353843311075 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      2.503710975797164;

  angles[4] = M_PI;

  return angles;
}

vector<double> motion_primitives::draw_x(double phase) {
  vector<double> angles(5);

  angles[0] =
      -0.4901248330302037 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.058058578709199615 * exp(-pow(phase - 0.9285714285714285, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.3893610786861901 * exp(-pow(phase - 0.8571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.1705843417107431 * exp(-pow(phase - 0.7857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.07330653679755184 * exp(-pow(phase - 0.7142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.3579974113354636 * exp(-pow(phase - 0.6428571428571428, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.31907569208831443 * exp(-pow(phase - 0.5714285714285714, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.36549763695272475 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.2812597075061287 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.4124265358464587 * exp(-pow(phase - 0.3571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.2658135980497649 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.06159148407082338 * exp(-pow(phase - 0.21428571428571427, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.2480120700194739 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.14506218633094292 * exp(-pow(phase - 0.07142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.47239609101449354 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      3.758447462099242;

  angles[1] =
      -1.0815190397914973 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.041898304756311955 * exp(-pow(phase - 0.9285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -1.139157757392689 * exp(-pow(phase - 0.8571428571428571, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.1935780169095187 * exp(-pow(phase - 0.7857142857142857, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.3575003901282008 * exp(-pow(phase - 0.7142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.1682828832869161 * exp(-pow(phase - 0.6428571428571428, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.24905131338848996 * exp(-pow(phase - 0.5714285714285714, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.17798628819695228 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      -1.1683136322156562 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.680940104353339 * exp(-pow(phase - 0.3571428571428571, 2) /
                              (2 * pow(0.06666666666666667, 2))) +
      -0.8590160421792445 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.4074042061124299 * exp(-pow(phase - 0.21428571428571427, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.6308603417788357 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.025392793445913053 * exp(-pow(phase - 0.07142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -1.1153797993226835 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      4.289194599732523;

  angles[2] =
      -0.8670281227926813 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.15216696697371113 * exp(-pow(phase - 0.9285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -1.1724340378863718 * exp(-pow(phase - 0.8571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.3786909522723989 * exp(-pow(phase - 0.7857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -1.2080012010096413 * exp(-pow(phase - 0.7142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.26523897109497785 * exp(-pow(phase - 0.6428571428571428, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.7119133553026478 * exp(-pow(phase - 0.5714285714285714, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.04385938484460272 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      -1.1043504400932722 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.4569802161830241 * exp(-pow(phase - 0.3571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.9515513831884794 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.027921595076713324 * exp(-pow(phase - 0.21428571428571427, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.9938183988352236 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.10786812222730591 * exp(-pow(phase - 0.07142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.7739815981464311 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      3.952251300463743;

  angles[3] =
      -0.6138802021766478 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.33635415423122383 * exp(-pow(phase - 0.9285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.13211400010160101 * exp(-pow(phase - 0.8571428571428571, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.2644754316177824 * exp(-pow(phase - 0.7857142857142857, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      0.6621918962063678 * exp(-pow(phase - 0.7142857142857142, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.24239868708317047 * exp(-pow(phase - 0.6428571428571428, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.26054367116416266 * exp(-pow(phase - 0.5714285714285714, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.31404830090504543 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.16046001461809833 * exp(-pow(phase - 0.42857142857142855, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.9081671280717352 * exp(-pow(phase - 0.3571428571428571, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.23868666384675397 * exp(-pow(phase - 0.2857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.21251730318217588 * exp(-pow(phase - 0.21428571428571427, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.0664854712070575 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.0723110714367543 * exp(-pow(phase - 0.07142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.9659689121674226 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      4.030493284718629;

  angles[4] = M_PI;

  return angles;
}

vector<double> motion_primitives::draw_line(double phase) {
  vector<double> angles(5);

  angles[0] =
      -0.06898941282952917 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.021255127705539223 * exp(-pow(phase - 0.9285714285714285, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.06103295751378526 * exp(-pow(phase - 0.8571428571428571, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.02939551692631026 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.07808033986001359 * exp(-pow(phase - 0.7142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.004032124928219118 * exp(-pow(phase - 0.6428571428571428, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.10935156659651755 * exp(-pow(phase - 0.5714285714285714, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.01039706561277258 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.11426080926915047 * exp(-pow(phase - 0.42857142857142855, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.006543025170174237 * exp(-pow(phase - 0.3571428571428571, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.13795026962811816 * exp(-pow(phase - 0.2857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.07805868505974936 * exp(-pow(phase - 0.21428571428571427, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.22655541105471905 * exp(-pow(phase - 0.14285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.05507865346346383 * exp(-pow(phase - 0.07142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.12983414234940965 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      3.2842061938373877;

  angles[1] =
      -0.4715243360842276 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.1084667815363938 * exp(-pow(phase - 0.9285714285714285, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.4485362710219301 * exp(-pow(phase - 0.8571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.40573330110204553 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.5601315073357358 * exp(-pow(phase - 0.7142857142857142, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.33448262398387607 * exp(-pow(phase - 0.6428571428571428, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.38718630008488863 * exp(-pow(phase - 0.5714285714285714, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.23525918601904935 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.33765841474489794 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.028619325738829735 * exp(-pow(phase - 0.3571428571428571, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.18563715903511133 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.27769417676763086 * exp(-pow(phase - 0.21428571428571427, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.23345078174579653 * exp(-pow(phase - 0.14285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.10961205643121234 * exp(-pow(phase - 0.07142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.36695319546247795 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      3.6517100937258293;

  angles[2] =
      0.3016777080862438 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.007517789324097718 * exp(-pow(phase - 0.9285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.14147191740171472 * exp(-pow(phase - 0.8571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.46187406819044646 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.2808652244128696 * exp(-pow(phase - 0.7142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.3643574307329987 * exp(-pow(phase - 0.6428571428571428, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.44290535913047424 * exp(-pow(phase - 0.5714285714285714, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.08856471778390088 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.01658827303282427 * exp(-pow(phase - 0.42857142857142855, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.10899362742167243 * exp(-pow(phase - 0.3571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.010053017908744938 * exp(-pow(phase - 0.2857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -0.19692824176096152 * exp(-pow(phase - 0.21428571428571427, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.2879467300231579 * exp(-pow(phase - 0.14285714285714285, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.11480896324075468 * exp(-pow(phase - 0.07142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.3577510652696584 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      2.78309756356271;

  angles[3] =
      -0.9997348982811175 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.0017245520037252882 * exp(-pow(phase - 0.9285714285714285, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      -0.7691688062970233 * exp(-pow(phase - 0.8571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.11557602100364342 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.799303033760757 * exp(-pow(phase - 0.7142857142857142, 2) /
                              (2 * pow(0.06666666666666667, 2))) +
      -0.3189839070731729 * exp(-pow(phase - 0.6428571428571428, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.8155519745435975 * exp(-pow(phase - 0.5714285714285714, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.45460576820237353 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.3085386754761788 * exp(-pow(phase - 0.42857142857142855, 2) /
                               (2 * pow(0.06666666666666667, 2))) +
      -0.36862176199448204 * exp(-pow(phase - 0.3571428571428571, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.07104471737121193 * exp(-pow(phase - 0.2857142857142857, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.3314945155990143 * exp(-pow(phase - 0.21428571428571427, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.9841409350814102 * exp(-pow(phase - 0.14285714285714285, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.02380267237981812 * exp(-pow(phase - 0.07142857142857142, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      -1.0622233313297325 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      4.361741152640613;

  angles[4] =
      0.0976408289440544 *
          exp(-pow(phase - 1.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      -0.013397352400119578 * exp(-pow(phase - 0.9285714285714285, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      0.12454531132791757 * exp(-pow(phase - 0.8571428571428571, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      -0.06217293098854072 * exp(-pow(phase - 0.7857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.04862681338088096 * exp(-pow(phase - 0.7142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.023205502685966106 * exp(-pow(phase - 0.6428571428571428, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.015652742936864403 * exp(-pow(phase - 0.5714285714285714, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.00458108650422788 *
          exp(-pow(phase - 0.5, 2) / (2 * pow(0.06666666666666667, 2))) +
      0.024133369765570088 * exp(-pow(phase - 0.42857142857142855, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      9.723421146790728e-05 * exp(-pow(phase - 0.3571428571428571, 2) /
                                  (2 * pow(0.06666666666666667, 2))) +
      0.024245499081544192 * exp(-pow(phase - 0.2857142857142857, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.009477816194982641 * exp(-pow(phase - 0.21428571428571427, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.024353227580755754 * exp(-pow(phase - 0.14285714285714285, 2) /
                                 (2 * pow(0.06666666666666667, 2))) +
      0.00659899852444229 * exp(-pow(phase - 0.07142857142857142, 2) /
                                (2 * pow(0.06666666666666667, 2))) +
      0.031030904355270894 *
          exp(-pow(phase - 0.0, 2) / (2 * pow(0.06666666666666667, 2))) +
      3.101960951176895;

  return angles;
}
