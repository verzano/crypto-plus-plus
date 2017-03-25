#include "baconian.h"

#include "gtest/gtest.h"

namespace cryptoplusplus {
class BaconianTest : public testing::Test {
 protected:
  Baconian baconian = Baconian();
  const string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const string decryptedTest = "ABCDEFGHIIKLMNOPQRSTUUWXYZ";
  const string cipherText =
      "AAAAAAAAABAAABAAAABBAABAAAABABAABBAAABBBABAAAABAAAABAABABABAABABBABBAAABBABABBBAABBBBBAAAABAAABBAABABAABBBAABBBABAABABABBABBABABBB";
};

TEST_F(BaconianTest, EncryptOnlyAlpha) {
  EXPECT_EQ(cipherText, baconian.encrypt(plainText));
}

TEST_F(BaconianTest, DecryptOnlyAlpha) {
  EXPECT_EQ(decryptedTest, baconian.decrypt(cipherText));
}
}