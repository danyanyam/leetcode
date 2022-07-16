#include "solution.hpp"

bool Solution::isPalindrome(int x)
{
    // делим число пополам, половины должны совпадать

    int x_initial = x;
    int last_digit = 0;

    if (x == 0)
        return true;

    if (x % 10 == 0 || x < 0)
        return false;

    while (x > last_digit)
    {
        last_digit = last_digit * 10 + x % 10;
        x = x / 10;
    }


    if (last_digit / 10 == x || last_digit == x)
        return true;

    return false;
}