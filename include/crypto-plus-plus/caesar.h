#ifndef CRYPTO_PLUS_PLUS_CAESAR_H
#define CRYPTO_PLUS_PLUS_CAESAR_H

#include <string>
#include <map>

namespace caesar {
    class Caesar {
    private:
        static std::map<char, char> encryptMap;
        static std::map<char, char> decryptMap;

    public:
        std::string encrypt(std::string plainText);
        std::string decrypt(std::string cipherText);
    };
}

#endif