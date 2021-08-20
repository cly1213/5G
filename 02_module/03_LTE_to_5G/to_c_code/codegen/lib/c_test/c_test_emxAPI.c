/*
 * File: c_test_emxAPI.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/* Include Files */
#include "c_test_emxAPI.h"
#include "c_test_emxutil.h"
#include "c_test_types.h"
#include "rt_nonfinite.h"
#include <stdlib.h>

/* Function Definitions */
/*
 * Arguments    : int numDimensions
 *                const int *size
 * Return Type  : emxArray_int8_T *
 */
emxArray_int8_T *emxCreateND_int8_T(int numDimensions, const int *size)
{
  emxArray_int8_T *emx;
  int i;
  int numEl;
  emxInit_int8_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = (signed char *)calloc((unsigned int)numEl, sizeof(signed char));
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : signed char *data
 *                int numDimensions
 *                const int *size
 * Return Type  : emxArray_int8_T *
 */
emxArray_int8_T *emxCreateWrapperND_int8_T(signed char *data, int numDimensions,
                                           const int *size)
{
  emxArray_int8_T *emx;
  int i;
  int numEl;
  emxInit_int8_T(&emx, numDimensions);
  numEl = 1;
  for (i = 0; i < numDimensions; i++) {
    numEl *= size[i];
    emx->size[i] = size[i];
  }
  emx->data = data;
  emx->numDimensions = numDimensions;
  emx->allocatedSize = numEl;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : signed char *data
 *                int rows
 *                int cols
 * Return Type  : emxArray_int8_T *
 */
emxArray_int8_T *emxCreateWrapper_int8_T(signed char *data, int rows, int cols)
{
  emxArray_int8_T *emx;
  emxInit_int8_T(&emx, 2);
  emx->size[0] = rows;
  emx->size[1] = cols;
  emx->data = data;
  emx->numDimensions = 2;
  emx->allocatedSize = rows * cols;
  emx->canFreeData = false;
  return emx;
}

/*
 * Arguments    : int rows
 *                int cols
 * Return Type  : emxArray_int8_T *
 */
emxArray_int8_T *emxCreate_int8_T(int rows, int cols)
{
  emxArray_int8_T *emx;
  int numEl;
  emxInit_int8_T(&emx, 2);
  emx->size[0] = rows;
  numEl = rows * cols;
  emx->size[1] = cols;
  emx->data = (signed char *)calloc((unsigned int)numEl, sizeof(signed char));
  emx->numDimensions = 2;
  emx->allocatedSize = numEl;
  return emx;
}

/*
 * Arguments    : emxArray_int8_T *emxArray
 * Return Type  : void
 */
void emxDestroyArray_int8_T(emxArray_int8_T *emxArray)
{
  emxFree_int8_T(&emxArray);
}

/*
 * Arguments    : emxArray_int8_T **pEmxArray
 *                int numDimensions
 * Return Type  : void
 */
void emxInitArray_int8_T(emxArray_int8_T **pEmxArray, int numDimensions)
{
  emxInit_int8_T(pEmxArray, numDimensions);
}

/*
 * File trailer for c_test_emxAPI.c
 *
 * [EOF]
 */
