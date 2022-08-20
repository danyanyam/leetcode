#include <gtest/gtest.h>

#include "solution.hpp"

void assert_equal_my(vector<int> true_vec, vector<int> calculated)
{
    EXPECT_EQ(true_vec.size(), calculated.size());

    for (size_t i = 0; i < true_vec.size(); i++)
    {
        EXPECT_EQ(true_vec[i], calculated[i]);
    }
}

TEST(HelloTest, BasicAssertions)
{
    Solution s;
    vector<int> nums1 = {1, 2, 3};
    vector<int> expected1 = {1, 2, 4};
    assert_equal_my(expected1, s.plusOne(nums1));
    vector<int> nums2 = {4, 3, 2, 1};
    vector<int> expected2 = {4, 3, 2, 2};
    assert_equal_my(expected2, s.plusOne(nums2));
    vector<int> nums3 = {9};
    vector<int> expected3 = {1, 0};
    assert_equal_my(expected3, s.plusOne(nums3));
    vector<int> nums4 = {9, 8, 9};
    vector<int> expected4 = {9, 9, 0};
    assert_equal_my(expected4, s.plusOne(nums4));
}