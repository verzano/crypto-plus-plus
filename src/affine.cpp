#include "../include/affine.h"

#define ALPHABET_SIZE 26
#define ASCII_A_VALUE 65

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
        this->aPrime = calculateInverse(a, ALPHABET_SIZE);
    }

    int Affine::calculateInverse(int a, int m) {
        int aModulo = a%m;
        for (int i = 1; i < m; i++) {
            if ((aModulo*i)%m == 1) {
                return i;
            }
        }
        return -1;
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
        return (a*convertCharToInt(x) + b)%ALPHABET_SIZE;
    }

    int Affine::D(char x) {
        // TODO find a better way to do this
        // basically what happens is that -(x)%m remains negative which is bad
        return (aPrime*(convertCharToInt(x) - b)%ALPHABET_SIZE + ALPHABET_SIZE)%ALPHABET_SIZE;
    }
}