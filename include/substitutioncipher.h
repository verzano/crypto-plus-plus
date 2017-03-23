#ifndef CRYPTO_PLUS_PLUS_SUBSTITUTIONCIPHER_H
#define CRYPTO_PLUS_PLUS_SUBSTITUTIONCIPHER_H

#include "cipher.h"

#include <map>

using namespace std;

namespace cryptoplusplus {
    class SubstitutionCipher : public Cipher<string, string> {
    private:
        map<string, string> encryptMap;
        map<string, string> decryptMap;

    public:
        SubstitutionCipher(map<string, string> encryptMap) : encryptMap(encryptMap), decryptMap(encryptMap) {};
        SubstitutionCipher(map<string, string> encryptMap, map<string, string> decryptMap) :
                encryptMap(encryptMap), decryptMap(decryptMap) {};
        string encrypt(string plainText);
        string decrypt(string cipherText);
    };
}

#endif
