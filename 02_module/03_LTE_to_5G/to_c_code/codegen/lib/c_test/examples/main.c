/*
 * File: main.c
 *
 * MATLAB Coder version            : 5.2
 * C/C++ source code generated on  : 25-May-2021 16:21:40
 */

/*************************************************************************/
/* This automatically generated example C main file shows how to call    */
/* entry-point functions that MATLAB Coder generated. You must customize */
/* this file for your application. Do not modify this file directly.     */
/* Instead, make a copy of this file, modify it, and integrate it into   */
/* your development environment.                                         */
/*                                                                       */
/* This file initializes entry-point function arguments to a default     */
/* size and value before calling the entry-point functions. It does      */
/* not store or use any values returned from the entry-point functions.  */
/* If necessary, it does pre-allocate memory for returned values.        */
/* You can use this file as a starting point for a main function that    */
/* you can deploy in your application.                                   */
/*                                                                       */
/* After you copy the file, and before you deploy it, you must make the  */
/* following changes:                                                    */
/* * For variable-size function arguments, change the example sizes to   */
/* the sizes that your application requires.                             */
/* * Change the example values of function arguments to the values that  */
/* your application requires.                                            */
/* * If the entry-point functions return values, store these values or   */
/* otherwise use them as required by your application.                   */
/*                                                                       */
/*************************************************************************/

/* Include Files */
#include "main.h"
#include "c_test.h"
#include "c_test_emxAPI.h"
#include "c_test_terminate.h"
#include "c_test_types.h"
#include "rt_nonfinite.h"

/* Function Declarations */
static emxArray_int8_T *argInit_Unboundedx1_int8_T(void);

static signed char argInit_int8_T(void);

static double argInit_real_T(void);

static void main_c_test(void);

/* Function Definitions */
/*
 * Arguments    : void
 * Return Type  : emxArray_int8_T *
 */
static emxArray_int8_T *argInit_Unboundedx1_int8_T(void)
{
  emxArray_int8_T *result;
  const int i = 2;
  int idx0;
  /* Set the size of the array.
Change this size to the value that the application requires. */
  result = emxCreateND_int8_T(1, &i);
  /* Loop over the array to initialize each element. */
  for (idx0 = 0; idx0 < result->size[0U]; idx0++) {
    /* Set the value of the array element.
Change this value to the value that the application requires. */
    result->data[idx0] = argInit_int8_T();
  }
  return result;
}

/*
 * Arguments    : void
 * Return Type  : signed char
 */
static signed char argInit_int8_T(void)
{
  return 0;
}

/*
 * Arguments    : void
 * Return Type  : double
 */
static double argInit_real_T(void)
{
  return 0.0;
}

/*
 * Arguments    : void
 * Return Type  : void
 */
static void main_c_test(void)
{
  emxArray_int8_T *decbits;
  emxArray_int8_T *trBlk;
  emxInitArray_int8_T(&decbits, 2);
  /* Initialize function 'c_test' input arguments. */
  /* Initialize function input argument 'trBlk'. */
  trBlk = argInit_Unboundedx1_int8_T();
  /* Call the entry-point 'c_test'. */
  c_test(trBlk, argInit_real_T(), decbits);
  emxDestroyArray_int8_T(decbits);
  emxDestroyArray_int8_T(trBlk);
}

/*
 * Arguments    : int argc
 *                char **argv
 * Return Type  : int
 */
int main(int argc, char **argv)
{
  (void)argc;
  (void)argv;
  /* The initialize function is being called automatically from your entry-point
   * function. So, a call to initialize is not included here. */
  /* Invoke the entry-point functions.
You can call entry-point functions multiple times. */
  main_c_test();
  /* Terminate the application.
You do not need to do this more than one time. */
  c_test_terminate();
  return 0;
}

/*
 * File trailer for main.c
 *
 * [EOF]
 */
