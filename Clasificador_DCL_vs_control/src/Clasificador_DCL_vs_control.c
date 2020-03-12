/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * Clasificador_DCL_vs_control.c
 *
 * Code generation for function 'Clasificador_DCL_vs_control'
 *
 */

/* Include files */
#include <math.h>
#include <string.h>
#include "rt_nonfinite.h"
#include "Clasificador_DCL_vs_control.h"
#include "Clasificador_DCL_vs_control_emxutil.h"
#include "Gaussian.h"
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

void Clasificador_DCL_vs_control(const emxArray_real_T *x, emxArray_real_T
  *label)
{
  int iy;
  double Mdl_Alpha[24];
  static const double dv0[24] = { -0.99244598651772242, -1.0,
    -0.074549726770776148, -0.75520758248471975, -1.0, -1.0, -1.0,
    0.25227952256938674, 0.13148649938107854, 0.10969629020246083,
    0.30774665471790674, 0.14507978846458192, 1.0, 0.15865143601073103, 1.0, 1.0,
    0.2260362720878086, 0.13808092088823207, 0.15431136331880244,
    0.20384039189962616, 0.22717168729507603, 0.262130792454411,
    0.24878622754957935, 0.25690544893353678 };

  double Mdl_Mu[2];
  double Mdl_Sigma[2];
  emxArray_real_T *X;
  int nrows;
  emxArray_real_T *f;
  emxArray_real_T *a;
  static const double dv1[48] = { 2.77043747671181, 2.3665916569229948,
    2.77043747671181, 2.3665916569229948, 2.77043747671181, 2.3665916569229948,
    2.77043747671181, 1.4394732758603779, 1.9282244837914171, 1.4394732758603779,
    1.0860114908710243, 2.3665916569229948, 1.0860114908710243,
    2.3665916569229948, -5.6516924524921164, -2.26900024839009,
    -2.2828404808105458, -4.1232370105153242, -3.9672664666513309,
    -5.0503553915779413, -3.9672664666513309, -1.3418818673274731,
    -3.9672664666513309, -4.1232370105153242, 0.24379849795063194,
    2.3665916569229948, 1.0860114908710243, 0.512354894797761, 2.77043747671181,
    2.3665916569229948, 1.0860114908710243, 1.4394732758603779,
    0.24379849795063194, -3.1961186294527071, -3.1250534737309379,
    -4.1232370105153242, -0.59841449496976062, -3.1961186294527071,
    -1.4406274878901533, -4.1232370105153242, -4.8094794595717234,
    -5.0503553915779413, -6.4939054454125085, -1.3418818673274731,
    0.24379849795063194, -1.3418818673274731, -0.59841449496976062,
    -0.4147634862648561 };

  static const double dv2[24] = { 13.276079882986824, 13.276079882986824,
    13.276079882986824, 9.7474071242855072, 5.7901329718088848,
    6.7801770289214307, 6.7801770289214307, 37.089989704750643,
    22.212444105710674, 41.245292798656514, 17.539850163278402,
    32.740286662299482, 5.66019377822051, 1.4419284965271297, 13.276079882986824,
    3.2515042702201127, 10.274612001137635, 26.767042658561152,
    10.573274201324564, 19.076491003748043, 48.6371822532827, 43.9714548798205,
    1.8600846534652504, 0.53012865732849113 };

  double dv3[24];
  double d0;
  int outsize[2];
  int ibtile;
  int i2;
  boolean_T exitg1;
  emxArray_boolean_T *b;
  boolean_T rowmatch;
  int exponent;
  static const signed char iv0[2] = { 1, 9 };

  emxArray_boolean_T *notNaN;
  unsigned int b_outsize[2];
  int ix;

  /* PREDICTLABELSSVM Label new observations using trained SVM model Mdl */
  /*    predictLabelsSVM predicts the vector of labels label using  */
  /*    the saved SVM model Mdl and the predictor data x. */
  for (iy = 0; iy < 2; iy++) {
    Mdl_Mu[iy] = 8.7105263157894832 + -3.2631578947368505 * (double)iy;
    Mdl_Sigma[iy] = 3.3924231532401916 + -0.310677698179596 * (double)iy;
  }

  memcpy(&Mdl_Alpha[0], &dv0[0], 24U * sizeof(double));
  if (x->size[0] == 0) {
    iy = label->size[0];
    label->size[0] = 0;
    emxEnsureCapacity_real_T(label, iy);
  } else {
    emxInit_real_T(&X, 2);
    iy = X->size[0] * X->size[1];
    X->size[0] = x->size[0];
    X->size[1] = 2;
    emxEnsureCapacity_real_T1(X, iy);
    nrows = x->size[0] * x->size[1];
    for (iy = 0; iy < nrows; iy++) {
      X->data[iy] = x->data[iy];
    }

    emxInit_real_T1(&f, 1);
    CompactSVM_normalize(Mdl_Mu, Mdl_Sigma, X);
    iy = f->size[0];
    f->size[0] = X->size[0];
    emxEnsureCapacity_real_T(f, iy);
    for (nrows = 0; nrows < X->size[0]; nrows++) {
      for (iy = 0; iy < 2; iy++) {
        Mdl_Mu[iy] = X->data[nrows + X->size[0] * iy] / 0.35;
      }

      Gaussian(dv1, dv2, Mdl_Mu, dv3);
      d0 = 0.0;
      for (iy = 0; iy < 24; iy++) {
        d0 += dv3[iy] * Mdl_Alpha[iy];
      }

      f->data[nrows] = d0 + 0.68509726514359037;
    }

    emxInit_real_T1(&a, 1);
    iy = a->size[0];
    a->size[0] = f->size[0];
    emxEnsureCapacity_real_T(a, iy);
    nrows = f->size[0];
    for (iy = 0; iy < nrows; iy++) {
      a->data[iy] = -f->data[iy];
    }

    outsize[0] = a->size[0];
    iy = X->size[0] * X->size[1];
    X->size[0] = outsize[0];
    X->size[1] = 2;
    emxEnsureCapacity_real_T1(X, iy);
    nrows = a->size[0];
    for (iy = 0; iy < 2; iy++) {
      ibtile = iy * nrows;
      for (i2 = 0; i2 < nrows; i2++) {
        X->data[ibtile + i2] = a->data[i2];
      }
    }

    emxFree_real_T(&a);
    for (i2 = 0; i2 < 2; i2++) {
      outsize[i2] = 0;
      nrows = 1;
      exitg1 = false;
      while ((!exitg1) && (nrows < 3)) {
        rowmatch = true;
        frexp((1.0 + (double)((nrows - 1) << 3)) / 2.0, &exponent);
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
    for (iy = 0; iy < nrows; iy++) {
      X->data[iy + X->size[0] * (outsize[1] - 1)] = f->data[iy];
    }

    emxInit_boolean_T1(&b, 2);
    iy = b->size[0] * b->size[1];
    b->size[0] = X->size[0];
    b->size[1] = 2;
    emxEnsureCapacity_boolean_T(b, iy);
    nrows = X->size[0] * X->size[1];
    for (iy = 0; iy < nrows; iy++) {
      b->data[iy] = rtIsNaN(X->data[iy]);
    }

    for (iy = 0; iy < 2; iy++) {
      b_outsize[iy] = (unsigned int)b->size[iy];
    }

    emxInit_boolean_T(&notNaN, 1);
    iy = notNaN->size[0];
    notNaN->size[0] = (int)b_outsize[0];
    emxEnsureCapacity_boolean_T1(notNaN, iy);
    nrows = (int)b_outsize[0];
    for (iy = 0; iy < nrows; iy++) {
      notNaN->data[iy] = true;
    }

    nrows = b->size[0];
    iy = -1;
    ibtile = 0;
    i2 = b->size[0];
    for (exponent = 1; exponent <= nrows; exponent++) {
      ibtile++;
      i2++;
      iy++;
      ix = ibtile;
      exitg1 = false;
      while ((!exitg1) && ((nrows > 0) && (ix <= i2))) {
        if (!b->data[ix - 1]) {
          notNaN->data[iy] = false;
          exitg1 = true;
        } else {
          ix += nrows;
        }
      }
    }

    emxFree_boolean_T(&b);
    iy = notNaN->size[0];
    emxEnsureCapacity_boolean_T1(notNaN, iy);
    nrows = notNaN->size[0];
    for (iy = 0; iy < nrows; iy++) {
      notNaN->data[iy] = !notNaN->data[iy];
    }

    iy = f->size[0];
    f->size[0] = X->size[0];
    emxEnsureCapacity_real_T(f, iy);
    nrows = X->size[0];
    for (iy = 0; iy < nrows; iy++) {
      f->data[iy] = rtNaN;
    }

    for (nrows = 0; nrows < notNaN->size[0]; nrows++) {
      if (notNaN->data[nrows]) {
        if ((X->data[nrows] < X->data[nrows + X->size[0]]) || (rtIsNaN(X->
              data[nrows]) && (!rtIsNaN(X->data[nrows + X->size[0]])))) {
          iy = 2;
        } else {
          iy = 1;
        }

        f->data[nrows] = iy;
      }
    }

    nrows = X->size[0];
    iy = label->size[0];
    label->size[0] = nrows;
    emxEnsureCapacity_real_T(label, iy);
    emxFree_real_T(&X);
    for (iy = 0; iy < nrows; iy++) {
      label->data[iy] = 9.0;
    }

    for (nrows = 0; nrows < notNaN->size[0]; nrows++) {
      if (notNaN->data[nrows]) {
        label->data[nrows] = (signed char)(1 + (signed char)((signed char)((int)
          (unsigned int)rt_roundd_snf(f->data[nrows]) - 1) << 3));
      }
    }

    emxFree_boolean_T(&notNaN);
    emxFree_real_T(&f);
  }
}

/* End of code generation (Clasificador_DCL_vs_control.c) */
