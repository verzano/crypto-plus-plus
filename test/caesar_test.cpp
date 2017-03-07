#include "caesar.h"

#include "gtest/gtest.h"

using namespace cryptoplusplus;

class CaesarTest : public testing::Test {
protected:
    Caesar caesar = Caesar();
};

TEST_F(CaesarTest, EncryptOnlyAlpha) {
    string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    EXPECT_EQ("XYZABCDEFGHIJKLMNOPQRSTUVW", caesar.encrypt(plainText));
}
