#include "solution.hpp"

int Solution::strStr(string haystack, string needle)
{
    int pointer = -1;
    for (size_t i = 0; i < haystack.size(); i++)
    {
        // any symbol matches
        if (haystack[i] == needle[0])
        {

            pointer = i;
            for (size_t j = 0; j < needle.size(); j++)
            {
                if (haystack[i + j] != needle[j])
                {
                    pointer = -1;
                    break;
                }
            }
            if (pointer != -1)
                return pointer;
        }
    }

    return pointer;
}