#include "affine.h"

#include "mathplusplus.h"

#define ALPHABET_SIZE 26
#define ASCII_A_VALUE 65

using namespace mathplusplus;

namespace cryptoplusplus {
    int convertCharToInt(char c) {
        return toupper(c) - ASCII_A_VALUE;
    }

    char convertIntToChar(int i) {
        return char(i + ASCII_A_VALUE);
    }

    Affine::Affine(int a, int b) {
        this->a = a;
        this->b = b;
        this->aPrime = modularInverse(a, ALPHABET_SIZE);
    }

    string Affine::encrypt(string plainText) {
        string cipherText;
        for (char x : plainText) {
            // TODO make it so that it doesn't use isalpha
            cipherText += isalpha(x) ? convertIntToChar(E(x)) : x;
        }
        return cipherText;
    }

    string Affine::decrypt(string cipherText) {
        string plainText;
        for (char x : cipherText) {
            // TODO make it so that it doesn't use isalpha
            plainText += isalpha(x) ? convertIntToChar(D(x)) : x;
        }
        return plainText;
    }

    int Affine::E(char x) {
        return modulo(a*convertCharToInt(x) + b, ALPHABET_SIZE);
    }

    int Affine::D(char x) {
        return modulo(aPrime*(convertCharToInt(x) - b), ALPHABET_SIZE);
    }
}