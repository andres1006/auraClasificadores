/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationSVM.h
 *
 * Code generation for function 'CompactClassificationSVM'
 *
 */

#ifndef COMPACTCLASSIFICATIONSVM_H
#define COMPACTCLASSIFICATIONSVM_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Clasificador_DFT_vs_control_types.h"

/* Function Declarations */
extern void CompactClassificationSVM_score(const double obj_Alpha[10], const
  double obj_ClassNames[2], const double obj_NonzeroProbClasses[2], const
  emxArray_real_T *X, emxArray_real_T *S);

#endif

/* End of code generation (CompactClassificationSVM.h) */
