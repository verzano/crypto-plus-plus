#ifndef CRYPTO_PLUS_PLUS_AFFINE_H
#define CRYPTO_PLUS_PLUS_AFFINE_H

#include "cipher.h"

#include <string>

using namespace std;

// TODO allow specifying of the alphabet somehow as this relies on ASCII and the English alphabet
// TODO better names for these ints, it's whats used by the formulas but still...
namespace cryptoplusplus {
    class Affine : public Cipher<string, string> {
    private:
        int a;
        int b;
        int aPrime;
    public:
        Affine(int a, int b);
        string encrypt(string plainText);
        string decrypt(string cipherText);

        // TODO these could REALLY use better names but meh
        // E(x) = (a*x + b)%m
        int E(char x);
        // D(x) = a'(x - b)%m
        int D(char x);

        // TODO migrate this somewhere else, a simple math class or use an external math lib...
        static int calculateInverse(int a, int m);
    };
}

#endif
