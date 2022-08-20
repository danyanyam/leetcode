#include "solution.hpp"

ListNode *Solution::deleteDuplicates(ListNode *head)
{

    if (!head)
        return head;

    ListNode *current = head->next;
    ListNode *prev = head;

    while (current)
    {
        // если текущий равен предыдущему, то удаляем текущий из цепи
        if (current->val == prev->val)
        {
            prev->next = current->next;
        }
        else
        {
            prev = current;
        }
        current = current->next;
    }

    return head;
}