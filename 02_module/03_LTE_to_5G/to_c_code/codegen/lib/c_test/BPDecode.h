/*
 * File: BPDecode.h
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

#ifndef BPDECODE_H
#define BPDECODE_H

/* Include Files */
#include "c_test_types.h"
#include "rtwtypes.h"
#include <stddef.h>
#include <stdlib.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Function Declarations */
double BPDecodeImpl(const emxArray_real_T *Lc, double blockLen,
                    double parityLen, const emxArray_int32_T *rowOffset,
                    const emxArray_int32_T *rowWeight,
                    const emxArray_int32_T *columnOffset,
                    const emxArray_int32_T *columnWeight,
                    const emxArray_int32_T *columnIndex,
                    const emxArray_int32_T *indexMap, emxArray_real_T *Lq,
                    emxArray_real_T *Lr, emxArray_real_T *LQ,
                    emxArray_real_T *finalParityChecks);

#ifdef __cplusplus
}
#endif

#endif
/*
 * File trailer for BPDecode.h
 *
 * [EOF]
 */
