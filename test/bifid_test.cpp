#include "bifid.h"

#include "gtest/gtest.h"

#define ALPHABET_NO_J {"A", "B", "C", "D", "E", "F", "G", "H", "I", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"}

namespace cryptoplusplus {
class BifidTest : public testing::Test {
 protected:
  Bifid bifid = Bifid(5, ALPHABET_NO_J);
  const string plainText = "ABCDEFGHIKLMNOPQRSTUVWXYZA";
  const string cipherText = "AAAHUGGFHUNNLHUTTQHUZZVHUA";
};

TEST_F(BifidTest, EncryptOnlyAlpha) {
  EXPECT_EQ(cipherText, bifid.encrypt(plainText));
}

TEST_F(BifidTest, DecryptOnlyAlpha) {
  EXPECT_EQ(plainText, bifid.decrypt(cipherText));
}
}
