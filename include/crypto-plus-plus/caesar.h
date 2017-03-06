#ifndef CRYPTO_PLUS_PLUS_CAESAR_H
#define CRYPTO_PLUS_PLUS_CAESAR_H

#include "simple_substitution.h"

#include <string>
#include <map>

namespace simple_substitution {
    namespace caesar {
        class Caesar : public SimpleSubstitution {
        private:
            static std::map<char, char> encryptMap;
            static std::map<char, char> decryptMap;

        public:
            std::string encrypt(std::string plainText);
            std::string decrypt(std::string cipherText);
        };
    }
}

#endif