#include "solution.hpp"

void Solution::merge(vector<int> &nums1, int m, vector<int> &nums2, int n) {
    if (not n)
        return;

    int slow_runner = 0;

    for (int fast_runner = 0; fast_runner < m + n; ++fast_runner) {


        if (fast_runner >= m) {
            std::swap(nums1[fast_runner], nums2[fast_runner - m]);
            continue;
        }

        if (nums1[fast_runner] <= nums2[slow_runner])
            continue;
        else {
            std::swap(nums1[fast_runner], nums2[slow_runner]);
            slow_runner++;
        }

    }


}