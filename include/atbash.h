#ifndef CRYPTO_PLUS_PLUS_ATBASH_H
#define CRYPTO_PLUS_PLUS_ATBASH_H

#include "simplesubstitution.h"

namespace cryptoplusplus {
    class Atbash : public SimpleSubstitution {
    private:
        static const map<char, char> alphabet;
    public:
        Atbash() : SimpleSubstitution(alphabet) {};
    };
}

#endif
