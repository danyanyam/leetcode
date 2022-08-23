//
// Created by Daniil on 22.08.2022.
//

#ifndef LEETCODE_INTERFACE_H
#define LEETCODE_INTERFACE_H

#include <vector>
#include <iostream>
#include "utils.hpp"

/**
 *
 * @param w array of weights of each item
 * @param v array of values
 * @param c capacity
 *
 * @returns the best weights for items, so that
 *   target value is optimized, where target
 *   value is just sum of w_i v_i for all i in
 *   range 0..n
 */
std::vector<float> FractionalKnapsack(
        std::vector<float> &w,
        std::vector<float> &v,
        float c
);


/**
 * value per unit of item
 *
 * @param w weight of item
 * @param v value of item
 */
void ValuesPerUnit(
        std::vector<float> &w,
        std::vector<int> &v
);


#endif //LEETCODE_INTERFACE_H
