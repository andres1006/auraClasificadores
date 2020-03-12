/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationSVM.c
 *
 * Code generation for function 'CompactClassificationSVM'
 *
 */

/* Include files */
#include <math.h>
#include "rt_nonfinite.h"
#include "Clasificador_DFT_vs_control.h"
#include "CompactClassificationSVM.h"
#include "Clasificador_DFT_vs_control_emxutil.h"
#include "Poly.h"

/* Function Definitions */
void CompactClassificationSVM_score(const double obj_Alpha[10], const double
  obj_ClassNames[2], const double obj_NonzeroProbClasses[2], const
  emxArray_real_T *X, emxArray_real_T *S)
{
  emxArray_real_T *b_X;
  int csz[2];
  int k;
  int szc;
  int acoef;
  emxArray_real_T *c;
  emxArray_real_T *c_X;
  emxArray_real_T *innerProduct;
  static const double dv1[10] = { 0.60540540540540422, 0.60540540540540422,
    0.60540540540540422, 0.40540540540540421, 0.40540540540540421,
    0.2054054054054042, 0.40540540540540421, 0.60540540540540422,
    -0.1945945945945958, 0.2054054054054042 };

  int m;
  emxArray_real_T *a;
  boolean_T exitg1;
  boolean_T rowmatch;
  double absxk;
  int exponent;
  emxInit_real_T1(&b_X, 1);
  csz[0] = X->size[0];
  k = b_X->size[0];
  b_X->size[0] = csz[0];
  emxEnsureCapacity_real_T(b_X, k);
  szc = b_X->size[0];
  acoef = (X->size[0] != 1);
  for (k = 0; k < szc; k++) {
    b_X->data[k] = X->data[acoef * k] - 4.972972972972979;
  }

  emxInit_real_T(&c, 2);
  k = b_X->size[0];
  acoef = c->size[0] * c->size[1];
  c->size[0] = k;
  c->size[1] = 1;
  emxEnsureCapacity_real_T1(c, acoef);
  szc = c->size[0];
  k = b_X->size[0];
  acoef = (k != 1);
  for (k = 0; k < szc; k++) {
    c->data[k] = b_X->data[acoef * k] / 3.2616158783857654;
  }

  acoef = c->size[0];
  for (k = 0; k < acoef; k++) {
    b_X->data[k] = c->data[k];
  }

  emxFree_real_T(&c);
  emxInit_real_T1(&c_X, 1);
  k = c_X->size[0];
  c_X->size[0] = b_X->size[0];
  emxEnsureCapacity_real_T(c_X, k);
  acoef = b_X->size[0];
  for (k = 0; k < acoef; k++) {
    c_X->data[k] = b_X->data[k] / 1.5329824805962722;
  }

  emxInit_real_T(&innerProduct, 2);
  Poly(dv1, c_X, innerProduct);
  m = innerProduct->size[0];
  k = b_X->size[0];
  b_X->size[0] = innerProduct->size[0];
  emxEnsureCapacity_real_T(b_X, k);
  acoef = 1;
  emxFree_real_T(&c_X);
  while (acoef <= m) {
    b_X->data[acoef - 1] = 0.0;
    acoef++;
  }

  for (k = 0; k < 10; k++) {
    if (obj_Alpha[k] != 0.0) {
      szc = k * m;
      for (acoef = 0; acoef < m; acoef++) {
        b_X->data[acoef] += obj_Alpha[k] * innerProduct->data[szc + acoef];
      }
    }
  }

  emxFree_real_T(&innerProduct);
  k = b_X->size[0];
  emxEnsureCapacity_real_T(b_X, k);
  acoef = b_X->size[0];
  for (k = 0; k < acoef; k++) {
    b_X->data[k] += 0.6876304400098997;
  }

  emxInit_real_T1(&a, 1);
  k = a->size[0];
  a->size[0] = b_X->size[0];
  emxEnsureCapacity_real_T(a, k);
  acoef = b_X->size[0];
  for (k = 0; k < acoef; k++) {
    a->data[k] = -b_X->data[k];
  }

  acoef = a->size[0];
  k = S->size[0] * S->size[1];
  S->size[0] = acoef;
  S->size[1] = 2;
  emxEnsureCapacity_real_T1(S, k);
  acoef = a->size[0];
  for (szc = 0; szc < 2; szc++) {
    m = szc * acoef;
    for (k = 1; k <= acoef; k++) {
      S->data[(m + k) - 1] = a->data[k - 1];
    }
  }

  emxFree_real_T(&a);
  for (k = 0; k < 2; k++) {
    csz[k] = 0;
    acoef = 1;
    exitg1 = false;
    while ((!exitg1) && (acoef < 3)) {
      rowmatch = true;
      absxk = fabs(obj_ClassNames[acoef - 1] / 2.0);
      if (absxk <= 2.2250738585072014E-308) {
        absxk = 4.94065645841247E-324;
      } else {
        frexp(absxk, &exponent);
        absxk = ldexp(1.0, exponent - 53);
      }

      if (!(fabs(obj_ClassNames[acoef - 1] - obj_NonzeroProbClasses[k]) < absxk))
      {
        rowmatch = false;
      }

      if (rowmatch) {
        csz[k] = acoef;
        exitg1 = true;
      } else {
        acoef++;
      }
    }
  }

  acoef = b_X->size[0];
  for (k = 0; k < acoef; k++) {
    S->data[k + S->size[0] * (csz[1] - 1)] = b_X->data[k];
  }

  emxFree_real_T(&b_X);
}

/* End of code generation (CompactClassificationSVM.c) */
