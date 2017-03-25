#include "affine.h"

#include "gtest/gtest.h"

// TODO maybe test more a/b combinations
namespace cryptoplusplus {
class AffineTest : public testing::Test {
 protected:
  Affine affine = Affine(5, 8);
  // TODO DEPENDANT ON a=5 AND b=8
  const string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
  const string cipherText = "INSXCHMRWBGLQVAFKPUZEJOTYD";
};

// TODO DEPENDANT ON a=5 AND b=8
TEST_F(AffineTest, E) {
  EXPECT_EQ(7, affine.E('F'));
}

// TODO DEPENDANT ON a=5 AND b=8
TEST_F(AffineTest, D) {
  EXPECT_EQ(5, affine.D('H'));
}

TEST_F(AffineTest, EncryptOnlyAlpha) {
  EXPECT_EQ(cipherText, affine.encrypt(plainText));
}

TEST_F(AffineTest, DecryptOnlyAlpha) {
  EXPECT_EQ(plainText, affine.decrypt(cipherText));
}
}