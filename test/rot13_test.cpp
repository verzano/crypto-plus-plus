#include "rot13.h"

#include "gtest/gtest.h"

namespace cryptoplusplus {
class Rot13Test : public testing::Test {
 protected:
  Rot13 rot13 = Rot13();
  const string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const string cipherText = "NOPQRSTUVWXYZABCDEFGHIJKLM";
};

TEST_F(Rot13Test, EncryptOnlyAlpha) {
  EXPECT_EQ(cipherText, rot13.encrypt(plainText));
}

TEST_F(Rot13Test, DecryptOnlyAlpha) {
  EXPECT_EQ(plainText, rot13.decrypt(cipherText));
}
}