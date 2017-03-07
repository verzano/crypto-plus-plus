#ifndef CRYPTO_PLUS_PLUS_SUBSTITUTIONCIPHER_H
#define CRYPTO_PLUS_PLUS_SUBSTITUTIONCIPHER_H

#include "cipher.h"

#include <map>
#include <string>

using namespace std;

namespace cryptoplusplus {
    class SubstitutionCipher : public Cipher<string, string> {
    private:
        map<char, char> encryptMap;
        map<char, char> decryptMap;

    public:
        SubstitutionCipher(map<char, char> encryptMap) :
                encryptMap(encryptMap), decryptMap(encryptMap) {};
        SubstitutionCipher(map<char, char> encryptMap, map<char, char> decryptMap) :
                encryptMap(encryptMap), decryptMap(decryptMap) {};
        string encrypt(string plainText);
        string decrypt(string cipherText);
    };
}

#endif
