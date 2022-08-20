#include "solution.hpp"

int Solution::climbStairs(int n)
{
    if (n <= 2)
        return n;

    int x = 1, y = 2, temp = 0;

    for (size_t i = 3; i < n; i++)
    {
        temp = y;
        y += x;
        x = temp;
    }
    return x + y;
}