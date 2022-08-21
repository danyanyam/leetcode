//
// Created by Daniil on 20.08.2022.
//
#include "interface.h"

int Partition(std::vector<int> &A, int k, int p, int r) {
    /*
     * r: pivot
     * i: index of the wall. Initially, it is pointing
     *    to the element before the first in A
     * j: current element
     *
     */

    // beginning of the wall is outside the array
    int i = p - 1;

    for (int j = p; j <= r - 1; ++j) {
        if (A[j] < A[r])
            std::swap(A[++i], A[j]);
    }

    // putting pivot variable on its position
    std::swap(A[r], A[i + 1]);
    return i + 1;
}

int QuantileSearch(std::vector<int> &A, int k, int p, int r) {

    if (p == r) return A[p];
    int q = Partition(A, k, p, r);

    if (q == k)
        return A[q];

    if (q < k)
        return QuantileSearch(A, k, q + 1, r);
    else
        return QuantileSearch(A, k, p, q - 1);

}


