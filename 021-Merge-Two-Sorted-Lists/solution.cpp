#include "solution.hpp"

ListNode *Solution::mergeTwoLists(ListNode *list1, ListNode *list2)
{
    if (!list1) return list2;
    if (!list2) return list1;

    ListNode *list2_beg = list2;

    // пока первый список не станет пустым
    while (list1 != nullptr)
    {
        // итерируемся по второму списку, пока не найдем подходящее
        // место для элемента из первого списка
        while (list2->next && list2->val <= list1->val)
        {
            list2 = list2->next;
        }

        if (list1->val >= list2->val)
        {
            // создаем нод, в который скопируем данные с первого списка
            ListNode *temp = new ListNode(list1->val, list2->next);
            list2->next = temp;
            list2 = temp;
        }
        else
        {
            // копируем конец второго
            ListNode *temp = new ListNode(list2->val, list2->next);
            list2->val = list1->val;
            list2->next = temp;
        }
        list1 = list1->next;
    }

    return list2_beg;
}