#include <gtest/gtest.h>
#include <utils.hpp>



#include "solution.hpp"

TEST(HelloTest, BasicAssertions)
{
    Solution s;
    {   
        vector<int> test = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
        vector<int> test2 = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
        
        print(test2);
    }

    // Expect equality.
    // EXPECT_EQ();
}