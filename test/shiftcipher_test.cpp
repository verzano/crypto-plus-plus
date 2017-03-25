#include "shiftcipher.h"

#include "gtest/gtest.h"

namespace cryptoplusplus {
class ShiftCipherTest : public testing::Test {
 protected:
  ShiftCipher smallAlphabet = ShiftCipher(2, {"A", "D", "G", "J", "M"});
  const string smallAlphabetPlainText = "ADGJMADGJMADGJM";
  const string smallAlphabetCipherText = "GJMADGJMADGJMAD";
};

TEST_F(ShiftCipherTest, SmallAlphabetEncrypt) {
  EXPECT_EQ(smallAlphabetCipherText, smallAlphabet.encrypt(smallAlphabetPlainText));
}

TEST_F(ShiftCipherTest, SmallAlphabetDecrypt) {
  EXPECT_EQ(smallAlphabetPlainText, smallAlphabet.decrypt(smallAlphabetCipherText));
}
}