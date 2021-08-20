/*
 * File: getCBSInfo.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "getCBSInfo.h"
#include "rt_nonfinite.h"
#include <math.h>

/* Function Definitions */
/*
 * Arguments    : double B
 *                double bgn
 *                double *info_C
 *                double *info_CBZ
 *                double *info_Lcb
 *                double *info_F
 *                double *info_K
 *                double *info_Zc
 *                double info_Z[51]
 * Return Type  : void
 */
void getCBSInfo(double B, double bgn, double *info_C, double *info_CBZ,
                double *info_Lcb, double *info_F, double *info_K,
                double *info_Zc, double info_Z[51])
{
  static const short b_b[51] = {
      2,   3,   4,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,
      15,  16,  18,  20,  22,  24,  26,  28,  30,  32,  36,  40,  44,
      48,  52,  56,  60,  64,  72,  80,  88,  96,  104, 112, 120, 128,
      144, 160, 176, 192, 208, 224, 240, 256, 288, 320, 352, 384};
  static const short b_iv[51] = {
      2,   3,   4,   5,   6,   7,   8,   9,   10,  11,  12,  13,  14,
      15,  16,  18,  20,  22,  24,  26,  28,  30,  32,  36,  40,  44,
      48,  52,  56,  60,  64,  72,  80,  88,  96,  104, 112, 120, 128,
      144, 160, 176, 192, 208, 224, 240, 256, 288, 320, 352, 384};
  double Bd;
  int Kcb;
  int Zc;
  int i;
  int trueCount;
  short varargin_1_data[51];
  short b_i;
  signed char tmp_data[51];
  boolean_T b;
  if (bgn == 1.0) {
    Kcb = 8448;
  } else {
    Kcb = 3840;
  }
  if (B <= Kcb) {
    *info_Lcb = 0.0;
    *info_C = 1.0;
    Bd = B;
  } else {
    *info_Lcb = 24.0;
    *info_C = ceil(B / ((double)Kcb - 24.0));
    Bd = B + *info_C * 24.0;
  }
  *info_CBZ = ceil(B / *info_C);
  Bd = ceil(Bd / *info_C);
  if (bgn == 1.0) {
    Kcb = 22;
  } else if (B > 640.0) {
    Kcb = 10;
  } else if (B > 560.0) {
    Kcb = 9;
  } else if (B > 192.0) {
    Kcb = 8;
  } else {
    Kcb = 6;
  }
  trueCount = 0;
  Zc = 0;
  for (i = 0; i < 51; i++) {
    b = (Kcb * b_b[i] >= Bd);
    if (b) {
      trueCount++;
      tmp_data[Zc] = (signed char)(i + 1);
      Zc++;
    }
  }
  for (Kcb = 0; Kcb < trueCount; Kcb++) {
    varargin_1_data[Kcb] = b_iv[tmp_data[Kcb] - 1];
  }
  if (trueCount <= 2) {
    if (trueCount == 1) {
      Zc = varargin_1_data[0];
    } else {
      Zc = varargin_1_data[trueCount - 1];
      if (varargin_1_data[0] <= Zc) {
        Zc = varargin_1_data[0];
      }
    }
  } else {
    Zc = varargin_1_data[0];
    for (Kcb = 2; Kcb <= trueCount; Kcb++) {
      b_i = varargin_1_data[Kcb - 1];
      if (Zc > b_i) {
        Zc = b_i;
      }
    }
  }
  if (bgn == 1.0) {
    Kcb = 22 * Zc;
  } else {
    Kcb = 10 * Zc;
  }
  *info_F = (double)Kcb - Bd;
  *info_K = Kcb;
  *info_Zc = Zc;
  for (Kcb = 0; Kcb < 51; Kcb++) {
    info_Z[Kcb] = b_b[Kcb];
  }
}

/*
 * File trailer for getCBSInfo.c
 *
 * [EOF]
 */
