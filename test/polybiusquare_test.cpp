#include "polybiussquare.h"

#include "gtest/gtest.h"

#define KEYS_ABCDE {"A", "B", "C", "D", "E"}
#define ALPHABET_NO_J {"A", "B", "C", "D", "E", "F", "G", "H", "I", "K", "L", "M", "N", "O", "P", "Q", "R", "S", "T", "U", "V", "W", "X", "Y", "Z"}

// TODO improve this with other keys and alphabets
namespace cryptoplusplus {
class PolybiusSquareTest : public testing::Test {
 protected:
  PolybiusSquare polybius = PolybiusSquare(KEYS_ABCDE, ALPHABET_NO_J);
  const string plainText = "ABCDEFGHIKLMNOPQRSTUVWXYZ";
  const string cipherText = "AAABACADAEBABBBCBDBECACBCCCDCEDADBDCDDDEEAEBECEDEE";
};

TEST_F(PolybiusSquareTest, EncryptOnlyAlpha) {
  EXPECT_EQ(cipherText, polybius.encrypt(plainText));
}

TEST_F(PolybiusSquareTest, DecryptOnlyAlpha) {
  EXPECT_EQ(plainText, polybius.decrypt(cipherText));
}
}