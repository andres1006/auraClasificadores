/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Clasificador_DFT_vs_control_emxutil.h
 *
 * Code generation for function 'Clasificador_DFT_vs_control_emxutil'
 *
 */

#ifndef CLASIFICADOR_DFT_VS_CONTROL_EMXUTIL_H
#define CLASIFICADOR_DFT_VS_CONTROL_EMXUTIL_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Clasificador_DFT_vs_control_types.h"

/* Function Declarations */
extern void emxEnsureCapacity_boolean_T(emxArray_boolean_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_boolean_T1(emxArray_boolean_T *emxArray, int
  oldNumel);
extern void emxEnsureCapacity_real_T(emxArray_real_T *emxArray, int oldNumel);
extern void emxEnsureCapacity_real_T1(emxArray_real_T *emxArray, int oldNumel);
extern void emxFree_boolean_T(emxArray_boolean_T **pEmxArray);
extern void emxFree_real_T(emxArray_real_T **pEmxArray);
extern void emxInit_boolean_T(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void emxInit_boolean_T1(emxArray_boolean_T **pEmxArray, int numDimensions);
extern void emxInit_real_T(emxArray_real_T **pEmxArray, int numDimensions);
extern void emxInit_real_T1(emxArray_real_T **pEmxArray, int numDimensions);

#endif

/* End of code generation (Clasificador_DFT_vs_control_emxutil.h) */
