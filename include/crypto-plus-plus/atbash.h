#ifndef CRYPTO_PLUS_PLUS_ATBASH_H
#define CRYPTO_PLUS_PLUS_ATBASH_H

#include <string>
#include <map>

namespace atbash {
    class Atbash {
    private:
        static std::map<char, char> cipherMap;

    public:
        std::string encrypt(std::string plainText);
        std::string decrypt(std::string cipherText);
    };
}

#endif
