#include "QuickStart.hpp"
#include "gtest/gtest.h"

namespace {
    TEST(QuickStart, AdditionTest) {
    QuickStart quickStart;

    EXPECT_EQ(quickStart.add(1, 1), 2);
    }
}