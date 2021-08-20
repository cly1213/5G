/*
 * File: getSCHInfo.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

#ifndef GETSCHINFO_H
#define GETSCHINFO_H

/* Include Files */
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void getSCHInfo(double tbs, double tcr, char info_CRC_data[],
                int info_CRC_size[2], double *info_L, double *info_BGN,
                double *info_C, double *info_Lcb, double *info_F,
                double *info_Zc, double *info_K, double *info_N);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for getSCHInfo.h
 *
 * [EOF]
 */
