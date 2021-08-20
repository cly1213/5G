/*
 * File: getSCHInfo.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "getSCHInfo.h"
#include "getCBSInfo.h"
#include "rt_nonfinite.h"

/* Function Definitions */
/*
 * Arguments    : double tbs
 *                double tcr
 *                char info_CRC_data[]
 *                int info_CRC_size[2]
 *                double *info_L
 *                double *info_BGN
 *                double *info_C
 *                double *info_Lcb
 *                double *info_F
 *                double *info_Zc
 *                double *info_K
 *                double *info_N
 * Return Type  : void
 */
void getSCHInfo(double tbs, double tcr, char info_CRC_data[],
                int info_CRC_size[2], double *info_L, double *info_BGN,
                double *info_C, double *info_Lcb, double *info_F,
                double *info_Zc, double *info_K, double *info_N)
{
  double b_expl_temp[51];
  double expl_temp;
  int L;
  int bgInfo_BGN;
  if ((tbs <= 292.0) || ((tbs <= 3824.0) && (tcr <= 0.67)) || (tcr <= 0.25)) {
    bgInfo_BGN = 2;
  } else {
    bgInfo_BGN = 1;
  }
  if (tbs > 3824.0) {
    L = 24;
    info_CRC_size[0] = 1;
    info_CRC_size[1] = 3;
    info_CRC_data[0] = '2';
    info_CRC_data[1] = '4';
    info_CRC_data[2] = 'A';
  } else {
    L = 16;
    info_CRC_size[0] = 1;
    info_CRC_size[1] = 2;
    info_CRC_data[0] = '1';
    info_CRC_data[1] = '6';
  }
  getCBSInfo(tbs + (double)L, bgInfo_BGN, info_C, &expl_temp, info_Lcb, info_F,
             info_K, info_Zc, b_expl_temp);
  if (bgInfo_BGN == 1) {
    *info_N = 66.0 * *info_Zc;
  } else {
    *info_N = 50.0 * *info_Zc;
  }
  *info_L = L;
  *info_BGN = bgInfo_BGN;
  if (!(tbs != 0.0)) {
    *info_L = 0.0;
    *info_F = 0.0;
    *info_Zc = 2.0;
    *info_K = 0.0;
    *info_N = 0.0;
  }
}

/*
 * File trailer for getSCHInfo.c
 *
 * [EOF]
 */
