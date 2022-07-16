#include "solution.hpp"

int Solution::mySqrt(int x)
{
    int lowest = 0;
    int highest = x;
    int median = (highest + lowest) / 2;

    if (x == 1)
        return 1;

    // find the lowest bound of sqrt(x)
    while (true)
    {

        if (highest * highest <= x)
            return highest;

        if (median == lowest)
            return median;

        // корень находится в правой части от медианы
        if (median * median < x)
            lowest = median;
        // корень находится в левой части от медианы
        else if (median * median > x)
            highest = median - 1;
        else if (median * median == x)
            return median;

        median = (highest + lowest) / 2;
    }
}