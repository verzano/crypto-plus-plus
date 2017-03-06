#include "simplesubstitution.h"

namespace cryptoplusplus {
    std::string SimpleSubstitution::encrypt(std::string plainText) {
        std::string cipherText;
        for (char c : plainText) {
            cipherText += std::isalpha(c) ? alphabet[std::toupper(c)] : c;
        }
        return cipherText;
    }

    std::string SimpleSubstitution::decrypt(std::string cipherText) {
        std::string plainText;
        for (char c : cipherText) {
            plainText += std::isalpha(c) ? alphabet[std::toupper(c)] : c;
        }
        return plainText;
    }
}