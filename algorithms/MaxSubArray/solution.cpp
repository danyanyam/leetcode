//
// Created by Daniil  on 21.08.2022.
//

#include "interface.h"

/**
 * Maximum sum of sub-arrays, that cross the mid-point `q`,
 * that is defined by left -minimum index `p` and right
 * maximum index `r`. All sub-arrays are calculated with O(n).
 *
 * @param A initial array, where we are looking maximum sub-array
 * @param p left index of array, that is currently observed
 * @param r right index of array
 * @param q mid-point of range [p, r]
 * @return maximum sub-array of A, that contains A[q]
 *
 */
int MaxCrossingSubArray(std::vector<int> &A, int p, int q, int r) {
    int maxRightSum = A[q];
    int maxLeftSum = A[q - 1];
    int accumulator = 0;

    for (int i = q - 1; i >= p; --i) {
        accumulator += A[i];
        maxLeftSum = (accumulator > maxLeftSum) ? accumulator : maxLeftSum;
    }

    accumulator = 0;
    for (int i = q; i <= r; ++i) {
        accumulator += A[i];
        maxRightSum = (accumulator > maxRightSum) ? accumulator : maxRightSum;
    }

    return maxLeftSum + maxRightSum;


}

/** divide and conquer algorithm, works as follows:
 *  1. Splits given array by half
 *  2. Finds sum of elements in all left/right sub-arrays
 *     as well as mid-crossing
 *  3. Returns maximum of sum from left sub-arrays, right
 *     and mid-crossing sub-arrays
 *
 *  Overall time of execution is given by recurrence
 *      T(n) = 2T(n/2) + O(n)
 *  which is same as merge sort and provides T(n) = O(nlog n)
 *
 *
 */
int MaxSubArray(std::vector<int> &A, int p, int r) {
    if (p >= r) return A[p];                     // const
    int q = static_cast<int>((r + p) / 2);       // const

    int L = MaxSubArray(A, p, q - 1);      // O(n/2)
    int R = MaxSubArray(A, q + 1, r);      // O(n/2)

    int C = MaxCrossingSubArray(A, p, q, r);  // O(n)
    return std::max({L, R, C});                // const
}


