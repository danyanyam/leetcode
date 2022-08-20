#include "solution.hpp"

int Solution::lengthOfLastWord(string s)
{
    if (s.back() == ' ')
        return lengthOfLastWord(s.substr(0, s.size() - 1));


    for (int i = s.size() - 1; i >= 0; i--)
    {
        if (s[i] == ' ')
            return s.size() - 1 - i;

        if (i == 0)
            return s.size() - i;
    }
    return -1;
}