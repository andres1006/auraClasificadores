/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Clasificador_Parkinsionismos_vs_control.c
 *
 * Code generation for function 'Clasificador_Parkinsionismos_vs_control'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Clasificador_Parkinsionismos_vs_control.h"
#include "CompactClassificationTree.h"

/* Function Definitions */
void Clasificador_Parkinsionismos_vs_control(const emxArray_real_T *x,
  emxArray_real_T *label)
{
  int i;
  double Mdl_ClassNames[2];
  double Mdl_CutPoint[3];
  static const double dv0[3] = { 8.5, 0.0, 0.0 };

  double Mdl_Children[6];
  static const signed char iv0[6] = { 2, 3, 0, 0, 0, 0 };

  double Mdl_ClassProb[6];
  static const double dv1[6] = { 0.54838709677419351, 0.0, 0.94444444444444442,
    0.45161290322580649, 1.0, 0.05555555555555558 };

  signed char I[4];
  double Mdl_Cost[4];

  /* PREDICTLABELSSVM Label new observations using trained SVM model Mdl */
  /*    predictLabelsSVM predicts the vector of labels label using  */
  /*    the saved SVM model Mdl and the predictor data x. */
  for (i = 0; i < 2; i++) {
    Mdl_ClassNames[i] = 1.0 + 9.0 * (double)i;
  }

  for (i = 0; i < 3; i++) {
    Mdl_CutPoint[i] = dv0[i];
  }

  for (i = 0; i < 6; i++) {
    Mdl_Children[i] = iv0[i];
    Mdl_ClassProb[i] = dv1[i];
  }

  for (i = 0; i < 2; i++) {
    Mdl_CutPoint[i + 1] = rtNaN;
  }

  for (i = 0; i < 4; i++) {
    I[i] = 0;
  }

  for (i = 0; i < 2; i++) {
    I[i + (i << 1)] = 1;
  }

  for (i = 0; i < 4; i++) {
    Mdl_Cost[i] = 1.0 - (double)I[i];
  }

  c_CompactClassificationTree_pre(Mdl_Children, Mdl_ClassProb, Mdl_CutPoint,
    Mdl_ClassNames, Mdl_Cost, x, label);
}

/* End of code generation (Clasificador_Parkinsionismos_vs_control.c) */
