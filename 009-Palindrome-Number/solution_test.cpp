#include <gtest/gtest.h>

#include "solution.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{

    Solution s;

    // Expect equality.
    EXPECT_EQ(s.isPalindrome(121), true);
    EXPECT_EQ(s.isPalindrome(-121), false);
    EXPECT_EQ(s.isPalindrome(10), false);
    EXPECT_EQ(s.isPalindrome(11), true);
}