//
// Created by Daniil on 20.08.2022.
//
#include "interface.h"

int Partition(std::vector<int> &A, int p, int r) {
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

void QuickSort(std::vector<int> &A, int p, int r) {

    // base size of 1 or 0
    if (p >= r) return;

    int q = Partition(A, p, r);

    QuickSort(A, p, q - 1);
    QuickSort(A, q + 1, r);
}

