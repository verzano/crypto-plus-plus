#include "atbash.h"

#include "gtest/gtest.h"

namespace cryptoplusplus {
    class AtbashTest : public testing::Test {
    protected:
        Atbash atbash = Atbash();
        const string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        const string cipherText = "ZYXWVUTSRQPONMLKJIHGFEDCBA";
    };

    TEST_F(AtbashTest, EncryptOnlyAlpha) {
        EXPECT_EQ(cipherText, atbash.encrypt(plainText));
    }

    TEST_F(AtbashTest, DecryptOnlyAlpha) {
        EXPECT_EQ(plainText, atbash.decrypt(cipherText));
    }
}
