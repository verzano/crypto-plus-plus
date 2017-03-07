#ifndef CRYPTO_PLUS_PLUS_ATBASH_H
#define CRYPTO_PLUS_PLUS_ATBASH_H

#include "substitutioncipher.h"

namespace cryptoplusplus {
    class Atbash : public SubstitutionCipher {
    private:
        static const map<char, char> alphabet;
    public:
        Atbash() : SubstitutionCipher(alphabet) {};
    };
}

#endif
