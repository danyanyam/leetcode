#include <gtest/gtest.h>

#include "solution.hpp"

TEST(HelloTest, BasicAssertions)
{
    Solution s;

    // Expect equality.
    EXPECT_EQ(s.strStr("hello", "ll"), 2);
    EXPECT_EQ(s.strStr("aaaaa", "bbzopa"), -1);
}