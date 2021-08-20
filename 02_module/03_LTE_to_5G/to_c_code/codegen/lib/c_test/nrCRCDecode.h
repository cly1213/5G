/*
 * File: nrCRCDecode.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

#ifndef NRCRCDECODE_H
#define NRCRCDECODE_H

/* Include Files */
#include "c_test_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
void b_nrCRCDecode(const emxArray_int8_T *blkcrc, const char poly_data[],
                   const int poly_size[2], emxArray_int8_T *blk,
                   unsigned int err_data[], int *err_size);

void nrCRCDecode(const emxArray_int8_T *blkcrc, emxArray_int8_T *blk,
                 emxArray_uint32_T *err);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for nrCRCDecode.h
 *
 * [EOF]
 */
