//
// Created by danyanyam on 22.08.2022.
//
#include "interface.h"
#include <algorithm>


std::vector<float> ValuesPerUnit(
        std::vector<float> &w,
        std::vector<float> &v
) {
    std::vector<float> values_per_unit;
    for (int i = 0; i < v.size(); ++i) {
        values_per_unit.push_back(v[i] / w[i]);
    }
    return values_per_unit;
}

std::vector<float> FractionalKnapsack(
        std::vector<float> &w,
        std::vector<float> &v,
        float capacity

) {
    std::vector<float> values_per_unit = ValuesPerUnit(w, v);     // O(n)
    std::vector<size_t> sorting_indices = sort_indexes(values_per_unit, false);
    std::vector<float> picked;
    float load = 0;
    float weight = 0;

    for (size_t i = 0; i < sorting_indices.size(); ++i) {
        if (capacity - load - w[i] >= 0)
            weight = 1;
        else if (capacity - load > 0)
            weight = (capacity - load) / w[i];
        else
            weight = 0;

        picked.push_back(weight);
        load += weight * w[i];

    }


    return picked;
};
