#include <iostream>
#include "affine.h"

#define ALPHABET_SIZE 26
#define ASCII_A_VALUE 65

// TODO need to decide what to do about characters that shouldn't be in there
namespace affine {
    int convertCharToInt(char c);
    char convertIntToChar(int i);

    Affine::Affine(int a, int b) {
        this->a = a;
        this->b = b;

        int aModulo = a%ALPHABET_SIZE;
        for (int i = 1; i < ALPHABET_SIZE; i++) {
            if ((aModulo*i)%ALPHABET_SIZE == 1) {
                c = i;
                break;
            }
        }
    }

    std::string Affine::encrypt(std::string plainText) {
        std::string cipherText;
        for (char x : plainText) {
            cipherText += std::isalpha(x)
                          ? convertIntToChar((a*convertCharToInt(x) + b)%ALPHABET_SIZE)
                          : x;
        }
        return cipherText;
    }

    std::string Affine::decrypt(std::string cipherText) {
        std::string plainText;
        for (char y : cipherText) {
            plainText += std::isalpha(y)
                         ? convertIntToChar((c*(convertCharToInt(y) - b)%ALPHABET_SIZE + ALPHABET_SIZE)%ALPHABET_SIZE)
                         : y;
        }
        return plainText;
    }

    int convertCharToInt(char c) {
        return std::toupper(c) - ASCII_A_VALUE;
    }

    char convertIntToChar(int i) {
        return char(i + ASCII_A_VALUE);
    }
}