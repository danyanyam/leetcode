//
// Created by Daniil  on 20.08.2022.
//
#include "interface.h"
#include <gtest/gtest.h>


TEST(QuantileSearch, BasicAssertions) {
    // Median search
    std::vector<int> test = {6, 2, 9, 1, 12, 5, 10, 3};
    int median_idx = static_cast<int>((test.size() + 1) / 2);  // ceiling
    int res = QuantileSearch(test,
                             median_idx,
                             0,
                             test.size() - 1);
    EXPECT_EQ(res, 6);
}


TEST(QuantileSearch, Case2) {
    // Minimum search
    std::vector<int> test = {6, 2, 9, 1, 12, 5, 10, 3};
    int min_idx = 0;
    int res = QuantileSearch(test,
                             min_idx,
                             0,
                             test.size() - 1);
    EXPECT_EQ(res, 1);
}


TEST(QuantileSearch, Case3) {
// Maximum search
    std::vector<int> test = {6, 2, 9, 1, 12, 5, 10, 3};
    int max_idx = static_cast<int>(test.size() - 1);
    int res = QuantileSearch(test,
                             max_idx,
                             0,
                             test.size() - 1);
    EXPECT_EQ(res, 12);
}

