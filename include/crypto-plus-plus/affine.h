#ifndef CRYPTO_PLUS_PLUS_AFFINE_H
#define CRYPTO_PLUS_PLUS_AFFINE_H

#include "cipher.h"

#include <string>

namespace cryptoplusplus {
    class Affine : public Cipher<std::string, std::string> {
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

#endif
