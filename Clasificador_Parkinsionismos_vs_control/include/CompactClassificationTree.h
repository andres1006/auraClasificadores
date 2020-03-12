/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationTree.h
 *
 * Code generation for function 'CompactClassificationTree'
 *
 */

#ifndef COMPACTCLASSIFICATIONTREE_H
#define COMPACTCLASSIFICATIONTREE_H

/* Include files */
#include <stddef.h>
#include <stdlib.h>
#include "rtwtypes.h"
#include "Clasificador_Parkinsionismos_vs_control_types.h"

/* Function Declarations */
extern void c_CompactClassificationTree_pre(const double obj_Children[6], const
  double obj_ClassProb[6], const double obj_CutPoint[3], const double
  obj_ClassNames[2], const double obj_Cost[4], const emxArray_real_T *X,
  emxArray_real_T *labels);

#endif

/* End of code generation (CompactClassificationTree.h) */
