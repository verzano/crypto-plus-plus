#ifndef CRYPTO_PLUS_PLUS_AFFINE_H
#define CRYPTO_PLUS_PLUS_AFFINE_H

#include <string>

namespace affine {
    class Affine {
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
