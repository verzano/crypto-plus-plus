#include "substitutioncipher.h"

namespace cryptoplusplus {
    string SubstitutionCipher::encrypt(string plainText) {
        string cipherText;
        for (char c : plainText) {
            cipherText += isalpha(c) ? encryptMap[toupper(c)] : c;
        }
        return cipherText;
    }

    string SubstitutionCipher::decrypt(string cipherText) {
        string plainText;
        for (char c : cipherText) {
            plainText += isalpha(c) ? decryptMap[toupper(c)] : c;
        }
        return plainText;
    }
}