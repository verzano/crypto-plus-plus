#include "caesar.h"

#include "gtest/gtest.h"

namespace cryptoplusplus {
class CaesarTest : public testing::Test {
 protected:
  Caesar caesar = Caesar();
  const string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const string cipherText = "XYZABCDEFGHIJKLMNOPQRSTUVW";
};

TEST_F(CaesarTest, EncryptOnlyAlpha) {
  EXPECT_EQ(cipherText, caesar.encrypt(plainText));
}

TEST_F(CaesarTest, DecryptOnlyAlpha) {
  EXPECT_EQ(plainText, caesar.decrypt(cipherText));
}
}