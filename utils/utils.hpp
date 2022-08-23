#pragma ONCE

#include <vector>
#include <iostream>
#include <fmt/ranges.h>
#include <numeric>

using namespace std;


/**
 * Prints given iterable of type T
 * @tparam T type of elements in iterable
 * @param to_print passed iterable to print
 */
template<typename T>
void print(T &to_print) {
    auto res = fmt::format("{}", to_print);
    std::cout << res << std::endl;
};


/**
 * @tparam T type of elemnts in array
 * @param v passed array to sort
 * @param ascending how to sort
 * @return  indices, corresponding to sorted array
 */
template<typename T>
std::vector<size_t> sort_indexes(const std::vector<T> &v,
                                 bool ascending = false) {

    // initialize original index locations
    std::vector<size_t> idx(v.size());
    std::iota(idx.begin(), idx.end(), 0);

    // sort indexes based on comparing values in v
    // using std::stable_sort instead of std::sort
    // to avoid unnecessary index re-orderings
    // when v contains elements of equal values
    std::stable_sort(idx.begin(), idx.end(),
                     [&v, &ascending](size_t i1, size_t i2) {
                         return (ascending) ? v[i1] < v[i2] : v[i1] > v[i2];
                     });

    return idx;
}