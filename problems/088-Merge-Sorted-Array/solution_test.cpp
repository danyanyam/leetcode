#include <gtest/gtest.h>
#include "utils.hpp"


#include "solution.hpp"

void assert_equal(vector<int> left, vector<int> right) {
    EXPECT_EQ(left.size(), right.size());

    for (int i = 0; i < left.size(); ++i) {
        EXPECT_EQ(left[i], right[i]);
    }
}

TEST(HelloTest, BasicAssertions) {
    Solution s;
    {
        vector<int> nums1 = {1, 2, 3, 0, 0, 0};
        int m = 3;
        vector<int> nums2 = {2, 5, 6};
        int n = 3;

        s.merge(nums1, m, nums2, n);
        vector<int> solution = {1, 2, 2, 3, 5, 6};

        assert_equal(nums1, solution);
    }
    {
        vector<int> nums1 = {1};
        int m = 1;
        vector<int> nums2 = {};
        int n = 0;
        s.merge(nums1, m, nums2, n);
        assert_equal(nums1, {1});
    }
    {
        vector<int> nums1 = {0};
        int m = 0;
        vector<int> nums2 = {1};
        int n = 1;
        s.merge(nums1, m, nums2, n);
        assert_equal(nums1, {1});
    }
    {
        vector<int> nums1 = {4, 0, 0, 0, 0, 0};
        int m = 1;
        vector<int> nums2 = {1, 2, 3, 5, 6};
        int n = 5;
        s.merge(nums1, m, nums2, n);
        assert_equal(nums1, {1, 2, 3, 4, 5, 6});
    }
// Expect equality.
// EXPECT_EQ();
}