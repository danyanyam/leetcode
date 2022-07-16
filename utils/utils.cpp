#include "utils.hpp"

void print(vector<int> v)
{
    if (v.size() == 0)
        cout << "[]" << endl;

    else if (v.size() <= 10)
    {
        cout << "[";
        for (size_t i = 0; i < v.size() - 1; i++)
        {
            cout << v[i] << ", ";
        }
        cout << v[v.size() - 1] << "]\n";
    }
    else
    {
        cout << "[";
        for (size_t i = 0; i < 5; i++)
        {
            cout << v[i] << ", ";
        }
        cout << "... ";
        for (size_t i = v.size() - 6; i < v.size() - 1; i++)
        {
            cout << v[i] << ", ";
        }
        cout << v[v.size() - 1] << "]\n";
    }
}