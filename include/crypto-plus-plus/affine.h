#ifndef CRYPTO_PLUS_PLUS_AFFINE_H
#define CRYPTO_PLUS_PLUS_AFFINE_H

#include "cipher.h"

#include <string>

using namespace std;

namespace cryptoplusplus {
    class Affine : public Cipher<string, string> {
    private:
        int a;
        int b;
        int c;

    public:
        Affine(int a, int b);
        string encrypt(string plainText);
        string decrypt(string cipherText);
    };
}

#endif
