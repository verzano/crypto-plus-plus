#ifndef CRYPTO_PLUS_PLUS_CAESER_H
#define CRYPTO_PLUS_PLUS_CAESER_H

#include <string>
#include <map>

namespace caesar {
    class Caesar {
    private:
        static std::map<char, char> encryptMap;
        static std::map<char, char> decryptMap;

    public:
        static std::string encrypt(std::string plainText);
        static std::string decrypt(std::string cipherText);
    };
}

#endif