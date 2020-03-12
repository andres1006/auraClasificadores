/*
 * Academic License - for use in teaching, academic research, and meeting
 * course requirements at degree granting institutions only.  Not for
 * government, commercial, or other organizational use.
 *
 * CompactClassificationTree.c
 *
 * Code generation for function 'CompactClassificationTree'
 *
 */

/* Include files */
#include "rt_nonfinite.h"
#include "Clasificador_Parkinsionismos_vs_control.h"
#include "CompactClassificationTree.h"
#include "Clasificador_Parkinsionismos_vs_control_emxutil.h"

/* Function Definitions */
void c_CompactClassificationTree_pre(const double obj_Children[6], const double
  obj_ClassProb[6], const double obj_CutPoint[3], const double obj_ClassNames[2],
  const double obj_Cost[4], const emxArray_real_T *X, emxArray_real_T *labels)
{
  emxArray_real_T *node;
  int i0;
  int outsize_idx_0;
  emxArray_real_T *unusedU4;
  double m;
  emxArray_real_T *scores;
  static const signed char pruneList[3] = { 1, 0, 0 };

  int b_scores;
  int i1;
  int coffset;
  int boffset;
  int i;
  int k;
  int aoffset;
  emxArray_real_T *r0;
  int scores_idx_0;
  if (X->size[0] == 0) {
    i0 = labels->size[0];
    labels->size[0] = 0;
    emxEnsureCapacity_real_T(labels, i0);
  } else {
    emxInit_real_T(&node, 1);
    i0 = node->size[0];
    node->size[0] = X->size[0];
    emxEnsureCapacity_real_T(node, i0);
    for (outsize_idx_0 = 0; outsize_idx_0 < X->size[0]; outsize_idx_0++) {
      m = 1.0;
      while (!((pruneList[(int)m - 1] <= 0) || rtIsNaN(X->data[outsize_idx_0])))
      {
        if (X->data[outsize_idx_0] < obj_CutPoint[(int)m - 1]) {
          m = obj_Children[((int)m - 1) << 1];
        } else {
          m = obj_Children[1 + (((int)m - 1) << 1)];
        }
      }

      node->data[outsize_idx_0] = m;
    }

    emxInit_real_T1(&unusedU4, 2);
    emxInit_real_T1(&scores, 2);
    i0 = scores->size[0] * scores->size[1];
    scores->size[0] = node->size[0];
    scores->size[1] = 2;
    emxEnsureCapacity_real_T1(scores, i0);
    outsize_idx_0 = node->size[0];
    i0 = unusedU4->size[0] * unusedU4->size[1];
    unusedU4->size[0] = outsize_idx_0;
    unusedU4->size[1] = 2;
    emxEnsureCapacity_real_T1(unusedU4, i0);
    for (i0 = 0; i0 < 2; i0++) {
      for (i1 = 0; i1 < outsize_idx_0; i1++) {
        unusedU4->data[i1 + unusedU4->size[0] * i0] = obj_ClassProb[((int)
          node->data[i1] + 3 * i0) - 1];
      }
    }

    b_scores = scores->size[0];
    for (i0 = 0; i0 < 2; i0++) {
      outsize_idx_0 = unusedU4->size[0];
      for (i1 = 0; i1 < outsize_idx_0; i1++) {
        scores->data[i1 + b_scores * i0] = unusedU4->data[i1 + unusedU4->size[0]
          * i0];
      }
    }

    outsize_idx_0 = node->size[0];
    i0 = labels->size[0];
    labels->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T(labels, i0);
    for (i0 = 0; i0 < outsize_idx_0; i0++) {
      labels->data[i0] = obj_ClassNames[0];
    }

    i0 = scores->size[0];
    i1 = scores->size[0];
    outsize_idx_0 = unusedU4->size[0] * unusedU4->size[1];
    unusedU4->size[0] = i1;
    unusedU4->size[1] = 2;
    emxEnsureCapacity_real_T1(unusedU4, outsize_idx_0);
    for (b_scores = 0; b_scores < 2; b_scores++) {
      coffset = b_scores * i0 - 1;
      boffset = b_scores << 1;
      for (i = 1; i <= i0; i++) {
        unusedU4->data[coffset + i] = 0.0;
      }

      for (k = 0; k < 2; k++) {
        if (obj_Cost[boffset + k] != 0.0) {
          aoffset = k * i0;
          for (i = 1; i <= i0; i++) {
            i1 = scores->size[0];
            outsize_idx_0 = (aoffset + i) - 1;
            scores_idx_0 = scores->size[0];
            unusedU4->data[coffset + i] += obj_Cost[boffset + k] * scores->
              data[outsize_idx_0 % i1 + scores_idx_0 * (outsize_idx_0 / i1)];
          }
        }
      }
    }

    i0 = scores->size[0];
    i1 = scores->size[0];
    outsize_idx_0 = node->size[0];
    node->size[0] = i1;
    emxEnsureCapacity_real_T(node, outsize_idx_0);
    for (outsize_idx_0 = 0; outsize_idx_0 < i0; outsize_idx_0++) {
      if ((unusedU4->data[outsize_idx_0] > unusedU4->data[outsize_idx_0 +
           unusedU4->size[0]]) || (rtIsNaN(unusedU4->data[outsize_idx_0]) &&
           (!rtIsNaN(unusedU4->data[outsize_idx_0 + unusedU4->size[0]])))) {
        b_scores = 2;
      } else {
        b_scores = 1;
      }

      node->data[outsize_idx_0] = b_scores;
    }

    emxFree_real_T(&unusedU4);
    emxInit_real_T(&r0, 1);
    outsize_idx_0 = scores->size[0];
    i1 = r0->size[0];
    r0->size[0] = outsize_idx_0;
    emxEnsureCapacity_real_T(r0, i1);
    emxFree_real_T(&scores);
    for (i1 = 0; i1 < outsize_idx_0; i1++) {
      r0->data[i1] = obj_ClassNames[0];
    }

    for (outsize_idx_0 = 0; outsize_idx_0 < i0; outsize_idx_0++) {
      r0->data[outsize_idx_0] = obj_ClassNames[(int)node->data[outsize_idx_0] -
        1];
    }

    emxFree_real_T(&node);
    outsize_idx_0 = r0->size[0];
    for (i0 = 0; i0 < outsize_idx_0; i0++) {
      labels->data[i0] = r0->data[i0];
    }

    emxFree_real_T(&r0);
  }
}

/* End of code generation (CompactClassificationTree.c) */
