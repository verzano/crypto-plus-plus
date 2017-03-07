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

        int aModulo = a % ALPHABET_SIZE;
        for (int i = 1; i < ALPHABET_SIZE; i++) {
            if ((aModulo * i) % ALPHABET_SIZE == 1) {
                c = i;
                break;
            }
        }
    }

    string Affine::encrypt(string plainText) {
        string cipherText;
        for (char x : plainText) {
            cipherText += isalpha(x)
                          ? convertIntToChar((a*convertCharToInt(x) + b)%ALPHABET_SIZE)
                          : x;
        }
        return cipherText;
    }

    string Affine::decrypt(string cipherText) {
        string plainText;
        for (char y : cipherText) {
            plainText += isalpha(y)
                         ? convertIntToChar((c*(convertCharToInt(y) - b)%ALPHABET_SIZE + ALPHABET_SIZE)%ALPHABET_SIZE)
                         : y;
        }
        return plainText;
    }
}