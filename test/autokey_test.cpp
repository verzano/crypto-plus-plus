#include "autokey.h"

#include "gtest/gtest.h"

namespace cryptoplusplus {
class AutoKeyTest : public testing::Test {
 protected:
  AutoKey autoKey = AutoKey("QUEENLY");
  const string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const string cipherText = "QVGHRQEHJLNPRTVXZBDFHJLNPR";
};

TEST_F(AutoKeyTest, EncryptOnlyAlpha) {
  EXPECT_EQ(cipherText, autoKey.encrypt(plainText));
}

TEST_F(AutoKeyTest, DecrypeOnlyAlpha) {
  EXPECT_EQ(plainText, autoKey.decrypt(cipherText));
}
}