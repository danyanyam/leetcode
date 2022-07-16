#include <gtest/gtest.h>

#include "solution.hpp"

TEST(HelloTest, BasicAssertions)
{
    Solution s;

    // Expect equality.
    EXPECT_EQ(s.mySqrt(9), 3);
    EXPECT_EQ(s.mySqrt(6), 2);
    EXPECT_EQ(s.mySqrt(1), 1);
    EXPECT_EQ(s.mySqrt(64), 8);
    EXPECT_EQ(s.mySqrt(63), 7);
    EXPECT_EQ(s.mySqrt(65), 8);
    EXPECT_EQ(s.mySqrt(36), 6);
    EXPECT_EQ(s.mySqrt(4), 2);
    EXPECT_EQ(s.mySqrt(8), 2);
}