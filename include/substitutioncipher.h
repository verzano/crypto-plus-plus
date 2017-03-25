#ifndef CRYPTO_PLUS_PLUS_SUBSTITUTIONCIPHER_H
#define CRYPTO_PLUS_PLUS_SUBSTITUTIONCIPHER_H

#include "cipher.h"

#include <map>

using namespace std;

// TODO modify this so it can be more than it uses a pointer instead of a string as its type
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

  map<string, string> getEncryptMap() { return encryptMap; };
  void setEncryptMap(map<string, string> encryptMap) { this->encryptMap = encryptMap; };

  map<string, string> getDecryptMap() { return decryptMap; };
  void setDecryptMap(map<string, string> decryptMap) { this->decryptMap = decryptMap; };
};
}

#endif
