#include "solution.hpp"

int Solution::searchInsert(vector<int> &nums, int target)
{
    // нижняя граница вектора, ограниченная таргетом
    return lower_bound(nums.begin(), nums.end(), target)- nums.begin();
}