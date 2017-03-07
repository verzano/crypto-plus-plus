#ifndef CRYPTO_PLUS_PLUS_CAESAR_H
#define CRYPTO_PLUS_PLUS_CAESAR_H

#include "simplesubstitution.h"

namespace cryptoplusplus {
    class Caesar : public SimpleSubstitution {
    private:
        static const map<char, char> encryptionAlphabet;
        static const map<char, char> decryptionAlphabet;
    public:
        Caesar() : SimpleSubstitution(encryptionAlphabet, decryptionAlphabet) {};
    };
}

#endif