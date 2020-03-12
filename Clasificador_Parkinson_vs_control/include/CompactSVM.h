/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactSVM.h
 *
 * Code generation for function 'CompactSVM'
 *
 */

#ifndef COMPACTSVM_H
#define COMPACTSVM_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Clasificador_Parkinson_vs_control_types.h"

/* Function Declarations */
extern void CompactSVM_normalize(const double obj_Mu[2], const double obj_Sigma
  [2], emxArray_real_T *X);

#endif

/* End of code generation (CompactSVM.h) */
