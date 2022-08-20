#include <iostream>
#include <vector>
#include <map>
#include <unordered_map>

using namespace std;

class ListNode
{
public:
    ListNode() : val(0), next(nullptr) {}
    ListNode(int new_val) : val(new_val), next(nullptr) {}
    ListNode(int new_val, ListNode *new_ptr) : val(new_val), next(new_ptr) {}

    int val;
    ListNode *next;
};



class Solution
{
public:
    ListNode *deleteDuplicates(ListNode *head);
};
