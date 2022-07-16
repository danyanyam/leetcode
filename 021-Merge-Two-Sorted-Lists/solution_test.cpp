#include <gtest/gtest.h>

#include "solution.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions)
{

    Solution my_solution;
    // Input: list1 = [1,2,4], list2 = [1,3,4]
    // Output: [1,1,2,3,4,4]

    auto third_node = new ListNode(4);
    auto second_node = new ListNode(2, third_node);
    auto list1 = new ListNode(1, second_node);

    auto third_node2 = new ListNode(4);
    auto second_node2 = new ListNode(3, third_node2);
    auto list2 = new ListNode(1, second_node2);

    int expected[] = {1, 1, 2, 3, 4, 4};
    auto merged = my_solution.mergeTwoLists(list1, list2);

    for (size_t i = 0; i < sizeof(expected) / sizeof(int); i++)
    {
        EXPECT_EQ(expected[i], merged->val);
        merged = merged->next;
    }
}