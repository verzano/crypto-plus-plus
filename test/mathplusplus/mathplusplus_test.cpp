#include "mathplusplus.h"

#include "gtest/gtest.h"

namespace mathplusplus {
TEST(MathPlusPlus, Modulo) {
  EXPECT_EQ(1, modulo(10, 3));
  EXPECT_EQ(3, modulo(3, 10));
}

TEST(MathPlusPlus, NegativeModulo) {
  EXPECT_EQ(2, modulo(-10, 3));
  EXPECT_EQ(-1, modulo(-10, -3));
  EXPECT_EQ(-2, modulo(10, -3));
}

TEST(MathPlusPlus, ModularInverse) {
  EXPECT_EQ(15, modularInverse(25, 22));
}

TEST(MathPlusPlus, ModularInverseDoesntExist) {
  EXPECT_EQ(-1, modularInverse(10, 10));
}
}