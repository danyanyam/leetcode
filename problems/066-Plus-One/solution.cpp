#include "solution.hpp"

vector<int> Solution::plusOne(vector<int> &digits)
{
    int last_idx = digits.size() - 1;
    if (digits[last_idx] != 9)
    {
        digits[last_idx]++;
        return digits;
    }

    bool add = false;
    for (int i = digits.size() - 1; i >= 0; i--)
    {
        if (digits[i] == 9)
        {
            digits[i] = 0;
            add = true;
        }

        else if (digits[i] < 9)
        {
            digits[i]++;
            add = false;
            return digits;
        }
    }
    if (add)
        digits.insert(digits.begin(), 1);

    return digits;
}