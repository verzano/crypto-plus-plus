#include "simplesubstitution.h"

namespace cryptoplusplus {
    string SimpleSubstitution::encrypt(string plainText) {
        string cipherText;
        for (char c : plainText) {
            cipherText += isalpha(c) ? alphabet[toupper(c)] : c;
        }
        return cipherText;
    }

    string SimpleSubstitution::decrypt(string cipherText) {
        string plainText;
        for (char c : cipherText) {
            plainText += isalpha(c) ? alphabet[toupper(c)] : c;
        }
        return plainText;
    }
}