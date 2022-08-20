//
// Created by Daniil Buchko on 20.08.2022.
//

#ifndef LEETCODE_INTERFACE_H
#define LEETCODE_INTERFACE_H

#include <vector>
#include <cstdio>

/*
 * p: left index
 * r: right index
 * q: pivot index
 * j: index of current element
 * i: index of the wall, separating elements
 *    that are smaller than pivot from those
 *    that are larger
 */
void QuickSort(std::vector<int> &A, int p, int r);

int Partition(std::vector<int> &A, int p, int r);


#endif //LEETCODE_INTERFACE_H
