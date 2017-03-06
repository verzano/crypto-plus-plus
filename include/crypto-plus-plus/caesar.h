#ifndef CRYPTO_PLUS_PLUS_CAESER_H
#define CRYPTO_PLUS_PLUS_CAESER_H

#include <string>
using std::string;

namespace caesar {
    class Caesar {
    public:
        string encrypt(const string& plainText);
        string decrypt(const string& cipherText);
    };
}

#endif //CRYPTO_PLUS_PLUS_CAESER_H