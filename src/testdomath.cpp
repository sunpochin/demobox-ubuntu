// src/testdomath.cpp
#include "gtest/gtest.h"
#include "domath.h"


TEST(DoMathTests, testAdd){
    domath m;
    int actual = m.add(4, 6);
    ASSERT_EQ(10, actual);
}