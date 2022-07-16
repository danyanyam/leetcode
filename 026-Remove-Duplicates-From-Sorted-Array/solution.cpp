#include "solution.hpp"

int Solution::removeDuplicates(vector<int> &nums)
{

    int left = 1;

    for (size_t i = 1; i < nums.size(); i++)
    {
        if (nums[i] != nums[left - 1])
        {
            swap(nums[i], nums[left++]);
        }
    }

    return left;
}