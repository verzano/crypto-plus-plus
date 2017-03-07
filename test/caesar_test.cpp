#include "caesar.h"

#include "gtest/gtest.h"

namespace cryptoplusplus {
    TEST(encry_caeasr, encrypt) {
        string plainText = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
        Caesar caesar = Caesar();
        EXPECT_EQ("XYZABCDEFGHIJKLMNOPQRSTUVW", caesar.encrypt(plainText));
    }
}
