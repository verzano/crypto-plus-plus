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
  map<int, int> swapMap;

 public:
  ColumnarTransposition(map<int, int> swapMap) : swapMap(swapMap) {};
  string encrypt(string plainText);
  string decrypt(string cipherText);
};
}

#endif
