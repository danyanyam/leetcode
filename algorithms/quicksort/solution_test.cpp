//
// Created by Daniil  on 20.08.2022.
//
#include "interface.h"


int main() {
    std::vector<int> test = {4, 5, 5, 2, 8, 1, 1, 11};
    QuickSearch(test, 0, test.size() - 1);

    for (auto el: test) {
        std::printf("%d ", el);
    }

    return 0;

}