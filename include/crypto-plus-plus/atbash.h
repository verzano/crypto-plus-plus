#ifndef CRYPTO_PLUS_PLUS_ATBASH_H
#define CRYPTO_PLUS_PLUS_ATBASH_H

#include "simple_substitution.h"

#include <string>
#include <map>

namespace simple_substitution {
    namespace atbash {
        class Atbash : public SimpleSubstitution{
        private:
            static std::map<char, char> cipherMap;

        public:
            std::string encrypt(std::string plainText);
            std::string decrypt(std::string cipherText);
        };
    }
}

#endif
