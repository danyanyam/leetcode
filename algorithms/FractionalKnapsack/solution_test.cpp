//
// Created by danyanyam on 22.08.2022.
//

#include "interface.h"
#include <gtest/gtest.h>
#include <gmock/gmock.h>


using ::testing::ElementsAre;
using ::testing::FloatEq;


TEST(FractionalKnapsack, TestCase1) {

    std::vector<float> weights = {10, 20, 30};
    std::vector<float> values = {60, 100, 120};
    float capacity = 30;

    auto result = FractionalKnapsack(
            weights,
            values,
            capacity
    );

    EXPECT_TRUE(result.size() == weights.size());
    EXPECT_THAT(result, ElementsAre(1, 1, 0));

}

TEST(FractionalKnapsack, TestCase2) {

    std::vector<float> weights = {10, 20, 30};
    std::vector<float> values = {60, 100, 120};
    float capacity = 40;

    auto result = FractionalKnapsack(
            weights,
            values,
            capacity
    );

    EXPECT_TRUE(result.size() == weights.size());
    EXPECT_THAT(result, ElementsAre(1, 1, FloatEq(10.f / 30)));
}

TEST(FractionalKnapsack, TestCase3) {

    std::vector<float> weights = {10, 20, 30};
    std::vector<float> values = {60, 100, 120};
    float capacity = 0;

    auto result = FractionalKnapsack(
            weights,
            values,
            capacity
    );

    EXPECT_TRUE(result.size() == weights.size());
    EXPECT_THAT(result, ElementsAre(0, 0, 0));
}