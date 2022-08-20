#include <gtest/gtest.h>

#include "solution.hpp"

void assert_vectors(vector<int> expected, vector<int> given)
{
    for (size_t i = 0; i < expected.size(); i++)
    {
        EXPECT_EQ(expected[i], given[i]);
    }
}

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{

    Solution s;
    {
        vector<int> nums = {1, 1, 2};      // Input array
        vector<int> expectedNums = {1, 2}; // The expected answer with correct length

        int k = s.removeDuplicates(nums); // Calls your implementation

        EXPECT_EQ(k, expectedNums.size());
        assert_vectors(expectedNums, nums);
    }

    {
        vector<int> nums = {0, 0, 1, 1, 1, 2, 2, 3, 3, 4}; // Input array
        vector<int> expectedNums = {0, 1, 2, 3, 4};        // The expected answer with correct length

        int k = s.removeDuplicates(nums); // Calls your implementation

        EXPECT_EQ(k, expectedNums.size());
        assert_vectors(expectedNums, nums);
    }
}