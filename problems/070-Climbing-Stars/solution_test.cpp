#include <gtest/gtest.h>

#include "solution.hpp"

TEST(HelloTest, BasicAssertions)
{
    Solution s;

    // Expect equality.
    EXPECT_EQ(s.climbStairs(2), 2);
    EXPECT_EQ(s.climbStairs(3), 3);
}