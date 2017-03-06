#ifndef CRYPTO_PLUS_PLUS_AFFINE_H
#define CRYPTO_PLUS_PLUS_AFFINE_H

#include "simple_substitution.h"

#include <string>

namespace simple_substitution {
    namespace affine {
        class Affine : public SimpleSubstitution {
        private:
            int a;
            int b;
            int c;

        public:
            Affine(int a, int b);
            std::string encrypt(std::string plainText);
            std::string decrypt(std::string cipherText);
        };
    }
}

#endif
