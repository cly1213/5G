/*
 * File: nrCRCEncode.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

#ifndef NRCRCENCODE_H
#define NRCRCENCODE_H

/* Include Files */
#include "c_test_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void nrCRCEncode(const emxArray_int8_T *blk, const char poly_data[],
                 const int poly_size[2], emxArray_int8_T *blkcrc);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for nrCRCEncode.h
 *
 * [EOF]
 */
