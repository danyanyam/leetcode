#include <gtest/gtest.h>

#include "solution.hpp"

TEST(HelloTest, BasicAssertions)
{
    Solution s;
    {
        vector<int> nums = {1, 3};
        int target = 0;
        EXPECT_EQ(s.searchInsert(nums, target), 0);
    }
    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 0;
        EXPECT_EQ(s.searchInsert(nums, target), 0);
    }
    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 5;
        EXPECT_EQ(s.searchInsert(nums, target), 2);
    }
    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 2;
        EXPECT_EQ(s.searchInsert(nums, target), 1);
    }
    {
        vector<int> nums = {1, 3, 5, 6};
        int target = 7;
        EXPECT_EQ(s.searchInsert(nums, target), 4);
    }
}