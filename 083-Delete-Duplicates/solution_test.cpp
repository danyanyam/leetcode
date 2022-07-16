#include <gtest/gtest.h>

#include "solution.hpp"

bool isLinkedListsEqual(ListNode *left, ListNode *right)
{
    while (left && right)
    {

        cout << "left: " << left->val << ' ' << " right: " << right->val << endl;

        if (left->val != right->val)
            return false;

        left = left->next;
        right = right->next;
    }

    return (left == nullptr && right == nullptr);
}

ListNode *createLinkedList(vector<int> data)
{
    // creates linked list from given vector of ints
    ListNode *origin = new ListNode(data[0]);
    ListNode *head = origin;

    for (size_t i = 1; i < data.size(); i++)
    {
        ListNode *temp = new ListNode(data[i]);
        head->next = temp;
        head = temp;
    }
    return origin;
}

TEST(HelloTest, BasicAssertions)
{
    Solution s;
    {
        ListNode *given = createLinkedList({1, 1, 1});
        ListNode *expected = createLinkedList({1});

        ListNode *generated = s.deleteDuplicates(given);
        EXPECT_EQ(isLinkedListsEqual(generated, expected), true);
    }
    {
        ListNode *given = createLinkedList({1, 1, 2});
        ListNode *expected = createLinkedList({1, 2});

        ListNode *generated = s.deleteDuplicates(given);
        EXPECT_EQ(isLinkedListsEqual(generated, expected), true);
    }

    {
        ListNode *given = createLinkedList({1, 1, 2, 3, 3});
        ListNode *expected = createLinkedList({1, 2, 3});

        ListNode *generated = s.deleteDuplicates(given);
        EXPECT_EQ(isLinkedListsEqual(generated, expected), true);
    }
}