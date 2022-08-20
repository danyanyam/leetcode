#include "solution.hpp"

string Solution::addBinary(string a, string b)
{
    // reverse input strings
    // for loop of maximum of inputs
    //   digitA = a[i]
    //   digitB = b[i]

    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    int carry = 0;
    int digitA = 0;
    int digitB = 0;
    int total = 0;
    string res = "";

    for (size_t i = 0; i < max(a.size(), b.size()); i++)
    {
        digitA = ((i < a.size()) ? a[i] : '0') - '0';
        digitB = ((i < b.size()) ? b[i] : '0') - '0';
        total = digitA + digitB + carry;
        string chr = to_string(total % 2);
        res = chr + res;
        carry = total / 2;
    }

    if (carry)
        res.insert(0, "1");

    return res;
}