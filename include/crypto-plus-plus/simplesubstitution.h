#ifndef CRYPTO_PLUS_PLUS_SIMPLESUBSTITUTION_H
#define CRYPTO_PLUS_PLUS_SIMPLESUBSTITUTION_H

#include "cipher.h"

#include <map>
#include <string>

using namespace std;

namespace cryptoplusplus {
    class SimpleSubstitution : public Cipher<string, string> {
    private:
        map<char, char> alphabet;

    public:
        SimpleSubstitution(map<char, char> alphabet): alphabet(alphabet) {};
        string encrypt(string plainText);
        string decrypt(string cipherText);
    };
}

#endif
