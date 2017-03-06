#ifndef CRYPTO_PLUS_PLUS_ATBASH_H
#define CRYPTO_PLUS_PLUS_ATBASH_H

#include "cipher.h"

#include <string>
#include <map>

namespace cryptoplusplus {
    class Atbash : public Cipher<std::string, std::string> {
    private:
        static std::map<char, char> alphabet;

    public:
        std::string encrypt(std::string plainText);
        std::string decrypt(std::string cipherText);
    };
}

#endif
