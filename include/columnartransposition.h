#ifndef CRYPTO_PLUS_PLUS_COLUMNARTRANSPOSITION_H
#define CRYPTO_PLUS_PLUS_COLUMNARTRANSPOSITION_H

#include "cipher.h"

#include <map>
#include <string>

using namespace std;

// TODO make a generic TranspositionCipher based on this
namespace cryptoplusplus {
class ColumnarTransposition : public Cipher<string, string> {
 private:
  map<unsigned long, unsigned long> encryptMap;
  map<unsigned long, unsigned long> decryptMap;

 public:
  ColumnarTransposition(map<unsigned long, unsigned long> swaps);
  string encrypt(string plainText);
  string decrypt(string cipherText);
};
}

#endif
