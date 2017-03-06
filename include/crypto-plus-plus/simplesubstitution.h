#ifndef CRYPTO_PLUS_PLUS_SIMPLESUBSTITUTION_H
#define CRYPTO_PLUS_PLUS_SIMPLESUBSTITUTION_H

#include "cipher.h"

#include <map>
#include <string>

namespace cryptoplusplus {
    class SimpleSubstitution : public Cipher<std::string, std::string> {
    private:
        std::map<char, char> alphabet;

    public:
        SimpleSubstitution(std::map<char, char> alphabet): alphabet(alphabet) {};
        std::string encrypt(std::string plainText);
        std::string decrypt(std::string cipherText);
    };
}

#endif
