//
// Created by Daniil  on 21.08.2022.
//

#include "interface.h"
#include <gtest/gtest.h>


TEST(MaxSubArray, BasicAssertions) {
    {
        std::vector<int> data = {1, 2, 3};
        int right_idx = static_cast<int>(data.size() - 1);
        int res = MaxSubArray(data,
                              0,
                              right_idx);
        EXPECT_EQ(res, 6);
    }
    {
        std::vector<int> data = {1, 2, 3, -10, 5};
        int right_idx = static_cast<int>(data.size() - 1);
        int res = MaxSubArray(data,
                              0,
                              right_idx);
        EXPECT_EQ(res, 6);
    }

    {
        std::vector<int> data = {-1, 3, 4, -5, 9, -2};
        int right_idx = static_cast<int>(data.size() - 1);
        int res = MaxSubArray(data,
                              0,
                              right_idx);
        EXPECT_EQ(res, 11);
    }

}

