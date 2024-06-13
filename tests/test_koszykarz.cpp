//
// Created by Marcin Grześ on 13/06/2024.
//
#include <gtest/gtest.h>
#include "koszykarz.h"

TEST(KoszykarzTest, TestCases) {
EXPECT_EQ(koszykarz(180, 201, 5), 5);
EXPECT_EQ(koszykarz(180, 201, 4), 6);
EXPECT_EQ(koszykarz(180, 190, 4), 3);
EXPECT_EQ(koszykarz(190, 180, 4), 0);
}

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}