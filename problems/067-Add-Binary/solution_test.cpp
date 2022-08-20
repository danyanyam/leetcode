#include <gtest/gtest.h>

#include "solution.hpp"

TEST(HelloTest, BasicAssertions)
{
    Solution s;
    EXPECT_EQ(s.addBinary("0", "0"), "0");
    EXPECT_EQ(s.addBinary("11", "1"), "100");
    EXPECT_EQ(s.addBinary("1010", "1011"), "10101");

    
    // Expect equality.
    // EXPECT_EQ();
}