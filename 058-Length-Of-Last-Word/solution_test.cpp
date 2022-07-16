#include <gtest/gtest.h>

#include "solution.hpp"

TEST(HelloTest, BasicAssertions)
{
    Solution s;

    // Expect equality.
    EXPECT_EQ(s.lengthOfLastWord("Hello World"), 5);
    EXPECT_EQ(s.lengthOfLastWord("a"), 1);
    EXPECT_EQ(s.lengthOfLastWord("day"), 3);
    EXPECT_EQ(s.lengthOfLastWord("   fly me   to   the moon  "), 4);
    EXPECT_EQ(s.lengthOfLastWord("luffy is still joyboy"), 6);
    
}