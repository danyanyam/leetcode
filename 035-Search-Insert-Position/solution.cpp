#include "solution.hpp"

int Solution::searchInsert(vector<int> &nums, int target)
{
    auto lb = lower_bound(nums.begin(), nums.end(), target);
    auto ans = lb - nums.begin();
    return ans;

    int low = 0;
    int high = nums.size() - 1;
    int median = 0;

    while (true)
    {
        median = (low + high) / 2;

        if (nums[median] == target)
            return median;

        if (median == low)
        {
            if (nums[median] < target)
            {
                if (nums[high] < target)
                    return high + 1;
                return ++median;
            }
            return median;
        }

        if (nums[median] < target)
            low = median + 1;

        else if (nums[median] > target)
            high = median - 1;
    }

    return 0;
}