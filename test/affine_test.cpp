#include "affine.h"

#include "gtest/gtest.h"

// TODO maybe test more a/b combinations
namespace cryptoplusplus {
    class AffineTest : public testing::Test {
    protected:
        Affine affine = Affine(5, 8);
    };

    TEST_F(AffineTest, APrimeCorrect) {
        ASSERT_EQ(21, affine.calculateInverse(5, 26));
    }

    // TODO DEPENDANT ON a=5 AND b=8
    TEST_F(AffineTest, E) {
        ASSERT_EQ(7, affine.E('F'));
    }

    // TODO DEPENDANT ON a=5 AND b=8
    TEST_F(AffineTest, D) {
        ASSERT_EQ(5, affine.D('H'));
    }
}