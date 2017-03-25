#ifndef CRYPTO_PLUS_PLUS_POLYBIUSSQUARE_H
#define CRYPTO_PLUS_PLUS_POLYBIUSSQUARE_H

#include "substitutioncipher.h"

#include <vector>

namespace cryptoplusplus {
class PolybiusSquare : public SubstitutionCipher {
 public:
  PolybiusSquare(vector<string> keys, vector<string> alphabet);

  map<string, string> buildEncryptMap(vector<string> keys, vector<string> alphabet);
  map<string, string> buildDecryptMap(vector<string> keys, vector<string> alphabet);
};
}

#endif
