#include "columnartransposition.h"

#include "gtest/gtest.h"

namespace cryptoplusplus {
// TODO use random chars for padding not spaces
class ColumnarTranspositionTest : public testing::Test {
 protected:
  ColumnarTransposition columnarTransposition = ColumnarTransposition({{0, 3}, {1, 0}, {2, 4}, {3, 1}, {4, 2}});
  const string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ    ";
  const string cipherText = "BDEACGIJFHLNOKMQSTPRVXYUW   Z ";
};

TEST_F(ColumnarTranspositionTest, EncryptOnlyAlpha) {
  EXPECT_EQ(cipherText, columnarTransposition.encrypt(plainText));
}

TEST_F(ColumnarTranspositionTest, DecryptOnlyAlpha) {
  EXPECT_EQ(plainText, columnarTransposition.decrypt(cipherText));
}
}
