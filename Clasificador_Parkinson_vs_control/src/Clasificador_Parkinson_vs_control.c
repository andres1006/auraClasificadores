/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Clasificador_Parkinson_vs_control.c
 *
 * Code generation for function 'Clasificador_Parkinson_vs_control'
 *
 */

/* Include files */
#include <math.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "Clasificador_Parkinson_vs_control.h"
#include "Clasificador_Parkinson_vs_control_emxutil.h"
#include "Poly.h"
#include "CompactSVM.h"

/* Function Declarations */
static double rt_roundd_snf(double u);

/* Function Definitions */
static double rt_roundd_snf(double u)
{
  double y;
  if (fabs(u) < 4.503599627370496E+15) {
    if (u >= 0.5) {
      y = floor(u + 0.5);
    } else if (u > -0.5) {
      y = u * 0.0;
    } else {
      y = ceil(u - 0.5);
    }
  } else {
    y = u;
  }

  return y;
}

void Clasificador_Parkinson_vs_control(const emxArray_real_T *x, emxArray_real_T
  *label)
{
  int aoffset;
  double Mdl_Alpha[16];
  static const double dv0[16] = { -1.0, -1.0, -1.0, -1.0, -1.0, -1.0, -1.0,
    -0.20895659730160193, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 1.0, 0.20895659730160193
  };

  double Mdl_Mu[2];
  double Mdl_Sigma[2];
  emxArray_real_T *scores;
  int nrows;
  emxArray_real_T *b_scores;
  emxArray_real_T *f;
  emxArray_real_T *innerProduct;
  int m;
  int i2;
  emxArray_real_T *a;
  int outsize[2];
  boolean_T exitg1;
  emxArray_boolean_T *b;
  boolean_T rowmatch;
  int exponent;
  static const signed char iv0[2] = { 1, 3 };

  emxArray_boolean_T *notNaN;
  unsigned int b_outsize[2];
  int ix;

  /* PREDICTLABELSSVM Label new observations using trained SVM model Mdl */
  /*    predictLabelsSVM predicts the vector of labels label using  */
  /*    the saved SVM model Mdl and the predictor data x. */
  for (aoffset = 0; aoffset < 2; aoffset++) {
    Mdl_Mu[aoffset] = 66.969696999999968 + -3.1060606363636225 * (double)aoffset;
    Mdl_Sigma[aoffset] = 32.1936190238818 + 1.799225340976335 * (double)aoffset;
  }

  memcpy(&Mdl_Alpha[0], &dv0[0], sizeof(double) << 4);
  if (x->size[0] == 0) {
    aoffset = label->size[0];
    label->size[0] = 0;
    emxEnsureCapacity_real_T(label, aoffset);
  } else {
    emxInit_real_T(&scores, 2);
    aoffset = scores->size[0] * scores->size[1];
    scores->size[0] = x->size[0];
    scores->size[1] = 2;
    emxEnsureCapacity_real_T1(scores, aoffset);
    nrows = x->size[0] * x->size[1];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      scores->data[aoffset] = x->data[aoffset];
    }

    emxInit_real_T(&b_scores, 2);
    CompactSVM_normalize(Mdl_Mu, Mdl_Sigma, scores);
    aoffset = b_scores->size[0] * b_scores->size[1];
    b_scores->size[0] = scores->size[0];
    b_scores->size[1] = 2;
    emxEnsureCapacity_real_T1(b_scores, aoffset);
    nrows = scores->size[0] * scores->size[1];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      b_scores->data[aoffset] = scores->data[aoffset] / 1.6113229748947582;
    }

    emxInit_real_T1(&f, 1);
    emxInit_real_T(&innerProduct, 2);
    Poly(b_scores, innerProduct);
    m = innerProduct->size[0];
    aoffset = f->size[0];
    f->size[0] = innerProduct->size[0];
    emxEnsureCapacity_real_T(f, aoffset);
    nrows = 1;
    emxFree_real_T(&b_scores);
    while (nrows <= m) {
      f->data[nrows - 1] = 0.0;
      nrows++;
    }

    for (i2 = 0; i2 < 16; i2++) {
      if (Mdl_Alpha[i2] != 0.0) {
        aoffset = i2 * m;
        for (nrows = 0; nrows < m; nrows++) {
          f->data[nrows] += Mdl_Alpha[i2] * innerProduct->data[aoffset + nrows];
        }
      }
    }

    emxFree_real_T(&innerProduct);
    aoffset = f->size[0];
    emxEnsureCapacity_real_T(f, aoffset);
    nrows = f->size[0];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      f->data[aoffset] += 1.7666097968287136;
    }

    emxInit_real_T1(&a, 1);
    aoffset = a->size[0];
    a->size[0] = f->size[0];
    emxEnsureCapacity_real_T(a, aoffset);
    nrows = f->size[0];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      a->data[aoffset] = -f->data[aoffset];
    }

    outsize[0] = a->size[0];
    aoffset = scores->size[0] * scores->size[1];
    scores->size[0] = outsize[0];
    scores->size[1] = 2;
    emxEnsureCapacity_real_T1(scores, aoffset);
    nrows = a->size[0];
    for (aoffset = 0; aoffset < 2; aoffset++) {
      m = aoffset * nrows;
      for (i2 = 0; i2 < nrows; i2++) {
        scores->data[m + i2] = a->data[i2];
      }
    }

    emxFree_real_T(&a);
    for (i2 = 0; i2 < 2; i2++) {
      outsize[i2] = 0;
      nrows = 1;
      exitg1 = false;
      while ((!exitg1) && (nrows < 3)) {
        rowmatch = true;
        frexp((1.0 + (double)((nrows - 1) << 1)) / 2.0, &exponent);
        if (!(fabs((double)(iv0[nrows - 1] - iv0[i2])) < ldexp(1.0, exponent -
              53))) {
          rowmatch = false;
        }

        if (rowmatch) {
          outsize[i2] = nrows;
          exitg1 = true;
        } else {
          nrows++;
        }
      }
    }

    nrows = f->size[0];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      scores->data[aoffset + scores->size[0] * (outsize[1] - 1)] = f->
        data[aoffset];
    }

    emxInit_boolean_T1(&b, 2);
    aoffset = b->size[0] * b->size[1];
    b->size[0] = scores->size[0];
    b->size[1] = 2;
    emxEnsureCapacity_boolean_T(b, aoffset);
    nrows = scores->size[0] * scores->size[1];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      b->data[aoffset] = rtIsNaN(scores->data[aoffset]);
    }

    for (aoffset = 0; aoffset < 2; aoffset++) {
      b_outsize[aoffset] = (unsigned int)b->size[aoffset];
    }

    emxInit_boolean_T(&notNaN, 1);
    aoffset = notNaN->size[0];
    notNaN->size[0] = (int)b_outsize[0];
    emxEnsureCapacity_boolean_T1(notNaN, aoffset);
    nrows = (int)b_outsize[0];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      notNaN->data[aoffset] = true;
    }

    aoffset = b->size[0];
    nrows = -1;
    m = 0;
    i2 = b->size[0];
    for (exponent = 1; exponent <= aoffset; exponent++) {
      m++;
      i2++;
      nrows++;
      ix = m;
      exitg1 = false;
      while ((!exitg1) && ((aoffset > 0) && (ix <= i2))) {
        if (!b->data[ix - 1]) {
          notNaN->data[nrows] = false;
          exitg1 = true;
        } else {
          ix += aoffset;
        }
      }
    }

    emxFree_boolean_T(&b);
    aoffset = notNaN->size[0];
    emxEnsureCapacity_boolean_T1(notNaN, aoffset);
    nrows = notNaN->size[0];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      notNaN->data[aoffset] = !notNaN->data[aoffset];
    }

    aoffset = f->size[0];
    f->size[0] = scores->size[0];
    emxEnsureCapacity_real_T(f, aoffset);
    nrows = scores->size[0];
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      f->data[aoffset] = rtNaN;
    }

    for (nrows = 0; nrows < notNaN->size[0]; nrows++) {
      if (notNaN->data[nrows]) {
        if ((scores->data[nrows] < scores->data[nrows + scores->size[0]]) ||
            (rtIsNaN(scores->data[nrows]) && (!rtIsNaN(scores->data[nrows +
               scores->size[0]])))) {
          aoffset = 2;
        } else {
          aoffset = 1;
        }

        f->data[nrows] = aoffset;
      }
    }

    nrows = scores->size[0];
    aoffset = label->size[0];
    label->size[0] = nrows;
    emxEnsureCapacity_real_T(label, aoffset);
    emxFree_real_T(&scores);
    for (aoffset = 0; aoffset < nrows; aoffset++) {
      label->data[aoffset] = 3.0;
    }

    for (nrows = 0; nrows < notNaN->size[0]; nrows++) {
      if (notNaN->data[nrows]) {
        label->data[nrows] = (signed char)(1 + (signed char)((signed char)((int)
          (unsigned int)rt_roundd_snf(f->data[nrows]) - 1) << 1));
      }
    }

    emxFree_boolean_T(&notNaN);
    emxFree_real_T(&f);
  }
}

/* End of code generation (Clasificador_Parkinson_vs_control.c) */
