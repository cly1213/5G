/*
 * File: getParams.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "getParams.h"
#include "c_test_emxutil.h"
#include "c_test_rtwutil.h"
#include "c_test_types.h"
#include "colon.h"
#include "find.h"
#include "mod.h"
#include "rt_nonfinite.h"
#include "sortLE.h"
#include "sum.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Variable Definitions */
static b_struct_T d_1_2;
static boolean_T d_1_2_not_empty;
static b_struct_T d_1_4;
static boolean_T d_1_4_not_empty;
static b_struct_T d_1_8;
static boolean_T d_1_8_not_empty;
static b_struct_T d_1_16;
static boolean_T d_1_16_not_empty;
static b_struct_T d_1_32;
static boolean_T d_1_32_not_empty;
static b_struct_T d_1_64;
static boolean_T d_1_64_not_empty;
static b_struct_T d_1_128;
static boolean_T d_1_128_not_empty;
static b_struct_T d_1_256;
static boolean_T d_1_256_not_empty;
static b_struct_T d_1_3;
static boolean_T d_1_3_not_empty;
static b_struct_T d_1_6;
static boolean_T d_1_6_not_empty;
static b_struct_T d_1_12;
static boolean_T d_1_12_not_empty;
static b_struct_T d_1_24;
static boolean_T d_1_24_not_empty;
static b_struct_T d_1_48;
static boolean_T d_1_48_not_empty;
static b_struct_T d_1_96;
static boolean_T d_1_96_not_empty;
static b_struct_T d_1_192;
static boolean_T d_1_192_not_empty;
static b_struct_T d_1_384;
static boolean_T d_1_384_not_empty;
static b_struct_T d_1_5;
static boolean_T d_1_5_not_empty;
static b_struct_T d_1_10;
static boolean_T d_1_10_not_empty;
static b_struct_T d_1_20;
static boolean_T d_1_20_not_empty;
static b_struct_T d_1_40;
static boolean_T d_1_40_not_empty;
static b_struct_T d_1_80;
static boolean_T d_1_80_not_empty;
static b_struct_T d_1_160;
static boolean_T d_1_160_not_empty;
static b_struct_T d_1_320;
static boolean_T d_1_320_not_empty;
static b_struct_T d_1_7;
static boolean_T d_1_7_not_empty;
static b_struct_T d_1_14;
static boolean_T d_1_14_not_empty;
static b_struct_T d_1_28;
static boolean_T d_1_28_not_empty;
static b_struct_T d_1_56;
static boolean_T d_1_56_not_empty;
static b_struct_T d_1_112;
static boolean_T d_1_112_not_empty;
static b_struct_T d_1_224;
static boolean_T d_1_224_not_empty;
static b_struct_T d_1_9;
static boolean_T d_1_9_not_empty;
static b_struct_T d_1_18;
static boolean_T d_1_18_not_empty;
static b_struct_T d_1_36;
static boolean_T d_1_36_not_empty;
static b_struct_T d_1_72;
static boolean_T d_1_72_not_empty;
static b_struct_T d_1_144;
static boolean_T d_1_144_not_empty;
static b_struct_T d_1_288;
static boolean_T d_1_288_not_empty;
static b_struct_T d_1_11;
static boolean_T d_1_11_not_empty;
static b_struct_T d_1_22;
static boolean_T d_1_22_not_empty;
static b_struct_T d_1_44;
static boolean_T d_1_44_not_empty;
static b_struct_T d_1_88;
static boolean_T d_1_88_not_empty;
static b_struct_T d_1_176;
static boolean_T d_1_176_not_empty;
static b_struct_T d_1_352;
static boolean_T d_1_352_not_empty;
static b_struct_T d_1_13;
static boolean_T d_1_13_not_empty;
static b_struct_T d_1_26;
static boolean_T d_1_26_not_empty;
static b_struct_T d_1_52;
static boolean_T d_1_52_not_empty;
static b_struct_T d_1_104;
static boolean_T d_1_104_not_empty;
static b_struct_T d_1_208;
static boolean_T d_1_208_not_empty;
static b_struct_T d_1_15;
static boolean_T d_1_15_not_empty;
static b_struct_T d_1_30;
static boolean_T d_1_30_not_empty;
static b_struct_T d_1_60;
static boolean_T d_1_60_not_empty;
static b_struct_T d_1_120;
static boolean_T d_1_120_not_empty;
static b_struct_T d_1_240;
static boolean_T d_1_240_not_empty;
static b_struct_T d_2_2;
static boolean_T d_2_2_not_empty;
static b_struct_T d_2_4;
static boolean_T d_2_4_not_empty;
static b_struct_T d_2_8;
static boolean_T d_2_8_not_empty;
static b_struct_T d_2_16;
static boolean_T d_2_16_not_empty;
static b_struct_T d_2_32;
static boolean_T d_2_32_not_empty;
static b_struct_T d_2_64;
static boolean_T d_2_64_not_empty;
static b_struct_T d_2_128;
static boolean_T d_2_128_not_empty;
static b_struct_T d_2_256;
static boolean_T d_2_256_not_empty;
static b_struct_T d_2_3;
static boolean_T d_2_3_not_empty;
static b_struct_T d_2_6;
static boolean_T d_2_6_not_empty;
static b_struct_T d_2_12;
static boolean_T d_2_12_not_empty;
static b_struct_T d_2_24;
static boolean_T d_2_24_not_empty;
static b_struct_T d_2_48;
static boolean_T d_2_48_not_empty;
static b_struct_T d_2_96;
static boolean_T d_2_96_not_empty;
static b_struct_T d_2_192;
static boolean_T d_2_192_not_empty;
static b_struct_T d_2_384;
static boolean_T d_2_384_not_empty;
static b_struct_T d_2_5;
static boolean_T d_2_5_not_empty;
static b_struct_T d_2_10;
static boolean_T d_2_10_not_empty;
static b_struct_T d_2_20;
static boolean_T d_2_20_not_empty;
static b_struct_T d_2_40;
static boolean_T d_2_40_not_empty;
static b_struct_T d_2_80;
static boolean_T d_2_80_not_empty;
static b_struct_T d_2_160;
static boolean_T d_2_160_not_empty;
static b_struct_T d_2_320;
static boolean_T d_2_320_not_empty;
static b_struct_T d_2_7;
static boolean_T d_2_7_not_empty;
static b_struct_T d_2_14;
static boolean_T d_2_14_not_empty;
static b_struct_T d_2_28;
static boolean_T d_2_28_not_empty;
static b_struct_T d_2_56;
static boolean_T d_2_56_not_empty;
static b_struct_T d_2_112;
static boolean_T d_2_112_not_empty;
static b_struct_T d_2_224;
static boolean_T d_2_224_not_empty;
static b_struct_T d_2_9;
static boolean_T d_2_9_not_empty;
static b_struct_T d_2_18;
static boolean_T d_2_18_not_empty;
static b_struct_T d_2_36;
static boolean_T d_2_36_not_empty;
static b_struct_T d_2_72;
static boolean_T d_2_72_not_empty;
static b_struct_T d_2_144;
static boolean_T d_2_144_not_empty;
static b_struct_T d_2_288;
static boolean_T d_2_288_not_empty;
static b_struct_T d_2_11;
static boolean_T d_2_11_not_empty;
static b_struct_T d_2_22;
static boolean_T d_2_22_not_empty;
static b_struct_T d_2_44;
static boolean_T d_2_44_not_empty;
static b_struct_T d_2_88;
static boolean_T d_2_88_not_empty;
static b_struct_T d_2_176;
static boolean_T d_2_176_not_empty;
static b_struct_T d_2_352;
static boolean_T d_2_352_not_empty;
static b_struct_T d_2_13;
static boolean_T d_2_13_not_empty;
static b_struct_T d_2_26;
static boolean_T d_2_26_not_empty;
static b_struct_T d_2_52;
static boolean_T d_2_52_not_empty;
static b_struct_T d_2_104;
static boolean_T d_2_104_not_empty;
static b_struct_T d_2_208;
static boolean_T d_2_208_not_empty;
static b_struct_T d_2_15;
static boolean_T d_2_15_not_empty;
static b_struct_T d_2_30;
static boolean_T d_2_30_not_empty;
static b_struct_T d_2_60;
static boolean_T d_2_60_not_empty;
static b_struct_T d_2_120;
static boolean_T d_2_120_not_empty;
static b_struct_T d_2_240;
static boolean_T d_2_240_not_empty;

/* Function Declarations */
static void b_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void buildSubBlock(double s, double shift, emxArray_int8_T *M);
static void c_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void d_1_160params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_16params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_176params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_18params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_192params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_208params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_20params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_224params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_22params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_240params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_24params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_256params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_26params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_288params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_28params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_2params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_30params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_320params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_32params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_352params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_36params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_384params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_3params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_40params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_44params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_48params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_4params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_52params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_56params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_5params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_60params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_64params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_6params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_72params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_7params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_80params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_88params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_8params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_96params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_1_9params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_104params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_10params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_112params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_11params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_120params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_128params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_12params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_13params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_144params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_14params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_15params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_160params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_16params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_176params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_18params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_192params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_208params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_20params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_224params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_22params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_240params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_24params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_256params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_26params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_288params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_28params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_2params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_30params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_320params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_32params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_352params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_36params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_384params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_3params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_40params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_44params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_48params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_4params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_52params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_56params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_5params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_60params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_64params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_6params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_72params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_7params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_80params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_88params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_8params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_96params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_2_9params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap);
static void d_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void e_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void f_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void g_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void h_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void i_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void init(const emxArray_int8_T *H, emxArray_int32_T *d_offsetWeight,
                 emxArray_int32_T *d_columnIndexMap);
static void j_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void k_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void l_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void m_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void n_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void o_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void p_parityCheckMatrix(double Z, emxArray_int8_T *H);
static void parityCheckMatrix(double Z, emxArray_int8_T *H);

/* Function Definitions */
/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void b_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[3128] = { 307, 76, 205, 276, 332, 195, 278, 9, 307, 366,
    -1, 48, 77, 313, 142, 241, -1, 260, -1, 145, 187, -1, 30, -1, 298, -1, 71,
    -1, 222, -1, 159, -1, 102, -1, 230, -1, 210, -1, 185, -1, 175, -1, 113, -1,
    80, -1, 19, -1, 250, 87, 181, 14, -1, 62, 179, 232, 101, 102, 186, -1, -1, 2,
    13, -1, 130, 213, -1, 205, -1, 24, -1, 72, -1, 194, -1, 252, -1, 100, -1,
    323, -1, 320, -1, 269, -1, 258, -1, 52, -1, 113, -1, 135, 50, 76, 328, -1,
    -1, -1, -1, -1, -1, -1, 339, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    89, -1, -1, 81, -1, -1, -1, -1, -1, -1, 8, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 369, 73, -1, 0, -1, 115, -1, -1, 165, -1, -1, -1, -1, 177,
    -1, -1, 338, -1, -1, -1, 206, -1, -1, -1, 158, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 93, -1, 314, -1, -1, -1, -1, -1, 288, 332, 275,
    -1, -1, -1, 316, -1, -1, 274, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 235, -1, 76, -1, 19, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    14, -1, -1, -1, 181, 144, 256, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 102, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 216, -1, 161, 199, -1,
    -1, 257, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 17, -1, 194, -1, -1, -1, -1, -1, -1, -1, 335, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 149, -1, 331, 267, 153, -1, -1, -1, 333, -1, -1, 111, -1, -1, 266,
    -1, -1, -1, -1, -1, 344, -1, -1, -1, -1, -1, 383, -1, -1, -1, -1, -1, 215,
    -1, -1, 148, -1, -1, -1, -1, 346, -1, -1, -1, -1, 78, -1, -1, 331, 160, 56,
    -1, -1, -1, 290, -1, -1, 383, -1, -1, -1, -1, -1, -1, -1, -1, 242, -1, -1,
    -1, -1, -1, -1, -1, 101, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 37,
    -1, -1, -1, -1, -1, 317, 178, 63, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 264, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 177, -1, -1, 139, -1, -1, 163, -1, 288, -1, 129, 132, -1,
    -1, 1, -1, -1, 321, -1, -1, 174, -1, -1, 210, -1, -1, -1, 197, -1, -1, -1,
    61, -1, -1, -1, -1, -1, -1, 229, -1, -1, -1, -1, -1, -1, -1, 289, -1, -1, -1,
    -1, -1, -1, 15, 109, 295, -1, 305, -1, -1, 351, -1, -1, 133, -1, -1, 232, -1,
    -1, -1, 57, -1, -1, -1, 341, -1, -1, -1, 339, -1, -1, -1, -1, -1, -1, -1, -1,
    361, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 17, 342, -1, 231, -1,
    166, -1, -1, 18, -1, -1, 8, -1, -1, 248, -1, -1, -1, 163, -1, -1, -1, 11, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 201, -1, -1, 2, -1, -1, 214, -1, -1, -1, -1,
    -1, -1, -1, 357, -1, 200, 341, -1, -1, 92, -1, -1, 57, -1, -1, 50, -1, -1,
    318, -1, -1, 280, -1, -1, -1, 233, -1, -1, -1, -1, -1, -1, -1, 260, -1, -1,
    -1, -1, -1, -1, 82, -1, -1, -1, -1, -1, -1, -1, -1, -1, 217, 88, 212, -1, -1,
    -1, 114, -1, -1, 354, -1, -1, -1, -1, -1, -1, 303, -1, -1, -1, -1, -1, -1,
    -1, 312, -1, -1, -1, 5, -1, -1, 175, -1, -1, -1, 313, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 215, 99, 53, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 137, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 136, -1, -1, -1, -1, -1, -1, -1, 202,
    -1, 297, -1, -1, -1, -1, -1, -1, -1, -1, -1, 106, 354, -1, 304, -1, 241, -1,
    -1, 39, -1, -1, 47, -1, -1, 89, -1, -1, 81, -1, -1, -1, 328, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 132, -1,
    -1, -1, 114, 131, 300, -1, -1, 253, -1, -1, 303, -1, -1, -1, -1, 347, -1, -1,
    358, -1, -1, -1, -1, 22, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 312, -1,
    -1, -1, -1, -1, 312, -1, -1, -1, -1, -1, 242, -1, 240, 271, -1, -1, 18, -1,
    -1, 63, -1, -1, 74, -1, -1, 55, -1, -1, 132, -1, -1, -1, -1, 27, -1, -1, -1,
    -1, -1, 147, -1, -1, -1, -1, -1, -1, 21, -1, -1, -1, -1, 288, -1, 114, -1,
    -1, 180, 331, 205, -1, -1, -1, -1, -1, 224, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, 244, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 297, -1, -1, -1, -1, -1, -1, 330, -1, 13, 39, -1, -1, 225, -1,
    -1, 82, -1, -1, -1, 115, -1, -1, 289, -1, -1, -1, -1, 213, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 346, 112, -1, 357, -1, 51, -1, -1, 368, -1, -1, 188, -1, -1, 12, -1, -1,
    375, -1, -1, -1, 97, -1, -1, -1, -1, -1, -1, 274, -1, -1, -1, -1, 105, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 0, -1, 1, -1, 157, -1, -1, 67,
    -1, -1, 334, -1, -1, -1, -1, 57, -1, -1, -1, 59, -1, -1, -1, 234, -1, -1, -1,
    -1, -1, -1, 258, -1, -1, -1, 266, -1, -1, -1, -1, -1, -1, -1, -1, 274, -1, 0,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 115, -1, 370, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 115, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, 170, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 90,
    -1, 287, -1, -1, -1, -1, -1, -1, -1, -1, -1, 218, -1, -1, -1, -1, -1, 0, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 269, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 78, -1, 256, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 168, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[3128];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 46; i++) {
    for (j = 0; j < 68; j++) {
      b_i = i + 46 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(46.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(68.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 46; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 68; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 46 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double s
 *                double shift
 *                emxArray_int8_T *M
 * Return Type  : void
 */
static void buildSubBlock(double s, double shift, emxArray_int8_T *M)
{
  emxArray_int32_T *c_y;
  emxArray_int8_T *b_I;
  emxArray_real_T *b_y;
  emxArray_real_T *y;
  double a;
  int b_s;
  int i;
  int i1;
  int loop_ub;
  a = rt_roundd_snf(s);
  if (a < 2.147483648E+9) {
    if (a >= -2.147483648E+9) {
      b_s = (int)a;
    } else {
      b_s = MIN_int32_T;
    }
  } else if (a >= 2.147483648E+9) {
    b_s = MAX_int32_T;
  } else {
    b_s = 0;
  }

  if (shift == -1.0) {
    i = M->size[0] * M->size[1];
    M->size[0] = b_s;
    M->size[1] = b_s;
    emxEnsureCapacity_int8_T(M, i);
    loop_ub = b_s * b_s;
    for (i = 0; i < loop_ub; i++) {
      M->data[i] = 0;
    }
  } else {
    emxInit_int8_T(&b_I, 2);
    i = b_I->size[0] * b_I->size[1];
    b_I->size[0] = b_s;
    b_I->size[1] = b_s;
    emxEnsureCapacity_int8_T(b_I, i);
    loop_ub = b_s * b_s;
    for (i = 0; i < loop_ub; i++) {
      b_I->data[i] = 0;
    }

    if (b_s > 0) {
      for (loop_ub = 0; loop_ub < b_s; loop_ub++) {
        b_I->data[loop_ub + b_I->size[0] * loop_ub] = 1;
      }
    }

    i = M->size[0] * M->size[1];
    M->size[0] = b_I->size[0];
    M->size[1] = b_I->size[1];
    emxEnsureCapacity_int8_T(M, i);
    loop_ub = b_I->size[0] * b_I->size[1];
    for (i = 0; i < loop_ub; i++) {
      M->data[i] = b_I->data[i];
    }

    if (shift > 0.0) {
      emxInit_real_T(&y, 2);
      shift--;
      a = (double)b_I->size[1] - shift;
      if (b_I->size[1] < a) {
        y->size[0] = 1;
        y->size[1] = 0;
      } else if (rtIsInf(a) && (a == b_I->size[1])) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = 1;
        emxEnsureCapacity_real_T(y, i);
        y->data[0] = rtNaN;
      } else if (floor(a) == a) {
        i = y->size[0] * y->size[1];
        y->size[0] = 1;
        y->size[1] = (int)((double)b_I->size[1] - a) + 1;
        emxEnsureCapacity_real_T(y, i);
        loop_ub = (int)((double)b_I->size[1] - a);
        for (i = 0; i <= loop_ub; i++) {
          y->data[i] = a + (double)i;
        }
      } else {
        eml_float_colon(a, b_I->size[1], y);
      }

      emxInit_real_T(&b_y, 2);
      a = ((double)b_I->size[1] - shift) - 1.0;
      if (a < 1.0) {
        b_y->size[0] = 1;
        b_y->size[1] = 0;
      } else {
        i = b_y->size[0] * b_y->size[1];
        b_y->size[0] = 1;
        loop_ub = (int)floor(a - 1.0);
        b_y->size[1] = loop_ub + 1;
        emxEnsureCapacity_real_T(b_y, i);
        for (i = 0; i <= loop_ub; i++) {
          b_y->data[i] = (double)i + 1.0;
        }
      }

      emxInit_int32_T(&c_y, 1);
      i = c_y->size[0];
      c_y->size[0] = y->size[1] + b_y->size[1];
      emxEnsureCapacity_int32_T(c_y, i);
      loop_ub = y->size[1];
      for (i = 0; i < loop_ub; i++) {
        c_y->data[i] = (int)y->data[i] - 1;
      }

      loop_ub = b_y->size[1];
      for (i = 0; i < loop_ub; i++) {
        c_y->data[i + y->size[1]] = (int)b_y->data[i] - 1;
      }

      emxFree_real_T(&b_y);
      emxFree_real_T(&y);
      loop_ub = b_I->size[0];
      i = M->size[0] * M->size[1];
      M->size[0] = b_I->size[0];
      M->size[1] = c_y->size[0];
      emxEnsureCapacity_int8_T(M, i);
      b_s = c_y->size[0];
      for (i = 0; i < b_s; i++) {
        for (i1 = 0; i1 < loop_ub; i1++) {
          M->data[i1 + M->size[0] * i] = b_I->data[i1 + b_I->size[0] * c_y->
            data[i]];
        }
      }

      emxFree_int32_T(&c_y);
    }

    emxFree_int8_T(&b_I);
  }
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void c_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[3128] = { 73, 303, 68, 220, 233, 83, 289, 12, 295, 189,
    -1, 16, 229, 39, 78, 229, -1, 257, -1, 64, 301, -1, 177, -1, 289, -1, 270,
    -1, 11, -1, 91, -1, 210, -1, 187, -1, 259, -1, 151, -1, 32, -1, 226, -1, 234,
    -1, 15, -1, 7, 208, 205, 292, -1, 88, 133, 244, 14, 147, 235, -1, -1, 290,
    69, -1, 260, 181, -1, 79, -1, 249, -1, 172, -1, 210, -1, 27, -1, 222, -1,
    170, -1, 207, -1, 298, -1, 102, -1, 154, -1, 228, -1, 101, 103, 294, 80, -1,
    -1, -1, -1, -1, -1, -1, 80, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    50, -1, -1, 110, -1, -1, -1, -1, -1, -1, 20, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 49, 27, -1, 30, -1, 50, -1, -1, 130, -1, -1, -1, -1, 302, -1,
    -1, 140, -1, -1, -1, 162, -1, -1, -1, 280, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 77, -1, 47, -1, -1, -1, -1, -1, 261, 280, 197, -1,
    -1, -1, 207, -1, -1, 211, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    110, -1, 318, -1, 293, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    65, -1, -1, -1, 240, 161, 38, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 175, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 39, -1, 227, 61, -1, -1, 21,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 295,
    -1, 29, -1, -1, -1, -1, -1, -1, -1, 158, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    228, -1, 133, 202, 175, -1, -1, -1, 50, -1, -1, 75, -1, -1, 303, -1, -1, -1,
    -1, -1, 101, -1, -1, -1, -1, -1, 96, -1, -1, -1, -1, -1, 308, -1, -1, 296,
    -1, -1, -1, -1, 192, -1, -1, -1, -1, 227, -1, -1, 4, 200, 79, -1, -1, -1, 25,
    -1, -1, 161, -1, -1, -1, -1, -1, -1, -1, -1, 270, -1, -1, -1, -1, -1, -1, -1,
    304, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 80, -1, -1, -1, -1, -1,
    15, 80, 71, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 40, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    179, -1, -1, 124, -1, -1, 259, -1, 162, -1, 106, 281, -1, -1, 293, -1, -1,
    36, -1, -1, 169, -1, -1, 60, -1, -1, -1, 41, -1, -1, -1, 133, -1, -1, -1, -1,
    -1, -1, 23, -1, -1, -1, -1, -1, -1, -1, 64, -1, -1, -1, -1, -1, -1, 126, 215,
    129, -1, 303, -1, -1, 13, -1, -1, 286, -1, -1, 48, -1, -1, -1, 45, -1, -1,
    -1, 130, -1, -1, -1, 187, -1, -1, -1, -1, -1, -1, -1, -1, 140, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 164, 300, -1, 253, -1, 318, -1, -1, 231,
    -1, -1, 290, -1, -1, 299, -1, -1, -1, 294, -1, -1, -1, 20, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 22, -1, -1, 55, -1, -1, 181, -1, -1, -1, -1, -1, -1, -1,
    133, -1, 295, 164, -1, -1, 232, -1, -1, 151, -1, -1, 105, -1, -1, 130, -1,
    -1, 291, -1, -1, -1, 55, -1, -1, -1, -1, -1, -1, -1, 105, -1, -1, -1, -1, -1,
    -1, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1, 76, 283, 53, -1, -1, -1, 76, -1,
    -1, 311, -1, -1, -1, -1, -1, -1, 147, -1, -1, -1, -1, -1, -1, -1, 46, -1, -1,
    -1, 308, -1, -1, 271, -1, -1, -1, 179, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    298, 266, 301, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 54, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 67, -1, -1, -1, -1, -1, -1, -1, 5, -1, 178,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 110, 72, -1, 44, -1, 201, -1, -1, 296,
    -1, -1, 289, -1, -1, 61, -1, -1, 128, -1, -1, -1, 132, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 69, -1, -1,
    -1, 83, 184, 28, -1, -1, 302, -1, -1, 267, -1, -1, -1, -1, 179, -1, -1, 51,
    -1, -1, -1, -1, 316, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 44, -1, -1,
    -1, -1, -1, 197, -1, -1, -1, -1, -1, 113, -1, 246, 77, -1, -1, 138, -1, -1,
    135, -1, -1, 52, -1, -1, 184, -1, -1, 141, -1, -1, -1, -1, 105, -1, -1, -1,
    -1, -1, 117, -1, -1, -1, -1, -1, -1, 160, -1, -1, -1, -1, 207, -1, 176, -1,
    -1, 16, 260, 230, -1, -1, -1, -1, -1, 110, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 295, -1, -1, -1, -1, -1, -1, -1, -1, -1, 50, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 208, -1, -1, -1, -1, -1, -1, 189, -1, 276, 319, -1, -1, 235, -1,
    -1, 209, -1, -1, -1, 160, -1, -1, 115, -1, -1, -1, -1, 283, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 32, 301, -1, 68, -1, 267, -1, -1, 269, -1, -1, 177, -1, -1, 258, -1, -1,
    228, -1, -1, -1, 103, -1, -1, -1, -1, -1, -1, 234, -1, -1, -1, -1, 33, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 0, -1, 1, -1, 279, -1, -1,
    245, -1, -1, 43, -1, -1, -1, -1, 300, -1, -1, -1, 10, -1, -1, -1, 281, -1,
    -1, -1, -1, -1, -1, 66, -1, -1, -1, 285, -1, -1, -1, -1, -1, -1, -1, -1, 260,
    -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 280, -1, 37, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    115, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, 154, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 135, -1, 217, -1, -1, -1, -1, -1, -1, -1, -1, -1, 126, -1, -1, -1, -1,
    -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 51, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 29, -1, 162, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 102, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[3128];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 46; i++) {
    for (j = 0; j < 68; j++) {
      b_i = i + 46 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(46.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(68.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 46; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 68; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 46 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_160params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_160_not_empty) {
    emxInit_int8_T(&r, 2);
    c_parityCheckMatrix(Zc, r);
    init(r, d_1_160.offsetWeight, d_1_160.columnIndexMap);
    d_1_160_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_160.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_160.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_160.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_160.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_160.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_160.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_16params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_16_not_empty) {
    emxInit_int8_T(&r, 2);
    parityCheckMatrix(Zc, r);
    init(r, d_1_16.offsetWeight, d_1_16.columnIndexMap);
    d_1_16_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_16.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_16.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_16.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_16.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_16.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_16.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_176params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_176_not_empty) {
    emxInit_int8_T(&r, 2);
    f_parityCheckMatrix(Zc, r);
    init(r, d_1_176.offsetWeight, d_1_176.columnIndexMap);
    d_1_176_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_176.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_176.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_176.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_176.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_176.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_176.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_18params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_18_not_empty) {
    emxInit_int8_T(&r, 2);
    e_parityCheckMatrix(Zc, r);
    init(r, d_1_18.offsetWeight, d_1_18.columnIndexMap);
    d_1_18_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_18.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_18.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_18.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_18.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_18.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_18.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_192params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_192_not_empty) {
    emxInit_int8_T(&r, 2);
    b_parityCheckMatrix(Zc, r);
    init(r, d_1_192.offsetWeight, d_1_192.columnIndexMap);
    d_1_192_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_192.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_192.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_192.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_192.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_192.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_192.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_208params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_208_not_empty) {
    emxInit_int8_T(&r, 2);
    g_parityCheckMatrix(Zc, r);
    init(r, d_1_208.offsetWeight, d_1_208.columnIndexMap);
    d_1_208_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_208.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_208.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_208.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_208.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_208.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_208.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_20params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_20_not_empty) {
    emxInit_int8_T(&r, 2);
    c_parityCheckMatrix(Zc, r);
    init(r, d_1_20.offsetWeight, d_1_20.columnIndexMap);
    d_1_20_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_20.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_20.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_20.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_20.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_20.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_20.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_224params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_224_not_empty) {
    emxInit_int8_T(&r, 2);
    d_parityCheckMatrix(Zc, r);
    init(r, d_1_224.offsetWeight, d_1_224.columnIndexMap);
    d_1_224_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_224.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_224.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_224.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_224.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_224.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_224.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_22params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_22_not_empty) {
    emxInit_int8_T(&r, 2);
    f_parityCheckMatrix(Zc, r);
    init(r, d_1_22.offsetWeight, d_1_22.columnIndexMap);
    d_1_22_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_22.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_22.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_22.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_22.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_22.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_22.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_240params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_240_not_empty) {
    emxInit_int8_T(&r, 2);
    h_parityCheckMatrix(Zc, r);
    init(r, d_1_240.offsetWeight, d_1_240.columnIndexMap);
    d_1_240_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_240.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_240.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_240.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_240.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_240.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_240.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_24params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_24_not_empty) {
    emxInit_int8_T(&r, 2);
    b_parityCheckMatrix(Zc, r);
    init(r, d_1_24.offsetWeight, d_1_24.columnIndexMap);
    d_1_24_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_24.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_24.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_24.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_24.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_24.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_24.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_256params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_256_not_empty) {
    emxInit_int8_T(&r, 2);
    parityCheckMatrix(Zc, r);
    init(r, d_1_256.offsetWeight, d_1_256.columnIndexMap);
    d_1_256_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_256.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_256.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_256.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_256.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_256.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_256.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_26params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_26_not_empty) {
    emxInit_int8_T(&r, 2);
    g_parityCheckMatrix(Zc, r);
    init(r, d_1_26.offsetWeight, d_1_26.columnIndexMap);
    d_1_26_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_26.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_26.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_26.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_26.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_26.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_26.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_288params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_288_not_empty) {
    emxInit_int8_T(&r, 2);
    e_parityCheckMatrix(Zc, r);
    init(r, d_1_288.offsetWeight, d_1_288.columnIndexMap);
    d_1_288_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_288.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_288.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_288.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_288.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_288.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_288.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_28params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_28_not_empty) {
    emxInit_int8_T(&r, 2);
    d_parityCheckMatrix(Zc, r);
    init(r, d_1_28.offsetWeight, d_1_28.columnIndexMap);
    d_1_28_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_28.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_28.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_28.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_28.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_28.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_28.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_2params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_2_not_empty) {
    emxInit_int8_T(&r, 2);
    parityCheckMatrix(Zc, r);
    init(r, d_1_2.offsetWeight, d_1_2.columnIndexMap);
    d_1_2_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_2.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_2.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_2.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_2.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_2.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_2.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_30params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_30_not_empty) {
    emxInit_int8_T(&r, 2);
    h_parityCheckMatrix(Zc, r);
    init(r, d_1_30.offsetWeight, d_1_30.columnIndexMap);
    d_1_30_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_30.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_30.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_30.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_30.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_30.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_30.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_320params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_320_not_empty) {
    emxInit_int8_T(&r, 2);
    c_parityCheckMatrix(Zc, r);
    init(r, d_1_320.offsetWeight, d_1_320.columnIndexMap);
    d_1_320_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_320.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_320.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_320.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_320.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_320.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_320.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_32params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_32_not_empty) {
    emxInit_int8_T(&r, 2);
    parityCheckMatrix(Zc, r);
    init(r, d_1_32.offsetWeight, d_1_32.columnIndexMap);
    d_1_32_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_32.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_32.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_32.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_32.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_32.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_32.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_352params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_352_not_empty) {
    emxInit_int8_T(&r, 2);
    f_parityCheckMatrix(Zc, r);
    init(r, d_1_352.offsetWeight, d_1_352.columnIndexMap);
    d_1_352_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_352.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_352.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_352.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_352.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_352.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_352.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_36params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_36_not_empty) {
    emxInit_int8_T(&r, 2);
    e_parityCheckMatrix(Zc, r);
    init(r, d_1_36.offsetWeight, d_1_36.columnIndexMap);
    d_1_36_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_36.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_36.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_36.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_36.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_36.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_36.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_384params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_384_not_empty) {
    emxInit_int8_T(&r, 2);
    b_parityCheckMatrix(Zc, r);
    init(r, d_1_384.offsetWeight, d_1_384.columnIndexMap);
    d_1_384_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_384.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_384.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_384.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_384.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_384.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_384.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_3params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_3_not_empty) {
    emxInit_int8_T(&r, 2);
    b_parityCheckMatrix(Zc, r);
    init(r, d_1_3.offsetWeight, d_1_3.columnIndexMap);
    d_1_3_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_3.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_3.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_3.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_3.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_3.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_3.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_40params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_40_not_empty) {
    emxInit_int8_T(&r, 2);
    c_parityCheckMatrix(Zc, r);
    init(r, d_1_40.offsetWeight, d_1_40.columnIndexMap);
    d_1_40_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_40.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_40.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_40.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_40.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_40.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_40.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_44params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_44_not_empty) {
    emxInit_int8_T(&r, 2);
    f_parityCheckMatrix(Zc, r);
    init(r, d_1_44.offsetWeight, d_1_44.columnIndexMap);
    d_1_44_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_44.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_44.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_44.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_44.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_44.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_44.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_48params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_48_not_empty) {
    emxInit_int8_T(&r, 2);
    b_parityCheckMatrix(Zc, r);
    init(r, d_1_48.offsetWeight, d_1_48.columnIndexMap);
    d_1_48_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_48.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_48.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_48.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_48.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_48.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_48.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_4params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_4_not_empty) {
    emxInit_int8_T(&r, 2);
    parityCheckMatrix(Zc, r);
    init(r, d_1_4.offsetWeight, d_1_4.columnIndexMap);
    d_1_4_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_4.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_4.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_4.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_4.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_4.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_4.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_52params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_52_not_empty) {
    emxInit_int8_T(&r, 2);
    g_parityCheckMatrix(Zc, r);
    init(r, d_1_52.offsetWeight, d_1_52.columnIndexMap);
    d_1_52_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_52.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_52.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_52.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_52.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_52.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_52.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_56params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_56_not_empty) {
    emxInit_int8_T(&r, 2);
    d_parityCheckMatrix(Zc, r);
    init(r, d_1_56.offsetWeight, d_1_56.columnIndexMap);
    d_1_56_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_56.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_56.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_56.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_56.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_56.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_56.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_5params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_5_not_empty) {
    emxInit_int8_T(&r, 2);
    c_parityCheckMatrix(Zc, r);
    init(r, d_1_5.offsetWeight, d_1_5.columnIndexMap);
    d_1_5_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_5.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_5.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_5.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_5.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_5.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_5.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_60params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_60_not_empty) {
    emxInit_int8_T(&r, 2);
    h_parityCheckMatrix(Zc, r);
    init(r, d_1_60.offsetWeight, d_1_60.columnIndexMap);
    d_1_60_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_60.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_60.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_60.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_60.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_60.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_60.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_64params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_64_not_empty) {
    emxInit_int8_T(&r, 2);
    parityCheckMatrix(Zc, r);
    init(r, d_1_64.offsetWeight, d_1_64.columnIndexMap);
    d_1_64_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_64.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_64.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_64.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_64.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_64.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_64.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_6params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_6_not_empty) {
    emxInit_int8_T(&r, 2);
    b_parityCheckMatrix(Zc, r);
    init(r, d_1_6.offsetWeight, d_1_6.columnIndexMap);
    d_1_6_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_6.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_6.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_6.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_6.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_6.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_6.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_72params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_72_not_empty) {
    emxInit_int8_T(&r, 2);
    e_parityCheckMatrix(Zc, r);
    init(r, d_1_72.offsetWeight, d_1_72.columnIndexMap);
    d_1_72_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_72.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_72.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_72.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_72.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_72.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_72.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_7params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_7_not_empty) {
    emxInit_int8_T(&r, 2);
    d_parityCheckMatrix(Zc, r);
    init(r, d_1_7.offsetWeight, d_1_7.columnIndexMap);
    d_1_7_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_7.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_7.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_7.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_7.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_7.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_7.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_80params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_80_not_empty) {
    emxInit_int8_T(&r, 2);
    c_parityCheckMatrix(Zc, r);
    init(r, d_1_80.offsetWeight, d_1_80.columnIndexMap);
    d_1_80_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_80.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_80.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_80.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_80.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_80.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_80.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_88params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_88_not_empty) {
    emxInit_int8_T(&r, 2);
    f_parityCheckMatrix(Zc, r);
    init(r, d_1_88.offsetWeight, d_1_88.columnIndexMap);
    d_1_88_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_88.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_88.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_88.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_88.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_88.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_88.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_8params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_8_not_empty) {
    emxInit_int8_T(&r, 2);
    parityCheckMatrix(Zc, r);
    init(r, d_1_8.offsetWeight, d_1_8.columnIndexMap);
    d_1_8_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_8.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_8.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_8.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_8.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_8.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_8.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_96params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_96_not_empty) {
    emxInit_int8_T(&r, 2);
    b_parityCheckMatrix(Zc, r);
    init(r, d_1_96.offsetWeight, d_1_96.columnIndexMap);
    d_1_96_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_96.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_96.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_96.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_96.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_96.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_96.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_1_9params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_1_9_not_empty) {
    emxInit_int8_T(&r, 2);
    e_parityCheckMatrix(Zc, r);
    init(r, d_1_9.offsetWeight, d_1_9.columnIndexMap);
    d_1_9_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_1_9.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_1_9.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_1_9.offsetWeight->data[i];
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_1_9.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_1_9.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_1_9.columnIndexMap->data[i];
  }

  *infoLen = 22.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_104params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_104_not_empty) {
    emxInit_int8_T(&r, 2);
    o_parityCheckMatrix(Zc, r);
    init(r, d_2_104.offsetWeight, d_2_104.columnIndexMap);
    d_2_104_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_104.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_104.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_104.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_104.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_104.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_104.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_10params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_10_not_empty) {
    emxInit_int8_T(&r, 2);
    k_parityCheckMatrix(Zc, r);
    init(r, d_2_10.offsetWeight, d_2_10.columnIndexMap);
    d_2_10_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_10.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_10.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_10.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_10.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_10.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_10.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_112params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_112_not_empty) {
    emxInit_int8_T(&r, 2);
    l_parityCheckMatrix(Zc, r);
    init(r, d_2_112.offsetWeight, d_2_112.columnIndexMap);
    d_2_112_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_112.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_112.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_112.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_112.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_112.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_112.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_11params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_11_not_empty) {
    emxInit_int8_T(&r, 2);
    n_parityCheckMatrix(Zc, r);
    init(r, d_2_11.offsetWeight, d_2_11.columnIndexMap);
    d_2_11_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_11.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_11.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_11.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_11.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_11.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_11.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_120params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_120_not_empty) {
    emxInit_int8_T(&r, 2);
    p_parityCheckMatrix(Zc, r);
    init(r, d_2_120.offsetWeight, d_2_120.columnIndexMap);
    d_2_120_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_120.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_120.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_120.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_120.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_120.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_120.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_128params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_128_not_empty) {
    emxInit_int8_T(&r, 2);
    i_parityCheckMatrix(Zc, r);
    init(r, d_2_128.offsetWeight, d_2_128.columnIndexMap);
    d_2_128_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_128.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_128.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_128.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_128.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_128.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_128.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_12params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_12_not_empty) {
    emxInit_int8_T(&r, 2);
    j_parityCheckMatrix(Zc, r);
    init(r, d_2_12.offsetWeight, d_2_12.columnIndexMap);
    d_2_12_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_12.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_12.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_12.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_12.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_12.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_12.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_13params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_13_not_empty) {
    emxInit_int8_T(&r, 2);
    o_parityCheckMatrix(Zc, r);
    init(r, d_2_13.offsetWeight, d_2_13.columnIndexMap);
    d_2_13_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_13.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_13.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_13.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_13.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_13.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_13.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_144params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_144_not_empty) {
    emxInit_int8_T(&r, 2);
    m_parityCheckMatrix(Zc, r);
    init(r, d_2_144.offsetWeight, d_2_144.columnIndexMap);
    d_2_144_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_144.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_144.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_144.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_144.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_144.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_144.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_14params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_14_not_empty) {
    emxInit_int8_T(&r, 2);
    l_parityCheckMatrix(Zc, r);
    init(r, d_2_14.offsetWeight, d_2_14.columnIndexMap);
    d_2_14_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_14.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_14.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_14.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_14.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_14.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_14.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_15params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_15_not_empty) {
    emxInit_int8_T(&r, 2);
    p_parityCheckMatrix(Zc, r);
    init(r, d_2_15.offsetWeight, d_2_15.columnIndexMap);
    d_2_15_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_15.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_15.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_15.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_15.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_15.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_15.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_160params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_160_not_empty) {
    emxInit_int8_T(&r, 2);
    k_parityCheckMatrix(Zc, r);
    init(r, d_2_160.offsetWeight, d_2_160.columnIndexMap);
    d_2_160_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_160.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_160.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_160.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_160.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_160.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_160.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_16params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_16_not_empty) {
    emxInit_int8_T(&r, 2);
    i_parityCheckMatrix(Zc, r);
    init(r, d_2_16.offsetWeight, d_2_16.columnIndexMap);
    d_2_16_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_16.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_16.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_16.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_16.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_16.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_16.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_176params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_176_not_empty) {
    emxInit_int8_T(&r, 2);
    n_parityCheckMatrix(Zc, r);
    init(r, d_2_176.offsetWeight, d_2_176.columnIndexMap);
    d_2_176_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_176.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_176.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_176.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_176.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_176.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_176.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_18params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_18_not_empty) {
    emxInit_int8_T(&r, 2);
    m_parityCheckMatrix(Zc, r);
    init(r, d_2_18.offsetWeight, d_2_18.columnIndexMap);
    d_2_18_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_18.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_18.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_18.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_18.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_18.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_18.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_192params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_192_not_empty) {
    emxInit_int8_T(&r, 2);
    j_parityCheckMatrix(Zc, r);
    init(r, d_2_192.offsetWeight, d_2_192.columnIndexMap);
    d_2_192_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_192.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_192.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_192.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_192.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_192.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_192.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_208params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_208_not_empty) {
    emxInit_int8_T(&r, 2);
    o_parityCheckMatrix(Zc, r);
    init(r, d_2_208.offsetWeight, d_2_208.columnIndexMap);
    d_2_208_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_208.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_208.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_208.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_208.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_208.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_208.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_20params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_20_not_empty) {
    emxInit_int8_T(&r, 2);
    k_parityCheckMatrix(Zc, r);
    init(r, d_2_20.offsetWeight, d_2_20.columnIndexMap);
    d_2_20_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_20.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_20.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_20.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_20.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_20.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_20.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_224params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_224_not_empty) {
    emxInit_int8_T(&r, 2);
    l_parityCheckMatrix(Zc, r);
    init(r, d_2_224.offsetWeight, d_2_224.columnIndexMap);
    d_2_224_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_224.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_224.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_224.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_224.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_224.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_224.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_22params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_22_not_empty) {
    emxInit_int8_T(&r, 2);
    n_parityCheckMatrix(Zc, r);
    init(r, d_2_22.offsetWeight, d_2_22.columnIndexMap);
    d_2_22_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_22.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_22.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_22.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_22.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_22.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_22.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_240params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_240_not_empty) {
    emxInit_int8_T(&r, 2);
    p_parityCheckMatrix(Zc, r);
    init(r, d_2_240.offsetWeight, d_2_240.columnIndexMap);
    d_2_240_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_240.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_240.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_240.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_240.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_240.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_240.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_24params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_24_not_empty) {
    emxInit_int8_T(&r, 2);
    j_parityCheckMatrix(Zc, r);
    init(r, d_2_24.offsetWeight, d_2_24.columnIndexMap);
    d_2_24_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_24.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_24.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_24.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_24.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_24.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_24.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_256params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_256_not_empty) {
    emxInit_int8_T(&r, 2);
    i_parityCheckMatrix(Zc, r);
    init(r, d_2_256.offsetWeight, d_2_256.columnIndexMap);
    d_2_256_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_256.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_256.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_256.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_256.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_256.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_256.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_26params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_26_not_empty) {
    emxInit_int8_T(&r, 2);
    o_parityCheckMatrix(Zc, r);
    init(r, d_2_26.offsetWeight, d_2_26.columnIndexMap);
    d_2_26_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_26.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_26.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_26.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_26.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_26.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_26.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_288params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_288_not_empty) {
    emxInit_int8_T(&r, 2);
    m_parityCheckMatrix(Zc, r);
    init(r, d_2_288.offsetWeight, d_2_288.columnIndexMap);
    d_2_288_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_288.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_288.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_288.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_288.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_288.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_288.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_28params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_28_not_empty) {
    emxInit_int8_T(&r, 2);
    l_parityCheckMatrix(Zc, r);
    init(r, d_2_28.offsetWeight, d_2_28.columnIndexMap);
    d_2_28_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_28.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_28.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_28.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_28.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_28.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_28.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_2params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_2_not_empty) {
    emxInit_int8_T(&r, 2);
    i_parityCheckMatrix(Zc, r);
    init(r, d_2_2.offsetWeight, d_2_2.columnIndexMap);
    d_2_2_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_2.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_2.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_2.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_2.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_2.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_2.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_30params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_30_not_empty) {
    emxInit_int8_T(&r, 2);
    p_parityCheckMatrix(Zc, r);
    init(r, d_2_30.offsetWeight, d_2_30.columnIndexMap);
    d_2_30_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_30.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_30.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_30.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_30.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_30.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_30.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_320params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_320_not_empty) {
    emxInit_int8_T(&r, 2);
    k_parityCheckMatrix(Zc, r);
    init(r, d_2_320.offsetWeight, d_2_320.columnIndexMap);
    d_2_320_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_320.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_320.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_320.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_320.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_320.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_320.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_32params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_32_not_empty) {
    emxInit_int8_T(&r, 2);
    i_parityCheckMatrix(Zc, r);
    init(r, d_2_32.offsetWeight, d_2_32.columnIndexMap);
    d_2_32_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_32.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_32.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_32.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_32.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_32.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_32.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_352params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_352_not_empty) {
    emxInit_int8_T(&r, 2);
    n_parityCheckMatrix(Zc, r);
    init(r, d_2_352.offsetWeight, d_2_352.columnIndexMap);
    d_2_352_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_352.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_352.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_352.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_352.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_352.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_352.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_36params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_36_not_empty) {
    emxInit_int8_T(&r, 2);
    m_parityCheckMatrix(Zc, r);
    init(r, d_2_36.offsetWeight, d_2_36.columnIndexMap);
    d_2_36_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_36.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_36.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_36.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_36.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_36.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_36.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_384params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_384_not_empty) {
    emxInit_int8_T(&r, 2);
    j_parityCheckMatrix(Zc, r);
    init(r, d_2_384.offsetWeight, d_2_384.columnIndexMap);
    d_2_384_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_384.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_384.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_384.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_384.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_384.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_384.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_3params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_3_not_empty) {
    emxInit_int8_T(&r, 2);
    j_parityCheckMatrix(Zc, r);
    init(r, d_2_3.offsetWeight, d_2_3.columnIndexMap);
    d_2_3_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_3.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_3.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_3.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_3.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_3.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_3.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_40params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_40_not_empty) {
    emxInit_int8_T(&r, 2);
    k_parityCheckMatrix(Zc, r);
    init(r, d_2_40.offsetWeight, d_2_40.columnIndexMap);
    d_2_40_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_40.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_40.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_40.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_40.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_40.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_40.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_44params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_44_not_empty) {
    emxInit_int8_T(&r, 2);
    n_parityCheckMatrix(Zc, r);
    init(r, d_2_44.offsetWeight, d_2_44.columnIndexMap);
    d_2_44_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_44.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_44.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_44.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_44.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_44.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_44.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_48params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_48_not_empty) {
    emxInit_int8_T(&r, 2);
    j_parityCheckMatrix(Zc, r);
    init(r, d_2_48.offsetWeight, d_2_48.columnIndexMap);
    d_2_48_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_48.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_48.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_48.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_48.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_48.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_48.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_4params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_4_not_empty) {
    emxInit_int8_T(&r, 2);
    i_parityCheckMatrix(Zc, r);
    init(r, d_2_4.offsetWeight, d_2_4.columnIndexMap);
    d_2_4_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_4.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_4.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_4.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_4.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_4.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_4.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_52params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_52_not_empty) {
    emxInit_int8_T(&r, 2);
    o_parityCheckMatrix(Zc, r);
    init(r, d_2_52.offsetWeight, d_2_52.columnIndexMap);
    d_2_52_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_52.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_52.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_52.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_52.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_52.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_52.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_56params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_56_not_empty) {
    emxInit_int8_T(&r, 2);
    l_parityCheckMatrix(Zc, r);
    init(r, d_2_56.offsetWeight, d_2_56.columnIndexMap);
    d_2_56_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_56.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_56.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_56.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_56.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_56.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_56.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_5params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_5_not_empty) {
    emxInit_int8_T(&r, 2);
    k_parityCheckMatrix(Zc, r);
    init(r, d_2_5.offsetWeight, d_2_5.columnIndexMap);
    d_2_5_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_5.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_5.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_5.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_5.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_5.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_5.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_60params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_60_not_empty) {
    emxInit_int8_T(&r, 2);
    p_parityCheckMatrix(Zc, r);
    init(r, d_2_60.offsetWeight, d_2_60.columnIndexMap);
    d_2_60_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_60.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_60.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_60.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_60.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_60.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_60.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_64params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_64_not_empty) {
    emxInit_int8_T(&r, 2);
    i_parityCheckMatrix(Zc, r);
    init(r, d_2_64.offsetWeight, d_2_64.columnIndexMap);
    d_2_64_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_64.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_64.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_64.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_64.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_64.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_64.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_6params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_6_not_empty) {
    emxInit_int8_T(&r, 2);
    j_parityCheckMatrix(Zc, r);
    init(r, d_2_6.offsetWeight, d_2_6.columnIndexMap);
    d_2_6_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_6.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_6.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_6.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_6.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_6.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_6.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_72params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_72_not_empty) {
    emxInit_int8_T(&r, 2);
    m_parityCheckMatrix(Zc, r);
    init(r, d_2_72.offsetWeight, d_2_72.columnIndexMap);
    d_2_72_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_72.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_72.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_72.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_72.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_72.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_72.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_7params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_7_not_empty) {
    emxInit_int8_T(&r, 2);
    l_parityCheckMatrix(Zc, r);
    init(r, d_2_7.offsetWeight, d_2_7.columnIndexMap);
    d_2_7_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_7.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_7.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_7.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_7.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_7.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_7.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_80params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_80_not_empty) {
    emxInit_int8_T(&r, 2);
    k_parityCheckMatrix(Zc, r);
    init(r, d_2_80.offsetWeight, d_2_80.columnIndexMap);
    d_2_80_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_80.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_80.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_80.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_80.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_80.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_80.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_88params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_88_not_empty) {
    emxInit_int8_T(&r, 2);
    n_parityCheckMatrix(Zc, r);
    init(r, d_2_88.offsetWeight, d_2_88.columnIndexMap);
    d_2_88_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_88.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_88.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_88.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_88.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_88.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_88.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_8params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_8_not_empty) {
    emxInit_int8_T(&r, 2);
    i_parityCheckMatrix(Zc, r);
    init(r, d_2_8.offsetWeight, d_2_8.columnIndexMap);
    d_2_8_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_8.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_8.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_8.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_8.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_8.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_8.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_96params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_96_not_empty) {
    emxInit_int8_T(&r, 2);
    j_parityCheckMatrix(Zc, r);
    init(r, d_2_96.offsetWeight, d_2_96.columnIndexMap);
    d_2_96_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_96.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_96.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_96.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_96.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_96.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_96.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
static void d_2_9params(double Zc, double *infoLen, emxArray_int32_T
  *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (!d_2_9_not_empty) {
    emxInit_int8_T(&r, 2);
    m_parityCheckMatrix(Zc, r);
    init(r, d_2_9.offsetWeight, d_2_9.columnIndexMap);
    d_2_9_not_empty = true;
    emxFree_int8_T(&r);
  }

  i = columnIndexMap->size[0];
  columnIndexMap->size[0] = d_2_9.columnIndexMap->size[0];
  emxEnsureCapacity_int32_T(columnIndexMap, i);
  loop_ub = d_2_9.columnIndexMap->size[0];
  for (i = 0; i < loop_ub; i++) {
    columnIndexMap->data[i] = d_2_9.columnIndexMap->data[i];
  }

  i = offsetWeight->size[0];
  offsetWeight->size[0] = d_2_9.offsetWeight->size[0];
  emxEnsureCapacity_int32_T(offsetWeight, i);
  loop_ub = d_2_9.offsetWeight->size[0];
  for (i = 0; i < loop_ub; i++) {
    offsetWeight->data[i] = d_2_9.offsetWeight->data[i];
  }

  *infoLen = 10.0 * Zc;
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void d_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[3128] = { 223, 141, 207, 201, 170, 164, 158, 17, 33, 9,
    -1, 52, 142, 81, 14, 90, -1, 56, -1, 8, 105, -1, 53, -1, 49, -1, 107, -1,
    146, -1, 34, -1, 192, -1, 82, -1, 222, -1, 123, -1, 67, -1, 114, -1, 84, -1,
    16, -1, 203, 18, 10, 59, -1, 76, 95, 37, 82, 11, 175, -1, -1, 120, 154, -1,
    199, 6, -1, 192, -1, 88, -1, 1, -1, 208, -1, 150, -1, 175, -1, 114, -1, 192,
    -1, 81, -1, 12, -1, 23, -1, 206, -1, 184, 94, 45, 31, -1, -1, -1, -1, -1, -1,
    -1, 165, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 203, -1, -1, 176,
    -1, -1, -1, -1, -1, -1, 49, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    91, 151, -1, 165, -1, 86, -1, -1, 4, -1, -1, -1, -1, 56, -1, -1, 164, -1, -1,
    -1, 210, -1, -1, -1, 157, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 77, -1, 215, -1, -1, -1, -1, -1, 46, 176, 5, -1, -1, -1, 104, -1, -1,
    174, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 64, -1, 212, -1,
    153, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 91, -1, -1, -1, 74,
    119, 180, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 131, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 10, -1, 186, 45, -1, -1, 119, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 166, -1, 141, -1, -1, -1,
    -1, -1, -1, -1, 173, -1, -1, -1, -1, -1, -1, -1, -1, -1, 121, -1, 157, 95,
    142, -1, -1, -1, 100, -1, -1, 19, -1, -1, 72, -1, -1, -1, -1, -1, 103, -1,
    -1, -1, -1, -1, 65, -1, -1, -1, -1, -1, 49, -1, -1, 186, -1, -1, -1, -1, 49,
    -1, -1, -1, -1, 4, -1, -1, 133, 153, 16, -1, -1, -1, 150, -1, -1, 194, -1,
    -1, -1, -1, -1, -1, -1, -1, 198, -1, -1, -1, -1, -1, -1, -1, 174, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 45, -1, -1, -1, -1, -1, 0, 87, 177, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 121, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 90, -1, -1, 60,
    -1, -1, 9, -1, 205, -1, 70, 34, -1, -1, 113, -1, -1, 213, -1, -1, 136, -1,
    -1, 131, -1, -1, -1, 8, -1, -1, -1, 168, -1, -1, -1, -1, -1, -1, 130, -1, -1,
    -1, -1, -1, -1, -1, 73, -1, -1, -1, -1, -1, -1, 29, 216, 206, -1, 155, -1,
    -1, 21, -1, -1, 105, -1, -1, 3, -1, -1, -1, 43, -1, -1, -1, 214, -1, -1, -1,
    193, -1, -1, -1, -1, -1, -1, -1, -1, 161, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 21, 93, -1, 213, -1, 80, -1, -1, 217, -1, -1, 2, -1, -1, 175, -1,
    -1, -1, 110, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 209, -1, -1,
    26, -1, -1, 10, -1, -1, -1, -1, -1, -1, -1, 215, -1, 77, 147, -1, -1, 63, -1,
    -1, 89, -1, -1, 28, -1, -1, 209, -1, -1, 200, -1, -1, -1, 3, -1, -1, -1, -1,
    -1, -1, -1, 210, -1, -1, -1, -1, -1, -1, 195, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 79, 214, 69, -1, -1, -1, 158, -1, -1, 103, -1, -1, -1, -1, -1, -1, 110,
    -1, -1, -1, -1, -1, -1, -1, 81, -1, -1, -1, 11, -1, -1, 58, -1, -1, -1, 157,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 14, 9, 77, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 211, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 127, -1, -1,
    -1, -1, -1, -1, -1, 68, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 70, 118,
    -1, 96, -1, 182, -1, -1, 204, -1, -1, 35, -1, -1, 191, -1, -1, 200, -1, -1,
    -1, 220, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 22, -1, -1, -1, 194, 198, 74, -1, -1, 51, -1, -1, 185, -1,
    -1, -1, -1, 51, -1, -1, 63, -1, -1, -1, -1, 148, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 150, -1, -1, -1, -1, -1, 96, -1, -1, -1, -1, -1, 141, -1,
    117, 99, -1, -1, 136, -1, -1, 109, -1, -1, 182, -1, -1, 209, -1, -1, 143, -1,
    -1, -1, -1, 122, -1, -1, -1, -1, -1, 53, -1, -1, -1, -1, -1, -1, 6, -1, -1,
    -1, -1, 167, -1, 134, -1, -1, 198, 31, 223, -1, -1, -1, -1, -1, 39, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 186, -1, -1, -1, -1, -1, -1, -1, -1, -1, 217, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 114, -1, -1, -1, -1, -1, -1, 104, -1, 90,
    30, -1, -1, 116, -1, -1, 218, -1, -1, -1, 217, -1, -1, 189, -1, -1, -1, -1,
    50, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 81, 187, -1, 158, -1, 130, -1, -1, 58, -1, -1, 32,
    -1, -1, 43, -1, -1, 4, -1, -1, -1, 106, -1, -1, -1, -1, -1, -1, 114, -1, -1,
    -1, -1, 137, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 0, -1, 1, -1,
    153, -1, -1, 44, -1, -1, 84, -1, -1, -1, -1, 101, -1, -1, -1, 183, -1, -1,
    -1, 124, -1, -1, -1, -1, -1, -1, 177, -1, -1, -1, 187, -1, -1, -1, -1, -1,
    -1, -1, -1, 12, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 201, -1, 78,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 138, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1,
    -1, -1, 201, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 123, -1, 30, -1, -1, -1, -1, -1, -1, -1, -1, -1, 78, -1,
    -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 81, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 68, -1, 128, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 161, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0 };

  emxArray_int8_T *r;
  double P[3128];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 46; i++) {
    for (j = 0; j < 68; j++) {
      b_i = i + 46 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(46.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(68.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 46; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 68; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 46 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void e_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[3128] = { 211, 179, 258, 187, 246, 261, 80, 169, 54, 162,
    -1, 55, 225, 231, 0, 170, -1, 153, -1, 0, 265, -1, 72, -1, 236, -1, 0, -1,
    275, -1, 0, -1, 0, -1, 197, -1, 216, -1, 190, -1, 216, -1, 27, -1, 18, -1,
    198, -1, 167, 145, 235, 181, -1, 189, 0, 159, 178, 23, 162, -1, -1, 0, 270,
    -1, 161, 0, -1, 64, -1, 180, -1, 205, -1, 45, -1, 0, -1, 144, -1, 0, -1, 199,
    -1, 72, -1, 153, -1, 0, -1, 52, -1, 168, 188, 162, 220, -1, -1, -1, -1, -1,
    -1, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 186,
    223, -1, 166, -1, 72, -1, -1, 252, -1, -1, -1, -1, 0, -1, -1, 13, -1, -1, -1,
    81, -1, -1, -1, 199, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, 0, -1, -1, -1, -1, -1, 256, 133, 108, -1, -1, -1, 154, -1, -1, 28, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 0, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 219, 160, 243, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 46, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 4, -1, 202, 82, -1, -1, 144, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 36, -1, -1, -1, -1, -1, -1, -1,
    278, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 76, 218, 132, -1, -1, -1,
    184, -1, -1, 267, -1, -1, 216, -1, -1, -1, -1, -1, 118, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, 144, -1, -1, 0, -1, -1, -1, -1, 165, -1, -1, -1, -1,
    0, -1, -1, 202, 63, 197, -1, -1, -1, 104, -1, -1, 234, -1, -1, -1, -1, -1,
    -1, -1, -1, 144, -1, -1, -1, -1, -1, -1, -1, 72, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 144, -1, -1, -1, -1, -1, 29, 117, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 90, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, 0, -1, -1, 0, -1, 144,
    -1, 3, 41, -1, -1, 169, -1, -1, 93, -1, -1, 244, -1, -1, 183, -1, -1, -1, 0,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 90, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, 144, 116, 109, -1, 162, -1, -1, 90, -1, -1, 134, -1, -1,
    151, -1, -1, -1, 99, -1, -1, -1, 144, -1, -1, -1, 266, -1, -1, -1, -1, -1,
    -1, -1, -1, 76, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 216, 15, -1,
    57, -1, 283, -1, -1, 41, -1, -1, 274, -1, -1, 186, -1, -1, -1, 151, -1, -1,
    -1, 189, -1, -1, -1, -1, -1, -1, -1, -1, -1, 211, -1, -1, 0, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, 115, -1, 74, 36, -1, -1, 59, -1, -1, 45, -1, -1, 238,
    -1, -1, 108, -1, -1, 0, -1, -1, -1, 72, -1, -1, -1, -1, -1, -1, -1, 252, -1,
    -1, -1, -1, -1, -1, 144, -1, -1, -1, -1, -1, -1, -1, -1, -1, 72, 229, 115,
    -1, -1, -1, 164, -1, -1, 201, -1, -1, -1, -1, -1, -1, 137, -1, -1, -1, -1,
    -1, -1, -1, 183, -1, -1, -1, 180, -1, -1, 36, -1, -1, -1, 16, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 233, 152, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    253, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 277, -1, -1, -1, -1, -1, -1,
    -1, 108, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 144, 158, -1, 242, -1,
    254, -1, -1, 98, -1, -1, 181, -1, -1, 16, -1, -1, 0, -1, -1, -1, 266, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    243, -1, -1, -1, 147, 216, 165, -1, -1, 177, -1, -1, 132, -1, -1, -1, -1, 0,
    -1, -1, 0, -1, -1, -1, -1, 257, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, 2, -1, -1, -1, -1, -1, 95, -1, 269, 0, -1, -1, 151,
    -1, -1, 76, -1, -1, 243, -1, -1, 68, -1, -1, 241, -1, -1, -1, -1, 165, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, 183, -1, 0, -1,
    -1, 216, 156, 200, -1, -1, -1, -1, -1, 46, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 144, -1, -1, -1, -1, -1, -1, -1, -1, -1, 155, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 117, -1, -1, -1, -1, -1, -1, 73, -1, 234, 113, -1, -1, 108, -1,
    -1, 209, -1, -1, -1, 47, -1, -1, 54, -1, -1, -1, -1, 9, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    261, 119, -1, 108, -1, 79, -1, -1, 15, -1, -1, 273, -1, -1, 79, -1, -1, 162,
    -1, -1, -1, 18, -1, -1, -1, -1, -1, -1, 62, -1, -1, -1, -1, 18, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 0, -1, 1, -1, 144, -1, -1, 230, -1,
    -1, 39, -1, -1, -1, -1, 0, -1, -1, -1, 228, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, 166, -1, -1, -1, 205, -1, -1, -1, -1, -1, -1, -1, -1, 57, -1, 0, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 26, -1, 36, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, 54, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 173, -1, 162,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 35, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 64, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 42, -1, 19, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 270, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[3128];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 46; i++) {
    for (j = 0; j < 68; j++) {
      b_i = i + 46 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(46.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(68.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 46; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 68; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 46 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void f_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[3128] = { 294, 77, 226, 97, 42, 219, 294, 3, 348, 156, -1,
    25, 123, 311, 22, 176, -1, 110, -1, 87, 89, -1, 280, -1, 38, -1, 325, -1,
    102, -1, 171, -1, 351, -1, 60, -1, 135, -1, 164, -1, 304, -1, 288, -1, 79,
    -1, 118, -1, 35, 94, 256, 130, -1, 103, 75, 88, 175, 322, 217, -1, -1, 348,
    190, -1, 47, 110, -1, 162, -1, 18, -1, 279, -1, 91, -1, 273, -1, 101, -1, 56,
    -1, 100, -1, 319, -1, 236, -1, 123, -1, 210, -1, 82, 167, 225, 213, -1, -1,
    -1, -1, -1, -1, -1, 253, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 6,
    -1, -1, 326, -1, -1, -1, -1, -1, -1, 304, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 330, 96, -1, 49, -1, 251, -1, -1, 22, -1, -1, -1, -1, 251, -1,
    -1, 293, -1, -1, -1, 65, -1, -1, -1, 170, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 264, -1, 77, -1, -1, -1, -1, -1, 338, 302, 279, -1, -1,
    -1, 224, -1, -1, 27, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 249,
    -1, 226, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 83, -1,
    -1, -1, 207, 268, 111, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 264, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 165, -1, 265, 139, -1, -1, 73,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 255,
    -1, 326, -1, -1, -1, -1, -1, -1, -1, 210, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    67, -1, 112, 128, 166, -1, -1, -1, 297, -1, -1, 231, -1, -1, 265, -1, -1, -1,
    -1, -1, 147, -1, -1, -1, -1, -1, 111, -1, -1, -1, -1, -1, 297, -1, -1, 320,
    -1, -1, -1, -1, 37, -1, -1, -1, -1, 244, -1, -1, 302, 237, 91, -1, -1, -1,
    215, -1, -1, 49, -1, -1, -1, -1, -1, -1, -1, -1, 258, -1, -1, -1, -1, -1, -1,
    -1, 268, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 237, -1, -1, -1, -1,
    -1, 243, 50, 294, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 155, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 196, -1, -1, 25, -1, -1, 293, -1, 250, -1, 127, 106, -1, -1, 330, -1, -1,
    293, -1, -1, 142, -1, -1, 15, -1, -1, -1, 204, -1, -1, -1, 181, -1, -1, -1,
    -1, -1, -1, 16, -1, -1, -1, -1, -1, -1, -1, 209, -1, -1, -1, -1, -1, -1, 235,
    1, 167, -1, 246, -1, -1, 99, -1, -1, 111, -1, -1, 110, -1, -1, -1, 332, -1,
    -1, -1, 244, -1, -1, -1, 288, -1, -1, -1, -1, -1, -1, -1, -1, 141, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 339, 253, -1, 345, -1, 322, -1, -1,
    312, -1, -1, 200, -1, -1, 322, -1, -1, -1, 286, -1, -1, -1, 157, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 265, -1, -1, 195, -1, -1, 246, -1, -1, -1, -1, -1,
    -1, -1, 201, -1, 110, 269, -1, -1, 172, -1, -1, 92, -1, -1, 176, -1, -1, 81,
    -1, -1, 246, -1, -1, -1, 236, -1, -1, -1, -1, -1, -1, -1, 95, -1, -1, -1, -1,
    -1, -1, 236, -1, -1, -1, -1, -1, -1, -1, -1, -1, 334, 286, 185, -1, -1, -1,
    39, -1, -1, 267, -1, -1, -1, -1, -1, -1, 228, -1, -1, -1, -1, -1, -1, -1, 54,
    -1, -1, -1, 104, -1, -1, 338, -1, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 53, 242, 125, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 277, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 99, -1, -1, -1, -1, -1, -1, -1, 112, -1,
    35, -1, -1, -1, -1, -1, -1, -1, -1, -1, 347, 257, -1, 249, -1, 295, -1, -1,
    224, -1, -1, 351, -1, -1, 156, -1, -1, 247, -1, -1, -1, 346, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 3, -1,
    -1, -1, 133, 131, 215, -1, -1, 150, -1, -1, 152, -1, -1, -1, -1, 66, -1, -1,
    116, -1, -1, -1, -1, 113, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 54, -1,
    -1, -1, -1, -1, 135, -1, -1, -1, -1, -1, 304, -1, 163, 143, -1, -1, 284, -1,
    -1, 23, -1, -1, 76, -1, -1, 176, -1, -1, 181, -1, -1, -1, -1, 304, -1, -1,
    -1, -1, -1, 243, -1, -1, -1, -1, -1, -1, 188, -1, -1, -1, -1, 272, -1, 53,
    -1, -1, 167, 9, 210, -1, -1, -1, -1, -1, 17, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 73, -1, -1, -1, -1, -1, -1, -1, -1, -1, 40, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 272, -1, -1, -1, -1, -1, -1, 47, -1, 7, 121, -1, -1, 305, -1, -1,
    337, -1, -1, -1, 94, -1, -1, 331, -1, -1, -1, -1, 143, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    188, 302, -1, 121, -1, 258, -1, -1, 59, -1, -1, 166, -1, -1, 78, -1, -1, 190,
    -1, -1, -1, 109, -1, -1, -1, -1, -1, -1, 167, -1, -1, -1, -1, 101, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, 0, -1, 1, -1, 283, -1, -1, 314,
    -1, -1, 338, -1, -1, -1, -1, 114, -1, -1, -1, 30, -1, -1, -1, 194, -1, -1,
    -1, -1, -1, -1, 279, -1, -1, -1, 268, -1, -1, -1, -1, -1, -1, -1, -1, 272,
    -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 192, -1, 81, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    85, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, 244, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 212, -1, 83, -1, -1, -1, -1, -1, -1, -1, -1, -1, 17, -1, -1, -1, -1, -1,
    0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 113, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 107, -1, 222, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 167, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[3128];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 46; i++) {
    for (j = 0; j < 68; j++) {
      b_i = i + 46 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(46.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(68.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 46; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 68; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 46 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void g_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[3128] = { 0, 22, 132, 4, 24, 185, 6, 145, 172, 6, -1, 184,
    6, 52, 1, 173, -1, 91, -1, 12, 6, -1, 44, -1, 9, -1, 21, -1, 4, -1, 2, -1, 6,
    -1, 4, -1, 6, -1, 91, -1, 10, -1, 163, -1, 4, -1, 0, -1, 37, 6, 204, 100, -1,
    88, 2, 10, 126, 194, 20, -1, -1, 6, 88, -1, 1, 6, -1, 6, -1, 45, -1, 4, -1,
    98, -1, 92, -1, 4, -1, 10, -1, 4, -1, 82, -1, 4, -1, 2, -1, 1, -1, 181, 0,
    11, 21, -1, -1, -1, -1, -1, -1, -1, 77, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 18, -1, -1, 142, -1, -1, -1, -1, -1, -1, 30, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, 124, -1, 33, -1, 24, -1, -1, 131, -1, -1, -1,
    -1, 147, -1, -1, 198, -1, -1, -1, 12, -1, -1, -1, 125, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 28, -1, 75, -1, -1, -1, -1, -1, 0, 180,
    113, -1, -1, -1, 112, -1, -1, 156, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 191, -1, 192, -1, 1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 10, -1, -1, -1, 0, 10, 4, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 86, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 149, 49, -1, -1,
    27, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    74, -1, 140, -1, -1, -1, -1, -1, -1, -1, 45, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 45, -1, 0, 48, 21, -1, -1, -1, 153, -1, -1, 16, -1, -1, 1, -1, -1, -1,
    -1, -1, 166, -1, -1, -1, -1, -1, 16, -1, -1, -1, -1, -1, 49, -1, -1, 153, -1,
    -1, -1, -1, 109, -1, -1, -1, -1, 6, -1, -1, 0, 38, 6, -1, -1, -1, 159, -1,
    -1, 12, -1, -1, -1, -1, -1, -1, -1, -1, 184, -1, -1, -1, -1, -1, -1, -1, 22,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 84, -1, -1, -1, -1, -1, 0, 2,
    122, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 15,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 64, -1,
    -1, 142, -1, -1, 142, -1, 0, -1, 195, 151, -1, -1, 163, -1, -1, 145, -1, -1,
    203, -1, -1, 81, -1, -1, -1, 191, -1, -1, -1, 132, -1, -1, -1, -1, -1, -1,
    88, -1, -1, -1, -1, -1, -1, -1, 198, -1, -1, -1, -1, -1, -1, 153, 0, 16, -1,
    83, -1, -1, 50, -1, -1, 53, -1, -1, 153, -1, -1, -1, 160, -1, -1, -1, 5, -1,
    -1, -1, 28, -1, -1, -1, -1, -1, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, 60, -1, 154, -1, 65, -1, -1, 141, -1, -1, 123, -1, -1,
    202, -1, -1, -1, 41, -1, -1, -1, 58, -1, -1, -1, -1, -1, -1, -1, -1, -1, 126,
    -1, -1, 168, -1, -1, 100, -1, -1, -1, -1, -1, -1, -1, 0, -1, 155, 87, -1, -1,
    48, -1, -1, 201, -1, -1, 104, -1, -1, 182, -1, -1, 167, -1, -1, -1, 130, -1,
    -1, -1, -1, -1, -1, -1, 112, -1, -1, -1, -1, -1, -1, 2, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, 28, 5, -1, -1, -1, 76, -1, -1, 70, -1, -1, -1, -1, -1, -1,
    184, -1, -1, -1, -1, -1, -1, -1, 28, -1, -1, -1, 136, -1, -1, 63, -1, -1, -1,
    200, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 6, 85, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 118, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 197, -1,
    -1, -1, -1, -1, -1, -1, 197, -1, 177, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    30, -1, 92, -1, 207, -1, -1, 96, -1, -1, 16, -1, -1, 130, -1, -1, 30, -1, -1,
    -1, 96, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 163, -1, -1, -1, 0, 47, 173, -1, -1, 24, -1, -1, 4, -1, -1,
    -1, -1, 1, -1, -1, 3, -1, -1, -1, -1, 131, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 155, -1, -1, -1, -1, -1, 12, -1, -1, -1, -1, -1, 0, -1, 179, 120,
    -1, -1, 38, -1, -1, 164, -1, -1, 207, -1, -1, 53, -1, -1, 68, -1, -1, -1, -1,
    100, -1, -1, -1, -1, -1, 106, -1, -1, -1, -1, -1, -1, 43, -1, -1, -1, -1,
    128, -1, 99, -1, -1, 0, 168, 42, -1, -1, -1, -1, -1, 99, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 148, -1, -1, -1, -1, -1, -1, -1, -1, -1, 40, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 188, -1, -1, -1, -1, -1, -1, 0, -1, 66, 2, -1, -1,
    91, -1, -1, 173, -1, -1, -1, 16, -1, -1, 122, -1, -1, -1, -1, 42, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, 31, -1, 142, -1, 161, -1, -1, 101, -1, -1, 104, -1, -1, 2, -1, -1,
    155, -1, -1, -1, 199, -1, -1, -1, -1, -1, -1, 93, -1, -1, -1, -1, 92, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 105, -1, 0, -1, 72, -1, -1, 35,
    -1, -1, 109, -1, -1, -1, -1, 182, -1, -1, -1, 30, -1, -1, -1, 6, -1, -1, -1,
    -1, -1, -1, 125, -1, -1, -1, 185, -1, -1, -1, -1, -1, -1, -1, -1, 3, -1, 0,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, 124, -1, 46, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 135, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, 116, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 20,
    -1, 20, -1, -1, -1, -1, -1, -1, -1, -1, -1, 162, -1, -1, -1, -1, -1, 0, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 46, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 6, -1, 194, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 98, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[3128];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 46; i++) {
    for (j = 0; j < 68; j++) {
      b_i = i + 46 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(46.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(68.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 46; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 68; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 46 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void h_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[3128] = { 135, 96, 189, 128, 64, 2, 199, 77, 181, 169, -1,
    45, 186, 220, 124, 39, -1, 183, -1, 179, 77, -1, 25, -1, 32, -1, 163, -1, 32,
    -1, 170, -1, 103, -1, 161, -1, 11, -1, 121, -1, 4, -1, 222, -1, 191, -1, 227,
    -1, 4, 23, 211, 171, -1, 146, 105, 12, 116, 115, 215, -1, -1, 138, 78, -1,
    183, 108, -1, 197, -1, 185, -1, 27, -1, 165, -1, 232, -1, 73, -1, 199, -1,
    231, -1, 59, -1, 115, -1, 53, -1, 22, -1, 177, 126, 236, 225, -1, -1, -1, -1,
    -1, -1, -1, 151, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 127, -1, -1,
    131, -1, -1, -1, -1, -1, -1, 132, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 134, 136, -1, 162, -1, 47, -1, -1, 141, -1, -1, -1, -1, 185, -1, -1, 152,
    -1, -1, -1, 187, -1, -1, -1, 178, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 188, -1, 189, -1, -1, -1, -1, -1, 221, 151, 220, -1, -1, -1, 209,
    -1, -1, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 2, -1, 169,
    -1, 43, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 170, -1, -1, -1,
    84, 128, 236, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 122, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 83, -1, 117, 43, -1, -1, 22, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 141, -1, 232, -1, -1,
    -1, -1, -1, -1, -1, 174, -1, -1, -1, -1, -1, -1, -1, -1, -1, 114, -1, 92,
    179, 186, -1, -1, -1, 32, -1, -1, 230, -1, -1, 154, -1, -1, -1, -1, -1, 159,
    -1, -1, -1, -1, -1, 11, -1, -1, -1, -1, -1, 149, -1, -1, 237, -1, -1, -1, -1,
    168, -1, -1, -1, -1, 211, -1, -1, 172, 92, 96, -1, -1, -1, 166, -1, -1, 115,
    -1, -1, -1, -1, -1, -1, -1, -1, 138, -1, -1, -1, -1, -1, -1, -1, 9, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 103, -1, -1, -1, -1, -1, 53, 56, 24,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 203, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 90, -1, -1,
    215, -1, -1, 187, -1, 225, -1, 68, 1, -1, -1, 23, -1, -1, 206, -1, -1, 124,
    -1, -1, 220, -1, -1, -1, 196, -1, -1, -1, 117, -1, -1, -1, -1, -1, -1, 199,
    -1, -1, -1, -1, -1, -1, -1, 26, -1, -1, -1, -1, -1, -1, 93, 205, 11, -1, 216,
    -1, -1, 100, -1, -1, 221, -1, -1, 180, -1, -1, -1, 84, -1, -1, -1, 167, -1,
    -1, -1, 156, -1, -1, -1, -1, -1, -1, -1, -1, 172, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 128, 189, -1, 22, -1, 143, -1, -1, 223, -1, -1, 134, -1,
    -1, 144, -1, -1, -1, 215, -1, -1, -1, 47, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    110, -1, -1, 145, -1, -1, 140, -1, -1, -1, -1, -1, -1, -1, 75, -1, 6, 24, -1,
    -1, 92, -1, -1, 17, -1, -1, 98, -1, -1, 173, -1, -1, 180, -1, -1, -1, 126,
    -1, -1, -1, -1, -1, -1, -1, 26, -1, -1, -1, -1, -1, -1, 204, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 95, 101, 167, -1, -1, -1, 18, -1, -1, 84, -1, -1, -1, -1,
    -1, -1, 112, -1, -1, -1, -1, -1, -1, -1, 181, -1, -1, -1, 32, -1, -1, 151,
    -1, -1, -1, 207, -1, -1, -1, -1, -1, -1, -1, -1, -1, 135, 85, 33, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 182, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 98, -1, -1, -1, -1, -1, -1, -1, 142, -1, 42, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 217, 153, -1, 200, -1, 210, -1, -1, 177, -1, -1, 1, -1, -1, 95, -1,
    -1, 106, -1, -1, -1, 215, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 127, -1, -1, -1, 87, 96, 32, -1, -1, 207, -1,
    -1, 212, -1, -1, -1, -1, 72, -1, -1, 219, -1, -1, -1, -1, 178, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 180, -1, -1, -1, -1, -1, 30, -1, -1, -1, -1,
    -1, 220, -1, 125, 235, -1, -1, 52, -1, -1, 92, -1, -1, 80, -1, -1, 142, -1,
    -1, 143, -1, -1, -1, -1, 199, -1, -1, -1, -1, -1, 118, -1, -1, -1, -1, -1,
    -1, 100, -1, -1, -1, -1, 24, -1, 49, -1, -1, 90, 163, 67, -1, -1, -1, -1, -1,
    145, -1, -1, -1, -1, -1, -1, -1, -1, -1, 14, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 200, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 52, -1, -1, -1, -1, -1, -1,
    105, -1, 230, 172, -1, -1, 13, -1, -1, 205, -1, -1, -1, 178, -1, -1, 5, -1,
    -1, -1, -1, 65, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 137, 216, -1, 219, -1, 180, -1, -1, 199,
    -1, -1, 152, -1, -1, 76, -1, -1, 129, -1, -1, -1, 216, -1, -1, -1, -1, -1,
    -1, 205, -1, -1, -1, -1, 65, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    1, 0, -1, 1, -1, 180, -1, -1, 153, -1, -1, 165, -1, -1, -1, -1, 205, -1, -1,
    -1, 130, -1, -1, -1, 58, -1, -1, -1, -1, -1, -1, 175, -1, -1, -1, 100, -1,
    -1, -1, -1, -1, -1, -1, -1, 148, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 107, -1, 150, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 161, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    0, -1, -1, -1, -1, -1, 38, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 105, -1, 211, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 71, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 49, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 103, -1, 108, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 125, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[3128];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 46; i++) {
    for (j = 0; j < 68; j++) {
      b_i = i + 46 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(46.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(68.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 46; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 68; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 46 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void i_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[2184] = { 9, 167, 81, -1, 179, 231, 155, -1, 142, -1, 11,
    11, -1, 83, -1, 51, -1, -1, 220, 87, -1, 76, -1, 23, -1, 228, -1, 8, -1, 18,
    -1, -1, 242, -1, 147, -1, 140, -1, -1, 239, -1, -1, 117, -1, 114, 8, 214, 41,
    -1, 129, 94, 203, 185, -1, 63, 2, 115, -1, 203, 254, -1, 20, 26, -1, 222, -1,
    46, -1, -1, -1, 98, -1, -1, 106, -1, -1, -1, 57, -1, -1, 31, -1, -1, 129,
    204, -1, -1, 58, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 63, -1, 139, -1, 29, -1, 101, -1, 71, -1, -1, 132, -1, -1, 38,
    -1, -1, -1, 0, -1, 26, 166, 44, -1, -1, -1, -1, -1, -1, -1, -1, -1, 111, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 235, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 253, 52, 158, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 105, -1, -1, -1, -1, -1, -1, -1, -1,
    28, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 125, -1, 104, -1,
    194, 228, 147, -1, -1, -1, -1, -1, -1, -1, -1, -1, 124, -1, -1, -1, -1, -1,
    238, -1, 156, -1, -1, 135, -1, 240, -1, 44, -1, -1, 40, -1, -1, 66, -1, -1,
    229, 189, 226, -1, 209, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, 145, -1, -1,
    -1, 194, -1, -1, -1, -1, -1, -1, -1, -1, 151, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 156, -1, 54, -1, 159, 45, 140, -1, -1, 117, 236,
    -1, -1, -1, -1, -1, -1, 50, -1, -1, -1, -1, -1, -1, -1, 143, -1, -1, -1, 9,
    -1, -1, 164, -1, -1, 154, -1, -1, 172, -1, -1, -1, 224, 240, 18, -1, -1, -1,
    -1, -1, 205, -1, -1, -1, 38, -1, -1, -1, -1, -1, -1, -1, 42, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 205, 252, -1,
    128, -1, -1, 28, -1, -1, -1, -1, 210, -1, -1, -1, -1, 142, -1, -1, -1, -1,
    -1, -1, -1, 8, -1, -1, -1, -1, -1, 84, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, 1, 0, -1, -1, -1, -1, -1, 61, -1, -1, -1, -1, -1, 175, -1, -1,
    -1, 185, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 235, -1, -1, -1,
    219, -1, -1, 75, -1, 0, 0, -1, -1, 71, 103, 158, 3, -1, 247, -1, -1, 14, -1,
    3, 213, 8, 114, -1, -1, 29, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 63, -1, -1, 38, -1, -1, 118, -1, 0, 0, -1, -1, -1, -1, -1, 230, -1,
    -1, -1, -1, -1, -1, -1, 242, 64, -1, -1, -1, -1, -1, -1, -1, -1, 160, -1, -1,
    -1, -1, -1, 166, -1, 85, -1, -1, -1, -1, 34, -1, -1, -1, -1, 0, 0, -1, -1,
    -1, 116, -1, -1, -1, 56, -1, 222, 232, -1, -1, -1, -1, -1, -1, 210, -1, -1,
    -1, -1, 122, -1, -1, -1, -1, 1, -1, -1, 36, -1, -1, 151, -1, -1, 120, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[2184];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 42; i++) {
    for (j = 0; j < 52; j++) {
      b_i = i + 42 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(42.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(52.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 42; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 52; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 42 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : const emxArray_int8_T *H
 *                emxArray_int32_T *d_offsetWeight
 *                emxArray_int32_T *d_columnIndexMap
 * Return Type  : void
 */
static void init(const emxArray_int8_T *H, emxArray_int32_T *d_offsetWeight,
                 emxArray_int32_T *d_columnIndexMap)
{
  emxArray_int32_T *idx;
  emxArray_int32_T *iwork;
  emxArray_int32_T *jj;
  emxArray_int8_T c_H;
  emxArray_int8_T *b_H;
  emxArray_real_T *b_x;
  emxArray_real_T *b_y;
  emxArray_real_T *columnWeight;
  emxArray_real_T *rowIndex;
  emxArray_real_T *rowWeight;
  emxArray_real_T *temp;
  emxArray_real_T *x;
  emxArray_real_T *y;
  double bsum;
  int d_H[2];
  int b_i;
  int i;
  int i1;
  int i2;
  int j;
  int k;
  int kEnd;
  int npages;
  int p;
  int pEnd;
  int q;
  int qEnd;
  emxInit_real_T(&rowIndex, 1);
  emxInit_int32_T(&jj, 1);
  emxInit_int32_T(&idx, 1);
  emxInit_int8_T(&b_H, 2);
  if (H->size[0] == 1) {
    i = b_H->size[0] * b_H->size[1];
    b_H->size[0] = H->size[1];
    b_H->size[1] = 1;
    emxEnsureCapacity_int8_T(b_H, i);
    for (i = 0; i < 1; i++) {
      pEnd = H->size[1];
      for (i1 = 0; i1 < pEnd; i1++) {
        b_H->data[i1] = H->data[H->size[0] * i1];
      }
    }

    i2 = H->size[1];
    c_H = *b_H;
    d_H[0] = i2;
    d_H[1] = 1;
    c_H.size = &d_H[0];
    c_H.numDimensions = 2;
    eml_find(&c_H, idx, jj);
    i = rowIndex->size[0];
    rowIndex->size[0] = jj->size[0];
    emxEnsureCapacity_real_T(rowIndex, i);
    pEnd = jj->size[0];
    for (i = 0; i < pEnd; i++) {
      rowIndex->data[i] = jj->data[i];
    }
  } else {
    eml_find(H, idx, jj);
    i = rowIndex->size[0];
    rowIndex->size[0] = idx->size[0];
    emxEnsureCapacity_real_T(rowIndex, i);
    pEnd = idx->size[0];
    for (i = 0; i < pEnd; i++) {
      rowIndex->data[i] = idx->data[i];
    }

    i = idx->size[0];
    idx->size[0] = jj->size[0];
    emxEnsureCapacity_int32_T(idx, i);
    pEnd = jj->size[0];
    for (i = 0; i < pEnd; i++) {
      idx->data[i] = jj->data[i];
    }
  }

  npages = 0;
  i = H->size[0] * H->size[1];
  for (k = 0; k < i; k++) {
    if (H->data[k] != 0) {
      npages++;
    }
  }

  emxInit_real_T(&y, 2);
  if (npages < 1) {
    y->size[0] = 1;
    y->size[1] = 0;
  } else {
    i = y->size[0] * y->size[1];
    y->size[0] = 1;
    y->size[1] = npages;
    emxEnsureCapacity_real_T(y, i);
    pEnd = npages - 1;
    for (i = 0; i <= pEnd; i++) {
      y->data[i] = (double)i + 1.0;
    }
  }

  emxInit_real_T(&temp, 2);
  i = temp->size[0] * temp->size[1];
  temp->size[0] = rowIndex->size[0];
  temp->size[1] = 2;
  emxEnsureCapacity_real_T(temp, i);
  pEnd = rowIndex->size[0];
  for (i = 0; i < pEnd; i++) {
    temp->data[i] = (rowIndex->data[i] - 1.0) * (double)H->size[1] + (double)
      idx->data[i];
  }

  pEnd = y->size[1];
  for (i = 0; i < pEnd; i++) {
    temp->data[i + temp->size[0]] = y->data[i];
  }

  emxFree_real_T(&y);
  npages = temp->size[0] + 1;
  i = idx->size[0];
  idx->size[0] = temp->size[0];
  emxEnsureCapacity_int32_T(idx, i);
  pEnd = temp->size[0];
  for (i = 0; i < pEnd; i++) {
    idx->data[i] = 0;
  }

  if (temp->size[0] == 0) {
    for (k = 0; k <= npages - 2; k++) {
      idx->data[k] = k + 1;
    }
  } else {
    emxInit_int32_T(&iwork, 1);
    i = iwork->size[0];
    iwork->size[0] = temp->size[0];
    emxEnsureCapacity_int32_T(iwork, i);
    i = temp->size[0] - 1;
    for (k = 1; k <= i; k += 2) {
      if (sortLE(temp, k, k + 1)) {
        idx->data[k - 1] = k;
        idx->data[k] = k + 1;
      } else {
        idx->data[k - 1] = k + 1;
        idx->data[k] = k;
      }
    }

    if ((temp->size[0] & 1) != 0) {
      idx->data[temp->size[0] - 1] = temp->size[0];
    }

    b_i = 2;
    while (b_i < npages - 1) {
      i2 = b_i << 1;
      j = 1;
      for (pEnd = b_i + 1; pEnd < npages; pEnd = qEnd + b_i) {
        p = j;
        q = pEnd;
        qEnd = j + i2;
        if (qEnd > npages) {
          qEnd = npages;
        }

        k = 0;
        kEnd = qEnd - j;
        while (k + 1 <= kEnd) {
          i = idx->data[q - 1];
          i1 = idx->data[p - 1];
          if (sortLE(temp, i1, i)) {
            iwork->data[k] = i1;
            p++;
            if (p == pEnd) {
              while (q < qEnd) {
                k++;
                iwork->data[k] = idx->data[q - 1];
                q++;
              }
            }
          } else {
            iwork->data[k] = i;
            q++;
            if (q == qEnd) {
              while (p < pEnd) {
                k++;
                iwork->data[k] = idx->data[p - 1];
                p++;
              }
            }
          }

          k++;
        }

        for (k = 0; k < kEnd; k++) {
          idx->data[(j + k) - 1] = iwork->data[k];
        }

        j = qEnd;
      }

      b_i = i2;
    }

    emxFree_int32_T(&iwork);
  }

  i2 = temp->size[0] - 1;
  i = rowIndex->size[0];
  rowIndex->size[0] = temp->size[0];
  emxEnsureCapacity_real_T(rowIndex, i);
  for (j = 0; j < 2; j++) {
    for (b_i = 0; b_i <= i2; b_i++) {
      rowIndex->data[b_i] = temp->data[(idx->data[b_i] + temp->size[0] * j) - 1];
    }

    for (b_i = 0; b_i <= i2; b_i++) {
      temp->data[b_i + temp->size[0] * j] = rowIndex->data[b_i];
    }
  }

  emxFree_real_T(&rowIndex);
  i = b_H->size[0] * b_H->size[1];
  b_H->size[0] = H->size[1];
  b_H->size[1] = H->size[0];
  emxEnsureCapacity_int8_T(b_H, i);
  pEnd = H->size[0];
  for (i = 0; i < pEnd; i++) {
    i2 = H->size[1];
    for (i1 = 0; i1 < i2; i1++) {
      b_H->data[i1 + b_H->size[0] * i] = H->data[i + H->size[0] * i1];
    }
  }

  emxInit_real_T(&rowWeight, 1);
  emxInit_real_T(&x, 1);
  eml_find(b_H, idx, jj);
  sum(H, rowWeight);
  if (1 > rowWeight->size[0] - 1) {
    pEnd = 0;
  } else {
    pEnd = rowWeight->size[0] - 1;
  }

  i = x->size[0];
  x->size[0] = pEnd;
  emxEnsureCapacity_real_T(x, i);
  emxFree_int8_T(&b_H);
  emxFree_int32_T(&jj);
  for (i = 0; i < pEnd; i++) {
    x->data[i] = rowWeight->data[i];
  }

  if ((pEnd != 1) && (pEnd != 0) && (pEnd != 1)) {
    for (k = 0; k <= pEnd - 2; k++) {
      x->data[k + 1] += x->data[k];
    }
  }

  emxInit_real_T(&b_y, 2);
  if ((H->size[0] == 0) || (H->size[1] == 0)) {
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = H->size[1];
    emxEnsureCapacity_real_T(b_y, i);
    pEnd = H->size[1];
    for (i = 0; i < pEnd; i++) {
      b_y->data[i] = 0.0;
    }
  } else {
    npages = H->size[1];
    i = b_y->size[0] * b_y->size[1];
    b_y->size[0] = 1;
    b_y->size[1] = H->size[1];
    emxEnsureCapacity_real_T(b_y, i);
    if (H->size[0] <= 1024) {
      i2 = H->size[0];
      p = 0;
      pEnd = 1;
    } else {
      i2 = 1024;
      pEnd = H->size[0] / 1024;
      p = H->size[0] - (pEnd << 10);
      if (p > 0) {
        pEnd++;
      } else {
        p = 1024;
      }
    }

    for (b_i = 0; b_i < npages; b_i++) {
      q = b_i * H->size[0];
      b_y->data[b_i] = H->data[q];
      for (k = 2; k <= i2; k++) {
        b_y->data[b_i] += (double)H->data[(q + k) - 1];
      }

      for (j = 2; j <= pEnd; j++) {
        qEnd = q + ((j - 1) << 10);
        bsum = H->data[qEnd];
        if (j == pEnd) {
          kEnd = p;
        } else {
          kEnd = 1024;
        }

        for (k = 2; k <= kEnd; k++) {
          bsum += (double)H->data[(qEnd + k) - 1];
        }

        b_y->data[b_i] += bsum;
      }
    }
  }

  emxInit_real_T(&columnWeight, 1);
  i = columnWeight->size[0];
  columnWeight->size[0] = b_y->size[1];
  emxEnsureCapacity_real_T(columnWeight, i);
  pEnd = b_y->size[1];
  for (i = 0; i < pEnd; i++) {
    columnWeight->data[i] = b_y->data[i];
  }

  emxFree_real_T(&b_y);
  emxInit_real_T(&b_x, 1);
  if (1 > columnWeight->size[0] - 1) {
    pEnd = 0;
  } else {
    pEnd = columnWeight->size[0] - 1;
  }

  i = b_x->size[0];
  b_x->size[0] = pEnd;
  emxEnsureCapacity_real_T(b_x, i);
  for (i = 0; i < pEnd; i++) {
    b_x->data[i] = columnWeight->data[i];
  }

  if ((pEnd != 1) && (pEnd != 0) && (pEnd != 1)) {
    for (k = 0; k <= pEnd - 2; k++) {
      b_x->data[k + 1] += b_x->data[k];
    }
  }

  i = d_offsetWeight->size[0];
  d_offsetWeight->size[0] = (((x->size[0] + rowWeight->size[0]) + b_x->size[0])
    + columnWeight->size[0]) + 2;
  emxEnsureCapacity_int32_T(d_offsetWeight, i);
  d_offsetWeight->data[0] = 0;
  pEnd = x->size[0];
  for (i = 0; i < pEnd; i++) {
    bsum = rt_roundd_snf(x->data[i]);
    if (bsum < 2.147483648E+9) {
      if (bsum >= -2.147483648E+9) {
        i1 = (int)bsum;
      } else {
        i1 = MIN_int32_T;
      }
    } else if (bsum >= 2.147483648E+9) {
      i1 = MAX_int32_T;
    } else {
      i1 = 0;
    }

    d_offsetWeight->data[i + 1] = i1;
  }

  pEnd = rowWeight->size[0];
  for (i = 0; i < pEnd; i++) {
    bsum = rt_roundd_snf(rowWeight->data[i]);
    if (bsum < 2.147483648E+9) {
      if (bsum >= -2.147483648E+9) {
        i1 = (int)bsum;
      } else {
        i1 = MIN_int32_T;
      }
    } else if (bsum >= 2.147483648E+9) {
      i1 = MAX_int32_T;
    } else {
      i1 = 0;
    }

    d_offsetWeight->data[(i + x->size[0]) + 1] = i1;
  }

  d_offsetWeight->data[(x->size[0] + rowWeight->size[0]) + 1] = 0;
  pEnd = b_x->size[0];
  for (i = 0; i < pEnd; i++) {
    bsum = b_x->data[i];
    if (bsum < 2.147483648E+9) {
      if (bsum >= -2.147483648E+9) {
        i1 = (int)bsum;
      } else {
        i1 = MIN_int32_T;
      }
    } else if (bsum >= 2.147483648E+9) {
      i1 = MAX_int32_T;
    } else {
      i1 = 0;
    }

    d_offsetWeight->data[((i + x->size[0]) + rowWeight->size[0]) + 2] = i1;
  }

  pEnd = columnWeight->size[0];
  for (i = 0; i < pEnd; i++) {
    bsum = columnWeight->data[i];
    if (bsum < 2.147483648E+9) {
      if (bsum >= -2.147483648E+9) {
        i1 = (int)bsum;
      } else {
        i1 = MIN_int32_T;
      }
    } else if (bsum >= 2.147483648E+9) {
      i1 = MAX_int32_T;
    } else {
      i1 = 0;
    }

    d_offsetWeight->data[(((i + x->size[0]) + rowWeight->size[0]) + b_x->size[0])
      + 2] = i1;
  }

  emxFree_real_T(&b_x);
  emxFree_real_T(&x);
  emxFree_real_T(&columnWeight);
  emxFree_real_T(&rowWeight);
  pEnd = temp->size[0];
  i = d_columnIndexMap->size[0];
  d_columnIndexMap->size[0] = idx->size[0] + temp->size[0];
  emxEnsureCapacity_int32_T(d_columnIndexMap, i);
  i2 = idx->size[0];
  for (i = 0; i < i2; i++) {
    bsum = (double)idx->data[i] - 1.0;
    if (bsum >= -2.147483648E+9) {
      i1 = (int)bsum;
    } else {
      i1 = MIN_int32_T;
    }

    d_columnIndexMap->data[i] = i1;
  }

  for (i = 0; i < pEnd; i++) {
    bsum = temp->data[i + temp->size[0]] - 1.0;
    if (bsum < 2.147483648E+9) {
      if (bsum >= -2.147483648E+9) {
        i1 = (int)bsum;
      } else {
        i1 = MIN_int32_T;
      }
    } else {
      i1 = MAX_int32_T;
    }

    d_columnIndexMap->data[i + idx->size[0]] = i1;
  }

  emxFree_int32_T(&idx);
  emxFree_real_T(&temp);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void j_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[2184] = { 174, 27, 25, -1, 72, 10, 129, -1, 118, -1, 59,
    32, -1, 49, -1, 68, -1, -1, 186, 58, -1, 157, -1, 106, -1, 45, -1, 103, -1,
    110, -1, -1, 84, -1, 173, -1, 25, -1, -1, 93, -1, -1, 97, -1, 114, 136, 74,
    44, -1, 80, 70, 28, 104, -1, 39, 125, 19, -1, 87, 158, -1, 42, 76, -1, 20,
    -1, 182, -1, -1, -1, 70, -1, -1, 3, -1, -1, -1, 77, -1, -1, 84, -1, -1, 147,
    166, -1, -1, 175, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 52, -1, 153, -1, 67, -1, 111, -1, 120, -1, -1, 165, -1, -1, 151,
    -1, -1, -1, 103, -1, 66, 36, 117, -1, -1, -1, -1, -1, -1, -1, -1, -1, 93, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 86, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 48, 110, 113, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 61, -1, -1, -1, -1, -1, -1, -1, -1,
    17, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 92, -1, 72, -1, 121,
    92, 186, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23, -1, -1, -1, -1, -1, 95, -1,
    21, -1, -1, 168, -1, 154, -1, 8, -1, -1, 184, -1, -1, 151, -1, -1, 7, 71, 31,
    -1, 123, -1, -1, -1, -1, -1, -1, 22, -1, -1, -1, 118, -1, -1, -1, 6, -1, -1,
    -1, -1, -1, -1, -1, -1, 50, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 187, -1, 118, -1, 80, 100, 16, -1, -1, 52, 92, -1, -1, -1, -1,
    -1, -1, 46, -1, -1, -1, -1, -1, -1, -1, 137, -1, -1, -1, 52, -1, -1, 179, -1,
    -1, 170, -1, -1, 132, -1, -1, -1, 185, 114, 28, -1, -1, -1, -1, -1, 132, -1,
    -1, -1, 35, -1, -1, -1, -1, -1, -1, -1, 175, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 172, 3, -1, 186, -1, -1, 49,
    -1, -1, -1, -1, 174, -1, -1, -1, -1, 177, -1, -1, -1, -1, -1, -1, -1, 64, -1,
    -1, -1, -1, -1, 56, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 1, 0,
    -1, -1, -1, -1, -1, 185, -1, -1, -1, -1, -1, 63, -1, -1, -1, 156, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 124, -1, -1, -1, 37, -1, -1, 107, -1,
    0, 0, -1, -1, 29, 48, 184, 102, -1, 178, -1, -1, 11, -1, 21, 81, 135, 9, -1,
    -1, 153, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 18, -1, -1,
    190, -1, -1, 60, -1, 0, 0, -1, -1, -1, -1, -1, 152, -1, -1, -1, -1, -1, -1,
    -1, 64, 6, -1, -1, -1, -1, -1, -1, -1, -1, 55, -1, -1, -1, -1, -1, 17, -1,
    177, -1, -1, -1, -1, 57, -1, -1, -1, -1, 0, 0, -1, -1, -1, 143, -1, -1, -1,
    154, -1, 166, 163, -1, -1, -1, -1, -1, -1, 67, -1, -1, -1, -1, 85, -1, -1,
    -1, -1, 170, -1, -1, 12, -1, -1, 31, -1, -1, 163, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[2184];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 42; i++) {
    for (j = 0; j < 52; j++) {
      b_i = i + 42 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(42.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(52.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 42; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 52; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 42 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void k_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[2184] = { 0, 137, 20, -1, 0, 0, 0, -1, 0, -1, 0, 0, -1, 0,
    -1, 0, -1, -1, 0, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, 0, -1, -1, 0, -1, 0, -1,
    0, -1, -1, 0, -1, -1, 0, -1, 94, 38, 136, 131, -1, 0, 65, 0, 17, -1, 0, 112,
    0, -1, 0, 0, -1, 158, 0, -1, 0, -1, 0, -1, -1, -1, 0, -1, -1, 0, -1, -1, -1,
    0, -1, -1, 0, -1, -1, 0, 0, -1, -1, 15, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 4, -1, 69, -1, 0, -1, 126, -1, 0, -1, -1,
    0, -1, -1, 63, -1, -1, -1, 0, -1, 0, 124, 99, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 113, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 75, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 9, 102, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 148, -1, -1, -1, -1, -1,
    -1, -1, -1, 154, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    146, -1, 142, 124, 45, -1, -1, -1, -1, -1, -1, -1, -1, -1, 24, -1, -1, -1,
    -1, -1, 158, -1, 65, -1, -1, 110, -1, 35, -1, 20, -1, -1, 157, -1, -1, 93,
    -1, -1, 2, 0, 88, -1, 12, -1, -1, -1, -1, -1, -1, 156, -1, -1, -1, 138, -1,
    -1, -1, 18, -1, -1, -1, -1, -1, -1, -1, -1, 32, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 57, -1, 141, 99, 148, -1, -1, 20, 7,
    -1, -1, -1, -1, -1, -1, 86, -1, -1, -1, -1, -1, -1, -1, 100, -1, -1, -1, 51,
    -1, -1, 88, -1, -1, 82, -1, -1, 24, -1, -1, -1, 0, 108, 53, -1, -1, -1, -1,
    -1, 97, -1, -1, -1, 102, -1, -1, -1, -1, -1, -1, -1, 17, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, 55, -1, 46,
    -1, -1, 45, -1, -1, -1, -1, 4, -1, -1, -1, -1, 79, -1, -1, -1, -1, -1, -1,
    -1, 87, -1, -1, -1, -1, -1, 134, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, 1, 0, -1, -1, -1, -1, -1, 51, -1, -1, -1, -1, -1, 73, -1, -1, -1, 154,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 13, -1, -1, -1, 0, -1,
    -1, 36, -1, 0, 0, -1, -1, 157, 64, 148, 96, -1, 85, -1, -1, 48, -1, 57, 99,
    111, 109, -1, -1, 104, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 6, -1, -1, 19, -1, -1, 55, -1, 0, 0, -1, -1, -1, -1, -1, 87, -1, -1, -1,
    -1, -1, -1, -1, 143, 18, -1, -1, -1, -1, -1, -1, -1, -1, 13, -1, -1, -1, -1,
    -1, 122, -1, 19, -1, -1, -1, -1, 138, -1, -1, -1, -1, 0, 0, -1, -1, -1, 78,
    -1, -1, -1, 2, -1, 26, 27, -1, -1, -1, -1, -1, -1, 33, -1, -1, -1, -1, 7, -1,
    -1, -1, -1, 20, -1, -1, 78, -1, -1, 144, -1, -1, 143, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[2184];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 42; i++) {
    for (j = 0; j < 52; j++) {
      b_i = i + 42 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(42.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(52.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 42; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 52; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 42 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void l_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[2184] = { 72, 53, 152, -1, 200, 185, 123, -1, 147, -1,
    174, 99, -1, 37, -1, 116, -1, -1, 68, 35, -1, 80, -1, 156, -1, 211, -1, 27,
    -1, 108, -1, -1, 108, -1, 29, -1, 1, -1, -1, 106, -1, -1, 110, -1, 131, 185,
    16, 138, -1, 103, 43, 2, 150, -1, 46, 113, 36, -1, 75, 48, -1, 138, 6, -1,
    49, -1, 153, -1, -1, -1, 216, -1, -1, 147, -1, -1, -1, 91, -1, -1, 37, -1,
    -1, 120, 23, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 1, -1, 88, -1, 90, -1, 212, -1, 106, -1, -1, 71, -1, -1,
    175, -1, -1, -1, 98, -1, 181, 156, 46, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    217, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 54, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 115, 191, 36, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 20, -1, -1, -1, -1, -1, -1,
    -1, -1, 61, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 156, -1, 124,
    -1, 170, 55, 13, -1, -1, -1, -1, -1, -1, -1, -1, -1, 132, -1, -1, -1, -1, -1,
    134, -1, 94, -1, -1, 193, -1, 44, -1, 21, -1, -1, 165, -1, -1, 97, -1, -1,
    101, 95, 115, -1, 124, -1, -1, -1, -1, -1, -1, 8, -1, -1, -1, 95, -1, -1, -1,
    16, -1, -1, -1, -1, -1, -1, -1, -1, 118, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 200, -1, 110, -1, 219, 31, 105, -1, -1, 56, 138, -1,
    -1, -1, -1, -1, -1, 156, -1, -1, -1, -1, -1, -1, -1, 6, -1, -1, -1, 185, -1,
    -1, 12, -1, -1, 83, -1, -1, 181, -1, -1, -1, 29, 91, 156, -1, -1, -1, -1, -1,
    30, -1, -1, -1, 143, -1, -1, -1, -1, -1, -1, -1, 43, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 8, 31, -1, 133, -1,
    -1, 222, -1, -1, -1, -1, 110, -1, -1, -1, -1, 158, -1, -1, -1, -1, -1, -1,
    -1, 63, -1, -1, -1, -1, -1, 176, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    1, -1, 0, 1, -1, -1, -1, -1, -1, 184, -1, -1, -1, -1, -1, 200, -1, -1, -1,
    86, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 109, -1, -1, -1, 40,
    -1, -1, 35, -1, 0, 0, -1, -1, 101, 193, 209, 150, -1, 83, -1, -1, 109, -1,
    40, 110, 134, 206, -1, -1, 141, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 55, -1, -1, 46, -1, -1, 81, -1, 0, 0, -1, -1, -1, -1, -1, 152,
    -1, -1, -1, -1, -1, -1, -1, 97, 2, -1, -1, -1, -1, -1, -1, -1, -1, 221, -1,
    -1, -1, -1, -1, 110, -1, 201, -1, -1, -1, -1, 154, -1, -1, -1, -1, 0, 0, -1,
    -1, -1, 181, -1, -1, -1, 99, -1, 140, 116, -1, -1, -1, -1, -1, -1, 81, -1,
    -1, -1, -1, 6, -1, -1, -1, -1, 182, -1, -1, 69, -1, -1, 12, -1, -1, 36, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[2184];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 42; i++) {
    for (j = 0; j < 52; j++) {
      b_i = i + 42 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(42.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(52.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 42; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 52; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 42 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void m_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[2184] = { 3, 19, 95, -1, 42, 40, 109, -1, 70, -1, 46, 28,
    -1, 76, -1, 139, -1, -1, 17, 79, -1, 91, -1, 68, -1, 128, -1, 13, -1, 133,
    -1, -1, 32, -1, 37, -1, 121, -1, -1, 119, -1, -1, 26, -1, 106, 120, 24, 140,
    -1, 97, 69, 97, 41, -1, 33, 37, 143, -1, 48, 120, -1, 28, 2, -1, 54, -1, 30,
    -1, -1, -1, 106, -1, -1, 80, -1, -1, -1, 60, -1, -1, 1, -1, -1, 48, 53, -1,
    -1, 121, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 132, -1, 42, -1, 142, -1, 77, -1, 87, -1, -1, 135, -1, -1, 129, -1, -1,
    -1, 6, -1, 35, 94, 92, -1, -1, -1, -1, -1, -1, -1, -1, -1, 122, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 115, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 104, 110, 22, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 103, -1, -1, -1, -1, -1, -1, -1, -1, 25, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 66, -1, 4, -1, 84, 87, 135,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 43, -1, -1, -1, -1, -1, 56, -1, 63, -1,
    -1, 43, -1, 56, -1, 89, -1, -1, 137, -1, -1, 70, -1, -1, 47, 115, 84, -1, 73,
    -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, 51, -1, -1, -1, 106, -1, -1, -1, -1,
    -1, -1, -1, -1, 10, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 98, -1, 49, -1, 137, 107, 35, -1, -1, 96, 30, -1, -1, -1, -1, -1, -1,
    142, -1, -1, -1, -1, -1, -1, -1, 28, -1, -1, -1, 104, -1, -1, 6, -1, -1, 26,
    -1, -1, 32, -1, -1, -1, 69, 111, 128, -1, -1, -1, -1, -1, 40, -1, -1, -1, 62,
    -1, -1, -1, -1, -1, -1, -1, 75, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 127, 50, -1, 79, -1, -1, 133, -1, -1, -1,
    -1, 116, -1, -1, -1, -1, 9, -1, -1, -1, -1, -1, -1, -1, 101, -1, -1, -1, -1,
    -1, 70, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, 1, 0, -1, -1, -1,
    -1, -1, 24, -1, -1, -1, -1, -1, 96, -1, -1, -1, 41, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 2, -1, -1, -1, 97, -1, -1, 73, -1, 0, 0, -1, -1,
    51, 71, 139, 108, -1, 49, -1, -1, 131, -1, 130, 128, 28, 65, -1, -1, 78, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 93, -1, -1, 1, -1, -1,
    19, -1, 0, 0, -1, -1, -1, -1, -1, 88, -1, -1, -1, -1, -1, -1, -1, 8, 42, -1,
    -1, -1, -1, -1, -1, -1, -1, 100, -1, -1, -1, -1, -1, 71, -1, 25, -1, -1, -1,
    -1, 142, -1, -1, -1, -1, 0, 0, -1, -1, -1, 65, -1, -1, -1, 64, -1, 47, 97,
    -1, -1, -1, -1, -1, -1, 81, -1, -1, -1, -1, 133, -1, -1, -1, -1, 139, -1, -1,
    114, -1, -1, 56, -1, -1, 102, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[2184];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 42; i++) {
    for (j = 0; j < 52; j++) {
      b_i = i + 42 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(42.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(52.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 42; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 52; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 42 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void n_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[2184] = { 156, 17, 98, -1, 86, 79, 47, -1, 53, -1, 111,
    91, -1, 29, -1, 137, -1, -1, 173, 13, -1, 156, -1, 110, -1, 72, -1, 42, -1,
    139, -1, -1, 116, -1, 11, -1, 73, -1, -1, 109, -1, -1, 143, -1, 168, 53, 67,
    84, -1, 48, 31, 104, 25, -1, 122, 91, 11, -1, 78, 134, -1, 135, 128, -1, 18,
    -1, 113, -1, -1, -1, 64, -1, -1, 117, -1, -1, -1, 126, -1, -1, 112, -1, -1,
    132, 14, -1, -1, 174, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 163, -1, 108, -1, 36, -1, 24, -1, 84, -1, -1, 105, -1, -1,
    154, -1, -1, -1, 160, -1, 3, 65, 107, -1, -1, -1, -1, -1, -1, -1, -1, -1, 11,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 132, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 63, 82, 174, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 52, -1, -1, -1, -1, -1, -1, -1,
    -1, 161, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 1, -1, 127, -1,
    35, 154, 125, -1, -1, -1, -1, -1, -1, -1, -1, -1, 23, -1, -1, -1, -1, -1,
    150, -1, 136, -1, -1, 149, -1, 173, -1, 73, -1, -1, 152, -1, -1, 7, -1, -1,
    6, 40, 55, -1, 17, -1, -1, -1, -1, -1, -1, 174, -1, -1, -1, 145, -1, -1, -1,
    31, -1, -1, -1, -1, -1, -1, -1, -1, 104, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 37, -1, 89, -1, 103, 10, 24, -1, -1, 23, 175, -1, -1,
    -1, -1, -1, -1, 22, -1, -1, -1, -1, -1, -1, -1, 38, -1, -1, -1, 93, -1, -1,
    137, -1, -1, 129, -1, -1, 6, -1, -1, -1, 171, 142, 17, -1, -1, -1, -1, -1,
    142, -1, -1, -1, 27, -1, -1, -1, -1, -1, -1, -1, 166, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 123, 133, -1, 105,
    -1, -1, 155, -1, -1, -1, -1, 24, -1, -1, -1, -1, 158, -1, -1, -1, -1, -1, -1,
    -1, 61, -1, -1, -1, -1, -1, 29, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, 1, 0, -1, -1, -1, -1, -1, 99, -1, -1, -1, -1, -1, 103, -1, -1, -1,
    145, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 29, -1, -1, -1, 167,
    -1, -1, 156, -1, 0, 0, -1, -1, 83, 60, 29, 47, -1, 64, -1, -1, 4, -1, 8, 40,
    17, 62, -1, -1, 173, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    172, -1, -1, 19, -1, -1, 8, -1, 0, 0, -1, -1, -1, -1, -1, 161, -1, -1, -1,
    -1, -1, -1, -1, 165, 163, -1, -1, -1, -1, -1, -1, -1, -1, 53, -1, -1, -1, -1,
    -1, 142, -1, 41, -1, -1, -1, -1, 105, -1, -1, -1, -1, 0, 0, -1, -1, -1, 55,
    -1, -1, -1, 141, -1, 127, 166, -1, -1, -1, -1, -1, -1, 40, -1, -1, -1, -1,
    145, -1, -1, -1, -1, 148, -1, -1, 162, -1, -1, 38, -1, -1, 82, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[2184];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 42; i++) {
    for (j = 0; j < 52; j++) {
      b_i = i + 42 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(42.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(52.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 42; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 52; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 42 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void o_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[2184] = { 143, 18, 126, -1, 43, 136, 7, -1, 101, -1, 125,
    39, -1, 32, -1, 174, -1, -1, 129, 110, -1, 10, -1, 52, -1, 197, -1, 168, -1,
    50, -1, -1, 110, -1, 197, -1, 197, -1, -1, 181, -1, -1, 19, -1, 163, 36, 27,
    49, -1, 163, 177, 186, 60, -1, 18, 53, 91, -1, 125, 57, -1, 124, 196, -1,
    202, -1, 113, -1, -1, -1, 14, -1, -1, 115, -1, -1, -1, 157, -1, -1, 157, -1,
    -1, 191, 176, -1, -1, 48, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 126, -1, 161, -1, 164, -1, 186, -1, 70, -1, -1, 163, -1,
    -1, 167, -1, -1, -1, 193, -1, 165, 27, 47, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 155, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 170, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 3, 183, 18, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 35, -1, -1, -1, -1, -1,
    -1, -1, -1, 27, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 102, -1,
    111, -1, 36, 34, 78, -1, -1, -1, -1, -1, -1, -1, -1, -1, 201, -1, -1, -1, -1,
    -1, 13, -1, 194, -1, -1, 46, -1, 17, -1, 0, -1, -1, 167, -1, -1, 173, -1, -1,
    197, 196, 185, -1, 203, -1, -1, -1, -1, -1, -1, 177, -1, -1, -1, 20, -1, -1,
    -1, 203, -1, -1, -1, -1, -1, -1, -1, -1, 193, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 17, -1, 3, -1, 132, 198, 143, -1, -1, 51, 29, -1,
    -1, -1, -1, -1, -1, 140, -1, -1, -1, -1, -1, -1, -1, 172, -1, -1, -1, 50, -1,
    -1, 173, -1, -1, 179, -1, -1, 157, -1, -1, -1, 14, 132, 191, -1, -1, -1, -1,
    -1, 27, -1, -1, -1, 95, -1, -1, -1, -1, -1, -1, -1, 122, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 13, 180, -1, 160,
    -1, -1, 168, -1, -1, -1, -1, 35, -1, -1, -1, -1, 31, -1, -1, -1, -1, -1, -1,
    -1, 88, -1, -1, -1, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, 1, 0, -1, -1, -1, -1, -1, 205, -1, -1, -1, -1, -1, 108, -1, -1, -1, 52,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 179, -1, -1, -1, 181, -1,
    -1, 163, -1, 0, 0, -1, -1, 117, 62, 12, 107, -1, 81, -1, -1, 49, -1, 52, 102,
    54, 142, -1, -1, 114, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    181, -1, -1, 191, -1, -1, 167, -1, 0, 0, -1, -1, -1, -1, -1, 22, -1, -1, -1,
    -1, -1, -1, -1, 176, 35, -1, -1, -1, -1, -1, -1, -1, -1, 49, -1, -1, -1, -1,
    -1, 163, -1, 191, -1, -1, -1, -1, 173, -1, -1, -1, -1, 0, 0, -1, -1, -1, 58,
    -1, -1, -1, 8, -1, 186, 109, -1, -1, -1, -1, -1, -1, 23, -1, -1, -1, -1, 161,
    -1, -1, -1, -1, 189, -1, -1, 193, -1, -1, 193, -1, -1, 179, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[2184];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 42; i++) {
    for (j = 0; j < 52; j++) {
      b_i = i + 42 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(42.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(52.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 42; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 52; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 42 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void p_parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[2184] = { 145, 142, 74, -1, 29, 121, 137, -1, 176, -1, 38,
    178, -1, 48, -1, 38, -1, -1, 128, 39, -1, 238, -1, 5, -1, 66, -1, 64, -1, 25,
    -1, -1, 179, -1, 184, -1, 178, -1, -1, 167, -1, -1, 131, -1, 31, 239, 140,
    41, -1, 86, 169, 167, 217, -1, 124, 57, 82, -1, 170, 196, -1, 84, 117, -1,
    195, -1, 81, -1, -1, -1, 7, -1, -1, 201, -1, -1, -1, 85, -1, -1, 42, -1, -1,
    53, 71, -1, -1, 171, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 44, -1, 19, -1, 146, -1, 144, -1, 37, -1, -1, 46, -1, -1,
    112, -1, -1, -1, 78, -1, 21, 174, 3, -1, -1, -1, -1, -1, -1, -1, -1, -1, 122,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 94, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 183, 53, 95, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 227, -1, -1, -1, -1, -1, -1, -1,
    -1, 57, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 27, -1, 110, -1,
    169, 72, 186, -1, -1, -1, -1, -1, -1, -1, -1, -1, 173, -1, -1, -1, -1, -1,
    111, -1, 95, -1, -1, 16, -1, 139, -1, 14, -1, -1, 225, -1, -1, 41, -1, -1,
    215, 23, 96, -1, 159, -1, -1, -1, -1, -1, -1, 208, -1, -1, -1, 232, -1, -1,
    -1, 211, -1, -1, -1, -1, -1, -1, -1, -1, 181, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 23, -1, 199, -1, 88, 172, 87, -1, -1, 232, 214,
    -1, -1, -1, -1, -1, -1, 210, -1, -1, -1, -1, -1, -1, -1, 66, -1, -1, -1, 221,
    -1, -1, 2, -1, -1, 106, -1, -1, 45, -1, -1, -1, 9, 155, 43, -1, -1, -1, -1,
    -1, 238, -1, -1, -1, 167, -1, -1, -1, -1, -1, -1, -1, 13, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 112, 167, -1, 75,
    -1, -1, 124, -1, -1, -1, -1, 168, -1, -1, -1, -1, 23, -1, -1, -1, -1, -1, -1,
    -1, 130, -1, -1, -1, -1, -1, 17, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    1, -1, 0, 1, -1, -1, -1, -1, -1, 48, -1, -1, -1, -1, -1, 217, -1, -1, -1, 88,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 106, -1, -1, -1, 154, -1,
    -1, 67, -1, 0, 0, -1, -1, 180, 207, 56, 172, -1, 68, -1, -1, 72, -1, 204,
    157, 175, 195, -1, -1, 6, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 175, -1, -1, 105, -1, -1, 230, -1, 0, 0, -1, -1, -1, -1, -1, 225, -1, -1,
    -1, -1, -1, -1, -1, 202, 218, -1, -1, -1, -1, -1, -1, -1, -1, 190, -1, -1,
    -1, -1, -1, 116, -1, 135, -1, -1, -1, -1, 189, -1, -1, -1, -1, 0, 0, -1, -1,
    -1, 154, -1, -1, -1, 51, -1, 219, 162, -1, -1, -1, -1, -1, -1, 11, -1, -1,
    -1, -1, 86, -1, -1, -1, -1, 46, -1, -1, 141, -1, -1, 114, -1, -1, 180, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[2184];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 42; i++) {
    for (j = 0; j < 52; j++) {
      b_i = i + 42 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(42.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(52.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 42; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 52; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 42 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : double Z
 *                emxArray_int8_T *H
 * Return Type  : void
 */
static void parityCheckMatrix(double Z, emxArray_int8_T *H)
{
  static const short V[3128] = { 250, 2, 106, 121, 157, 205, 183, 220, 112, 103,
    -1, 77, 160, 177, 206, 40, -1, 7, -1, 60, 151, -1, 64, -1, 112, -1, 195, -1,
    128, -1, 216, -1, 221, -1, 127, -1, 37, -1, 167, -1, 157, -1, 149, -1, 139,
    -1, 69, -1, 111, 89, 102, 236, -1, 44, 4, 182, 98, 41, 42, -1, -1, 96, 64,
    -1, 42, 73, -1, 249, -1, 156, -1, 23, -1, 25, -1, 86, -1, 95, -1, 2, -1, 161,
    -1, 198, -1, 173, -1, 167, -1, 151, -1, 149, 226, 239, 185, -1, -1, -1, -1,
    -1, -1, -1, 149, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 147, -1, -1,
    243, -1, -1, -1, -1, -1, -1, 187, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 159, 117, -1, 84, -1, 194, -1, -1, 7, -1, -1, -1, -1, 248, -1, -1, 49,
    -1, -1, -1, 186, -1, -1, -1, 86, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 139, -1, 173, -1, -1, -1, -1, -1, 124, 63, 20, -1, -1, -1, 159,
    -1, -1, 167, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 236, -1,
    215, -1, 165, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 157, -1,
    -1, -1, 100, 71, 117, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 121, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 10, -1, 93, 150, -1, -1, 22, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 136, -1, 104,
    -1, -1, -1, -1, -1, -1, -1, 197, -1, -1, -1, -1, -1, -1, -1, -1, -1, 151, -1,
    222, 229, 131, -1, -1, -1, 31, -1, -1, 160, -1, -1, 151, -1, -1, -1, -1, -1,
    72, -1, -1, -1, -1, -1, 116, -1, -1, -1, -1, -1, 177, -1, -1, 167, -1, -1,
    -1, -1, 149, -1, -1, -1, -1, 157, -1, -1, 104, 177, 243, -1, -1, -1, 167, -1,
    -1, 49, -1, -1, -1, -1, -1, -1, -1, -1, 127, -1, -1, -1, -1, -1, -1, -1, 194,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 137, -1, -1, -1, -1, -1, 59,
    173, 95, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    217, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 151,
    -1, -1, 139, -1, -1, 163, -1, 229, -1, 39, 136, -1, -1, 28, -1, -1, 109, -1,
    -1, 21, -1, -1, 65, -1, -1, -1, 224, -1, -1, -1, 170, -1, -1, -1, -1, -1, -1,
    73, -1, -1, -1, -1, -1, -1, -1, 157, -1, -1, -1, -1, -1, -1, 167, 110, 220,
    -1, 86, -1, -1, 67, -1, -1, 21, -1, -1, 32, -1, -1, -1, 49, -1, -1, -1, 47,
    -1, -1, -1, 116, -1, -1, -1, -1, -1, -1, -1, -1, 41, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 191, 102, -1, 246, -1, 231, -1, -1, 211, -1, -1, 83,
    -1, -1, 55, -1, -1, -1, 233, -1, -1, -1, 142, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 112, -1, -1, 207, -1, -1, 163, -1, -1, -1, -1, -1, -1, -1, 9, -1, 142,
    219, -1, -1, 244, -1, -1, 142, -1, -1, 234, -1, -1, 63, -1, -1, 8, -1, -1,
    -1, 188, -1, -1, -1, -1, -1, -1, -1, 120, -1, -1, -1, -1, -1, -1, 220, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 109, 225, 211, -1, -1, -1, 104, -1, -1, 58,
    -1, -1, -1, -1, -1, -1, 164, -1, -1, -1, -1, -1, -1, -1, 182, -1, -1, -1,
    236, -1, -1, 199, -1, -1, -1, 105, -1, -1, -1, -1, -1, -1, -1, -1, -1, 195,
    132, 225, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 206, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 61, -1, -1, -1, -1, -1, -1, -1, 164, -1, 51, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 23, 142, -1, 240, -1, 28, -1, -1, 102, -1,
    -1, 182, -1, -1, 127, -1, -1, 59, -1, -1, -1, 109, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 163, -1, -1, -1,
    155, 245, 76, -1, -1, 11, -1, -1, 14, -1, -1, -1, -1, 16, -1, -1, 1, -1, -1,
    -1, -1, 158, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 159, -1, -1, -1, -1,
    -1, 149, -1, -1, -1, -1, -1, 190, -1, 205, 244, -1, -1, 157, -1, -1, 61, -1,
    -1, 7, -1, -1, 75, -1, -1, 155, -1, -1, -1, -1, 152, -1, -1, -1, -1, -1, 84,
    -1, -1, -1, -1, -1, -1, 120, -1, -1, -1, -1, 151, -1, 173, -1, -1, 35, 255,
    251, -1, -1, -1, -1, -1, 164, -1, -1, -1, -1, -1, -1, -1, -1, -1, 147, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 181, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, 239, -1, 117, 144, -1, -1, 211, -1, -1, 216, -1,
    -1, -1, 185, -1, -1, 51, -1, -1, -1, -1, 131, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 31, 28, -1,
    12, -1, 123, -1, -1, 109, -1, -1, 78, -1, -1, 229, -1, -1, 144, -1, -1, -1,
    171, -1, -1, -1, -1, -1, -1, 63, -1, -1, -1, -1, 211, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 1, 0, -1, 1, -1, 115, -1, -1, 241, -1, -1, 252, -1,
    -1, -1, -1, 154, -1, -1, -1, 160, -1, -1, -1, 222, -1, -1, -1, -1, -1, -1,
    172, -1, -1, -1, 103, -1, -1, -1, -1, -1, -1, -1, -1, 173, -1, 0, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 22, -1, 62, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 122, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1, -1, 90, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 9, -1, 121, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 137, -1, -1, -1, -1, -1, 0, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 179, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 6, -1, 61, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 139, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, 0, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1,
    -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0 };

  emxArray_int8_T *r;
  double P[3128];
  double d;
  double d1;
  int b_i;
  int b_loop_ub;
  int i;
  int i2;
  int i3;
  int i4;
  int j;
  int loop_ub;
  short i1;
  for (i = 0; i < 46; i++) {
    for (j = 0; j < 68; j++) {
      b_i = i + 46 * j;
      i1 = V[b_i];
      if (i1 == -1) {
        P[b_i] = -1.0;
      } else {
        P[b_i] = b_mod(i1, Z);
      }
    }
  }

  d = rt_roundd_snf(46.0 * Z);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[0] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  d1 = rt_roundd_snf(68.0 * Z);
  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      b_i = (int)d1;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  i2 = H->size[0] * H->size[1];
  H->size[1] = b_i;
  emxEnsureCapacity_int8_T(H, i2);
  if (d < 2.147483648E+9) {
    if (d >= -2.147483648E+9) {
      b_i = (int)d;
    } else {
      b_i = MIN_int32_T;
    }
  } else if (d >= 2.147483648E+9) {
    b_i = MAX_int32_T;
  } else {
    b_i = 0;
  }

  if (d1 < 2.147483648E+9) {
    if (d1 >= -2.147483648E+9) {
      i2 = (int)d1;
    } else {
      i2 = MIN_int32_T;
    }
  } else if (d1 >= 2.147483648E+9) {
    i2 = MAX_int32_T;
  } else {
    i2 = 0;
  }

  loop_ub = b_i * i2;
  for (b_i = 0; b_i < loop_ub; b_i++) {
    H->data[b_i] = 0;
  }

  emxInit_int8_T(&r, 2);
  for (i = 0; i < 46; i++) {
    d = (((double)i + 1.0) - 1.0) * Z + 1.0;
    if (d > ((double)i + 1.0) * Z) {
      b_i = 1;
    } else {
      b_i = (int)d;
    }

    for (j = 0; j < 68; j++) {
      d = (((double)j + 1.0) - 1.0) * Z + 1.0;
      if (d > ((double)j + 1.0) * Z) {
        i2 = 1;
      } else {
        i2 = (int)d;
      }

      buildSubBlock(Z, P[i + 46 * j], r);
      loop_ub = r->size[1];
      for (i3 = 0; i3 < loop_ub; i3++) {
        b_loop_ub = r->size[0];
        for (i4 = 0; i4 < b_loop_ub; i4++) {
          H->data[((b_i + i4) + H->size[0] * ((i2 + i3) - 1)) - 1] = r->data[i4
            + r->size[0] * i3];
        }
      }
    }
  }

  emxFree_int8_T(&r);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_104params_free(void)
{
  emxFreeStruct_struct_T(&d_1_104);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_104params_init(void)
{
  emxInitStruct_struct_T(&d_1_104);
  d_1_104_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_10params_free(void)
{
  emxFreeStruct_struct_T(&d_1_10);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_10params_init(void)
{
  emxInitStruct_struct_T(&d_1_10);
  d_1_10_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_112params_free(void)
{
  emxFreeStruct_struct_T(&d_1_112);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_112params_init(void)
{
  emxInitStruct_struct_T(&d_1_112);
  d_1_112_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_11params_free(void)
{
  emxFreeStruct_struct_T(&d_1_11);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_11params_init(void)
{
  emxInitStruct_struct_T(&d_1_11);
  d_1_11_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_120params_free(void)
{
  emxFreeStruct_struct_T(&d_1_120);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_120params_init(void)
{
  emxInitStruct_struct_T(&d_1_120);
  d_1_120_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_128params_free(void)
{
  emxFreeStruct_struct_T(&d_1_128);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_128params_init(void)
{
  emxInitStruct_struct_T(&d_1_128);
  d_1_128_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_12params_free(void)
{
  emxFreeStruct_struct_T(&d_1_12);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_12params_init(void)
{
  emxInitStruct_struct_T(&d_1_12);
  d_1_12_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_13params_free(void)
{
  emxFreeStruct_struct_T(&d_1_13);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_13params_init(void)
{
  emxInitStruct_struct_T(&d_1_13);
  d_1_13_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_144params_free(void)
{
  emxFreeStruct_struct_T(&d_1_144);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_144params_init(void)
{
  emxInitStruct_struct_T(&d_1_144);
  d_1_144_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_14params_free(void)
{
  emxFreeStruct_struct_T(&d_1_14);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_14params_init(void)
{
  emxInitStruct_struct_T(&d_1_14);
  d_1_14_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_15params_free(void)
{
  emxFreeStruct_struct_T(&d_1_15);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_15params_init(void)
{
  emxInitStruct_struct_T(&d_1_15);
  d_1_15_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_160params_free(void)
{
  emxFreeStruct_struct_T(&d_1_160);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_160params_init(void)
{
  emxInitStruct_struct_T(&d_1_160);
  d_1_160_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_16params_free(void)
{
  emxFreeStruct_struct_T(&d_1_16);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_16params_init(void)
{
  emxInitStruct_struct_T(&d_1_16);
  d_1_16_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_176params_free(void)
{
  emxFreeStruct_struct_T(&d_1_176);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_176params_init(void)
{
  emxInitStruct_struct_T(&d_1_176);
  d_1_176_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_18params_free(void)
{
  emxFreeStruct_struct_T(&d_1_18);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_18params_init(void)
{
  emxInitStruct_struct_T(&d_1_18);
  d_1_18_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_192params_free(void)
{
  emxFreeStruct_struct_T(&d_1_192);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_192params_init(void)
{
  emxInitStruct_struct_T(&d_1_192);
  d_1_192_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_208params_free(void)
{
  emxFreeStruct_struct_T(&d_1_208);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_208params_init(void)
{
  emxInitStruct_struct_T(&d_1_208);
  d_1_208_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_20params_free(void)
{
  emxFreeStruct_struct_T(&d_1_20);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_20params_init(void)
{
  emxInitStruct_struct_T(&d_1_20);
  d_1_20_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_224params_free(void)
{
  emxFreeStruct_struct_T(&d_1_224);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_224params_init(void)
{
  emxInitStruct_struct_T(&d_1_224);
  d_1_224_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_22params_free(void)
{
  emxFreeStruct_struct_T(&d_1_22);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_22params_init(void)
{
  emxInitStruct_struct_T(&d_1_22);
  d_1_22_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_240params_free(void)
{
  emxFreeStruct_struct_T(&d_1_240);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_240params_init(void)
{
  emxInitStruct_struct_T(&d_1_240);
  d_1_240_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_24params_free(void)
{
  emxFreeStruct_struct_T(&d_1_24);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_24params_init(void)
{
  emxInitStruct_struct_T(&d_1_24);
  d_1_24_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_256params_free(void)
{
  emxFreeStruct_struct_T(&d_1_256);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_256params_init(void)
{
  emxInitStruct_struct_T(&d_1_256);
  d_1_256_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_26params_free(void)
{
  emxFreeStruct_struct_T(&d_1_26);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_26params_init(void)
{
  emxInitStruct_struct_T(&d_1_26);
  d_1_26_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_288params_free(void)
{
  emxFreeStruct_struct_T(&d_1_288);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_288params_init(void)
{
  emxInitStruct_struct_T(&d_1_288);
  d_1_288_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_28params_free(void)
{
  emxFreeStruct_struct_T(&d_1_28);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_28params_init(void)
{
  emxInitStruct_struct_T(&d_1_28);
  d_1_28_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_2params_free(void)
{
  emxFreeStruct_struct_T(&d_1_2);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_2params_init(void)
{
  emxInitStruct_struct_T(&d_1_2);
  d_1_2_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_30params_free(void)
{
  emxFreeStruct_struct_T(&d_1_30);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_30params_init(void)
{
  emxInitStruct_struct_T(&d_1_30);
  d_1_30_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_320params_free(void)
{
  emxFreeStruct_struct_T(&d_1_320);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_320params_init(void)
{
  emxInitStruct_struct_T(&d_1_320);
  d_1_320_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_32params_free(void)
{
  emxFreeStruct_struct_T(&d_1_32);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_32params_init(void)
{
  emxInitStruct_struct_T(&d_1_32);
  d_1_32_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_352params_free(void)
{
  emxFreeStruct_struct_T(&d_1_352);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_352params_init(void)
{
  emxInitStruct_struct_T(&d_1_352);
  d_1_352_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_36params_free(void)
{
  emxFreeStruct_struct_T(&d_1_36);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_36params_init(void)
{
  emxInitStruct_struct_T(&d_1_36);
  d_1_36_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_384params_free(void)
{
  emxFreeStruct_struct_T(&d_1_384);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_384params_init(void)
{
  emxInitStruct_struct_T(&d_1_384);
  d_1_384_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_3params_free(void)
{
  emxFreeStruct_struct_T(&d_1_3);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_3params_init(void)
{
  emxInitStruct_struct_T(&d_1_3);
  d_1_3_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_40params_free(void)
{
  emxFreeStruct_struct_T(&d_1_40);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_40params_init(void)
{
  emxInitStruct_struct_T(&d_1_40);
  d_1_40_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_44params_free(void)
{
  emxFreeStruct_struct_T(&d_1_44);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_44params_init(void)
{
  emxInitStruct_struct_T(&d_1_44);
  d_1_44_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_48params_free(void)
{
  emxFreeStruct_struct_T(&d_1_48);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_48params_init(void)
{
  emxInitStruct_struct_T(&d_1_48);
  d_1_48_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_4params_free(void)
{
  emxFreeStruct_struct_T(&d_1_4);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_4params_init(void)
{
  emxInitStruct_struct_T(&d_1_4);
  d_1_4_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_52params_free(void)
{
  emxFreeStruct_struct_T(&d_1_52);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_52params_init(void)
{
  emxInitStruct_struct_T(&d_1_52);
  d_1_52_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_56params_free(void)
{
  emxFreeStruct_struct_T(&d_1_56);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_56params_init(void)
{
  emxInitStruct_struct_T(&d_1_56);
  d_1_56_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_5params_free(void)
{
  emxFreeStruct_struct_T(&d_1_5);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_5params_init(void)
{
  emxInitStruct_struct_T(&d_1_5);
  d_1_5_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_60params_free(void)
{
  emxFreeStruct_struct_T(&d_1_60);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_60params_init(void)
{
  emxInitStruct_struct_T(&d_1_60);
  d_1_60_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_64params_free(void)
{
  emxFreeStruct_struct_T(&d_1_64);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_64params_init(void)
{
  emxInitStruct_struct_T(&d_1_64);
  d_1_64_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_6params_free(void)
{
  emxFreeStruct_struct_T(&d_1_6);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_6params_init(void)
{
  emxInitStruct_struct_T(&d_1_6);
  d_1_6_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_72params_free(void)
{
  emxFreeStruct_struct_T(&d_1_72);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_72params_init(void)
{
  emxInitStruct_struct_T(&d_1_72);
  d_1_72_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_7params_free(void)
{
  emxFreeStruct_struct_T(&d_1_7);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_7params_init(void)
{
  emxInitStruct_struct_T(&d_1_7);
  d_1_7_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_80params_free(void)
{
  emxFreeStruct_struct_T(&d_1_80);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_80params_init(void)
{
  emxInitStruct_struct_T(&d_1_80);
  d_1_80_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_88params_free(void)
{
  emxFreeStruct_struct_T(&d_1_88);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_88params_init(void)
{
  emxInitStruct_struct_T(&d_1_88);
  d_1_88_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_8params_free(void)
{
  emxFreeStruct_struct_T(&d_1_8);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_8params_init(void)
{
  emxInitStruct_struct_T(&d_1_8);
  d_1_8_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_96params_free(void)
{
  emxFreeStruct_struct_T(&d_1_96);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_96params_init(void)
{
  emxInitStruct_struct_T(&d_1_96);
  d_1_96_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_9params_free(void)
{
  emxFreeStruct_struct_T(&d_1_9);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_1_9params_init(void)
{
  emxInitStruct_struct_T(&d_1_9);
  d_1_9_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_104params_free(void)
{
  emxFreeStruct_struct_T(&d_2_104);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_104params_init(void)
{
  emxInitStruct_struct_T(&d_2_104);
  d_2_104_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_10params_free(void)
{
  emxFreeStruct_struct_T(&d_2_10);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_10params_init(void)
{
  emxInitStruct_struct_T(&d_2_10);
  d_2_10_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_112params_free(void)
{
  emxFreeStruct_struct_T(&d_2_112);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_112params_init(void)
{
  emxInitStruct_struct_T(&d_2_112);
  d_2_112_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_11params_free(void)
{
  emxFreeStruct_struct_T(&d_2_11);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_11params_init(void)
{
  emxInitStruct_struct_T(&d_2_11);
  d_2_11_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_120params_free(void)
{
  emxFreeStruct_struct_T(&d_2_120);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_120params_init(void)
{
  emxInitStruct_struct_T(&d_2_120);
  d_2_120_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_128params_free(void)
{
  emxFreeStruct_struct_T(&d_2_128);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_128params_init(void)
{
  emxInitStruct_struct_T(&d_2_128);
  d_2_128_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_12params_free(void)
{
  emxFreeStruct_struct_T(&d_2_12);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_12params_init(void)
{
  emxInitStruct_struct_T(&d_2_12);
  d_2_12_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_13params_free(void)
{
  emxFreeStruct_struct_T(&d_2_13);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_13params_init(void)
{
  emxInitStruct_struct_T(&d_2_13);
  d_2_13_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_144params_free(void)
{
  emxFreeStruct_struct_T(&d_2_144);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_144params_init(void)
{
  emxInitStruct_struct_T(&d_2_144);
  d_2_144_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_14params_free(void)
{
  emxFreeStruct_struct_T(&d_2_14);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_14params_init(void)
{
  emxInitStruct_struct_T(&d_2_14);
  d_2_14_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_15params_free(void)
{
  emxFreeStruct_struct_T(&d_2_15);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_15params_init(void)
{
  emxInitStruct_struct_T(&d_2_15);
  d_2_15_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_160params_free(void)
{
  emxFreeStruct_struct_T(&d_2_160);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_160params_init(void)
{
  emxInitStruct_struct_T(&d_2_160);
  d_2_160_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_16params_free(void)
{
  emxFreeStruct_struct_T(&d_2_16);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_16params_init(void)
{
  emxInitStruct_struct_T(&d_2_16);
  d_2_16_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_176params_free(void)
{
  emxFreeStruct_struct_T(&d_2_176);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_176params_init(void)
{
  emxInitStruct_struct_T(&d_2_176);
  d_2_176_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_18params_free(void)
{
  emxFreeStruct_struct_T(&d_2_18);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_18params_init(void)
{
  emxInitStruct_struct_T(&d_2_18);
  d_2_18_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_192params_free(void)
{
  emxFreeStruct_struct_T(&d_2_192);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_192params_init(void)
{
  emxInitStruct_struct_T(&d_2_192);
  d_2_192_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_208params_free(void)
{
  emxFreeStruct_struct_T(&d_2_208);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_208params_init(void)
{
  emxInitStruct_struct_T(&d_2_208);
  d_2_208_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_20params_free(void)
{
  emxFreeStruct_struct_T(&d_2_20);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_20params_init(void)
{
  emxInitStruct_struct_T(&d_2_20);
  d_2_20_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_224params_free(void)
{
  emxFreeStruct_struct_T(&d_2_224);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_224params_init(void)
{
  emxInitStruct_struct_T(&d_2_224);
  d_2_224_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_22params_free(void)
{
  emxFreeStruct_struct_T(&d_2_22);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_22params_init(void)
{
  emxInitStruct_struct_T(&d_2_22);
  d_2_22_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_240params_free(void)
{
  emxFreeStruct_struct_T(&d_2_240);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_240params_init(void)
{
  emxInitStruct_struct_T(&d_2_240);
  d_2_240_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_24params_free(void)
{
  emxFreeStruct_struct_T(&d_2_24);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_24params_init(void)
{
  emxInitStruct_struct_T(&d_2_24);
  d_2_24_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_256params_free(void)
{
  emxFreeStruct_struct_T(&d_2_256);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_256params_init(void)
{
  emxInitStruct_struct_T(&d_2_256);
  d_2_256_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_26params_free(void)
{
  emxFreeStruct_struct_T(&d_2_26);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_26params_init(void)
{
  emxInitStruct_struct_T(&d_2_26);
  d_2_26_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_288params_free(void)
{
  emxFreeStruct_struct_T(&d_2_288);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_288params_init(void)
{
  emxInitStruct_struct_T(&d_2_288);
  d_2_288_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_28params_free(void)
{
  emxFreeStruct_struct_T(&d_2_28);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_28params_init(void)
{
  emxInitStruct_struct_T(&d_2_28);
  d_2_28_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_2params_free(void)
{
  emxFreeStruct_struct_T(&d_2_2);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_2params_init(void)
{
  emxInitStruct_struct_T(&d_2_2);
  d_2_2_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_30params_free(void)
{
  emxFreeStruct_struct_T(&d_2_30);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_30params_init(void)
{
  emxInitStruct_struct_T(&d_2_30);
  d_2_30_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_320params_free(void)
{
  emxFreeStruct_struct_T(&d_2_320);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_320params_init(void)
{
  emxInitStruct_struct_T(&d_2_320);
  d_2_320_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_32params_free(void)
{
  emxFreeStruct_struct_T(&d_2_32);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_32params_init(void)
{
  emxInitStruct_struct_T(&d_2_32);
  d_2_32_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_352params_free(void)
{
  emxFreeStruct_struct_T(&d_2_352);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_352params_init(void)
{
  emxInitStruct_struct_T(&d_2_352);
  d_2_352_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_36params_free(void)
{
  emxFreeStruct_struct_T(&d_2_36);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_36params_init(void)
{
  emxInitStruct_struct_T(&d_2_36);
  d_2_36_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_384params_free(void)
{
  emxFreeStruct_struct_T(&d_2_384);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_384params_init(void)
{
  emxInitStruct_struct_T(&d_2_384);
  d_2_384_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_3params_free(void)
{
  emxFreeStruct_struct_T(&d_2_3);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_3params_init(void)
{
  emxInitStruct_struct_T(&d_2_3);
  d_2_3_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_40params_free(void)
{
  emxFreeStruct_struct_T(&d_2_40);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_40params_init(void)
{
  emxInitStruct_struct_T(&d_2_40);
  d_2_40_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_44params_free(void)
{
  emxFreeStruct_struct_T(&d_2_44);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_44params_init(void)
{
  emxInitStruct_struct_T(&d_2_44);
  d_2_44_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_48params_free(void)
{
  emxFreeStruct_struct_T(&d_2_48);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_48params_init(void)
{
  emxInitStruct_struct_T(&d_2_48);
  d_2_48_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_4params_free(void)
{
  emxFreeStruct_struct_T(&d_2_4);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_4params_init(void)
{
  emxInitStruct_struct_T(&d_2_4);
  d_2_4_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_52params_free(void)
{
  emxFreeStruct_struct_T(&d_2_52);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_52params_init(void)
{
  emxInitStruct_struct_T(&d_2_52);
  d_2_52_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_56params_free(void)
{
  emxFreeStruct_struct_T(&d_2_56);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_56params_init(void)
{
  emxInitStruct_struct_T(&d_2_56);
  d_2_56_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_5params_free(void)
{
  emxFreeStruct_struct_T(&d_2_5);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_5params_init(void)
{
  emxInitStruct_struct_T(&d_2_5);
  d_2_5_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_60params_free(void)
{
  emxFreeStruct_struct_T(&d_2_60);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_60params_init(void)
{
  emxInitStruct_struct_T(&d_2_60);
  d_2_60_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_64params_free(void)
{
  emxFreeStruct_struct_T(&d_2_64);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_64params_init(void)
{
  emxInitStruct_struct_T(&d_2_64);
  d_2_64_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_6params_free(void)
{
  emxFreeStruct_struct_T(&d_2_6);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_6params_init(void)
{
  emxInitStruct_struct_T(&d_2_6);
  d_2_6_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_72params_free(void)
{
  emxFreeStruct_struct_T(&d_2_72);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_72params_init(void)
{
  emxInitStruct_struct_T(&d_2_72);
  d_2_72_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_7params_free(void)
{
  emxFreeStruct_struct_T(&d_2_7);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_7params_init(void)
{
  emxInitStruct_struct_T(&d_2_7);
  d_2_7_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_80params_free(void)
{
  emxFreeStruct_struct_T(&d_2_80);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_80params_init(void)
{
  emxInitStruct_struct_T(&d_2_80);
  d_2_80_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_88params_free(void)
{
  emxFreeStruct_struct_T(&d_2_88);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_88params_init(void)
{
  emxInitStruct_struct_T(&d_2_88);
  d_2_88_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_8params_free(void)
{
  emxFreeStruct_struct_T(&d_2_8);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_8params_init(void)
{
  emxInitStruct_struct_T(&d_2_8);
  d_2_8_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_96params_free(void)
{
  emxFreeStruct_struct_T(&d_2_96);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_96params_init(void)
{
  emxInitStruct_struct_T(&d_2_96);
  d_2_96_not_empty = false;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_9params_free(void)
{
  emxFreeStruct_struct_T(&d_2_9);
}

/*
 * Arguments    : void
 * Return Type  : void
 */
void d_2_9params_init(void)
{
  emxInitStruct_struct_T(&d_2_9);
  d_2_9_not_empty = false;
}

/*
 * Arguments    : double bgn
 *                double Zc
 *                double *infoLen
 *                emxArray_int32_T *offsetWeight
 *                emxArray_int32_T *columnIndexMap
 * Return Type  : void
 */
void getParams(double bgn, double Zc, double *infoLen, emxArray_int32_T
               *offsetWeight, emxArray_int32_T *columnIndexMap)
{
  emxArray_int32_T *b_offsetWeight;
  emxArray_int8_T *r;
  int i;
  int loop_ub;
  if (bgn == 1.0) {
    emxInit_int8_T(&r, 2);
    switch ((int)Zc) {
     case 2:
      d_1_2params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 4:
      d_1_4params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 8:
      d_1_8params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 16:
      d_1_16params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 32:
      d_1_32params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 64:
      d_1_64params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 128:
      *infoLen = 22.0 * Zc;
      if (!d_1_128_not_empty) {
        parityCheckMatrix(Zc, r);
        init(r, d_1_128.offsetWeight, d_1_128.columnIndexMap);
        d_1_128_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_128.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_128.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_128.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_128.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_128.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_128.columnIndexMap->data[i];
      }
      break;

     case 256:
      d_1_256params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 3:
      d_1_3params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 6:
      d_1_6params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 12:
      *infoLen = 22.0 * Zc;
      if (!d_1_12_not_empty) {
        b_parityCheckMatrix(Zc, r);
        init(r, d_1_12.offsetWeight, d_1_12.columnIndexMap);
        d_1_12_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_12.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_12.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_12.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_12.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_12.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_12.columnIndexMap->data[i];
      }
      break;

     case 24:
      d_1_24params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 48:
      d_1_48params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 96:
      d_1_96params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 192:
      d_1_192params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 384:
      d_1_384params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 5:
      d_1_5params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 10:
      *infoLen = 22.0 * Zc;
      if (!d_1_10_not_empty) {
        c_parityCheckMatrix(Zc, r);
        init(r, d_1_10.offsetWeight, d_1_10.columnIndexMap);
        d_1_10_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_10.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_10.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_10.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_10.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_10.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_10.columnIndexMap->data[i];
      }
      break;

     case 20:
      d_1_20params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 40:
      d_1_40params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 80:
      d_1_80params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 160:
      d_1_160params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 320:
      d_1_320params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 7:
      d_1_7params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 14:
      *infoLen = 22.0 * Zc;
      if (!d_1_14_not_empty) {
        d_parityCheckMatrix(Zc, r);
        init(r, d_1_14.offsetWeight, d_1_14.columnIndexMap);
        d_1_14_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_14.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_14.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_14.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_14.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_14.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_14.columnIndexMap->data[i];
      }
      break;

     case 28:
      d_1_28params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 56:
      d_1_56params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 112:
      *infoLen = 22.0 * Zc;
      if (!d_1_112_not_empty) {
        d_parityCheckMatrix(Zc, r);
        init(r, d_1_112.offsetWeight, d_1_112.columnIndexMap);
        d_1_112_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_112.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_112.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_112.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_112.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_112.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_112.columnIndexMap->data[i];
      }
      break;

     case 224:
      d_1_224params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 9:
      d_1_9params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 18:
      d_1_18params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 36:
      d_1_36params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 72:
      d_1_72params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 144:
      *infoLen = 22.0 * Zc;
      if (!d_1_144_not_empty) {
        e_parityCheckMatrix(Zc, r);
        init(r, d_1_144.offsetWeight, d_1_144.columnIndexMap);
        d_1_144_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_144.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_144.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_144.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_144.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_144.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_144.columnIndexMap->data[i];
      }
      break;

     case 288:
      d_1_288params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 11:
      *infoLen = 22.0 * Zc;
      if (!d_1_11_not_empty) {
        f_parityCheckMatrix(Zc, r);
        init(r, d_1_11.offsetWeight, d_1_11.columnIndexMap);
        d_1_11_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_11.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_11.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_11.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_11.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_11.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_11.columnIndexMap->data[i];
      }
      break;

     case 22:
      d_1_22params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 44:
      d_1_44params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 88:
      d_1_88params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 176:
      d_1_176params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 352:
      d_1_352params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 13:
      *infoLen = 22.0 * Zc;
      if (!d_1_13_not_empty) {
        g_parityCheckMatrix(Zc, r);
        init(r, d_1_13.offsetWeight, d_1_13.columnIndexMap);
        d_1_13_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_13.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_13.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_13.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_13.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_13.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_13.columnIndexMap->data[i];
      }
      break;

     case 26:
      d_1_26params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 52:
      d_1_52params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 104:
      *infoLen = 22.0 * Zc;
      if (!d_1_104_not_empty) {
        g_parityCheckMatrix(Zc, r);
        init(r, d_1_104.offsetWeight, d_1_104.columnIndexMap);
        d_1_104_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_104.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_104.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_104.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_104.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_104.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_104.columnIndexMap->data[i];
      }
      break;

     case 208:
      d_1_208params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 15:
      *infoLen = 22.0 * Zc;
      if (!d_1_15_not_empty) {
        h_parityCheckMatrix(Zc, r);
        init(r, d_1_15.offsetWeight, d_1_15.columnIndexMap);
        d_1_15_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_15.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_15.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_15.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_15.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_15.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_15.columnIndexMap->data[i];
      }
      break;

     case 30:
      d_1_30params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 60:
      d_1_60params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;

     case 120:
      *infoLen = 22.0 * Zc;
      if (!d_1_120_not_empty) {
        h_parityCheckMatrix(Zc, r);
        init(r, d_1_120.offsetWeight, d_1_120.columnIndexMap);
        d_1_120_not_empty = true;
      }

      i = offsetWeight->size[0];
      offsetWeight->size[0] = d_1_120.offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = d_1_120.offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = d_1_120.offsetWeight->data[i];
      }

      i = columnIndexMap->size[0];
      columnIndexMap->size[0] = d_1_120.columnIndexMap->size[0];
      emxEnsureCapacity_int32_T(columnIndexMap, i);
      loop_ub = d_1_120.columnIndexMap->size[0];
      for (i = 0; i < loop_ub; i++) {
        columnIndexMap->data[i] = d_1_120.columnIndexMap->data[i];
      }
      break;

     default:
      d_1_240params(Zc, infoLen, offsetWeight, columnIndexMap);
      break;
    }

    emxFree_int8_T(&r);
  } else {
    emxInit_int32_T(&b_offsetWeight, 1);
    switch ((int)Zc) {
     case 2:
      d_2_2params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 4:
      d_2_4params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 8:
      d_2_8params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 16:
      d_2_16params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 32:
      d_2_32params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 64:
      d_2_64params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 128:
      d_2_128params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 256:
      d_2_256params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 3:
      d_2_3params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 6:
      d_2_6params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 12:
      d_2_12params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 24:
      d_2_24params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 48:
      d_2_48params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 96:
      d_2_96params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 192:
      d_2_192params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 384:
      d_2_384params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 5:
      d_2_5params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 10:
      d_2_10params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 20:
      d_2_20params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 40:
      d_2_40params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 80:
      d_2_80params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 160:
      d_2_160params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 320:
      d_2_320params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 7:
      d_2_7params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 14:
      d_2_14params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 28:
      d_2_28params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 56:
      d_2_56params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 112:
      d_2_112params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 224:
      d_2_224params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 9:
      d_2_9params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 18:
      d_2_18params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 36:
      d_2_36params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 72:
      d_2_72params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 144:
      d_2_144params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 288:
      d_2_288params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 11:
      d_2_11params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 22:
      d_2_22params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 44:
      d_2_44params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 88:
      d_2_88params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 176:
      d_2_176params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 352:
      d_2_352params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 13:
      d_2_13params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 26:
      d_2_26params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 52:
      d_2_52params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 104:
      d_2_104params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 208:
      d_2_208params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 15:
      d_2_15params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 30:
      d_2_30params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 60:
      d_2_60params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     case 120:
      d_2_120params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;

     default:
      d_2_240params(Zc, infoLen, b_offsetWeight, columnIndexMap);
      i = offsetWeight->size[0];
      offsetWeight->size[0] = b_offsetWeight->size[0];
      emxEnsureCapacity_int32_T(offsetWeight, i);
      loop_ub = b_offsetWeight->size[0];
      for (i = 0; i < loop_ub; i++) {
        offsetWeight->data[i] = b_offsetWeight->data[i];
      }
      break;
    }

    emxFree_int32_T(&b_offsetWeight);
  }
}

/*
 * File trailer for getParams.c
 *
 * [EOF]
 */
