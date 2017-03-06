#ifndef CRYPTO_PLUS_PLUS_SIMPLESUBSTITUTION_H
#define CRYPTO_PLUS_PLUS_SIMPLESUBSTITUTION_H

#include "cipher.h"

#include <map>
#include <string>

using namespace std;

// TODO make this more like an AlphabeticSubstitution class that
namespace cryptoplusplus {
    class SimpleSubstitution : public Cipher<string, string> {
    private:
        map<char, char> encryptMap;
        map<char, char> decryptMap;

    public:
        SimpleSubstitution(map<char, char> encryptMap) :
                encryptMap(encryptMap), decryptMap(encryptMap) {};
        SimpleSubstitution(map<char, char> encryptMap, map<char, char> decryptMap) :
                encryptMap(encryptMap), decryptMap(decryptMap) {};
        string encrypt(string plainText);
        string decrypt(string cipherText);
    };
}

#endif
