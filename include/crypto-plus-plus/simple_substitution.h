#ifndef CRYPTO_PLUS_PLUS_SIMPLE_SUBSTITUTION_H
#define CRYPTO_PLUS_PLUS_SIMPLE_SUBSTITUTION_H

#include <string>

namespace simple_substitution {
    class SimpleSubstitution {
    public:
        virtual std::string encrypt(std::string plainText) = 0;
        virtual std::string decrypt(std::string cipherText) = 0;
    };
}

#endif
