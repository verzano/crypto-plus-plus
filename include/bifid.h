#ifndef CRYPTO_PLUS_PLUS_BIFID_H
#define CRYPTO_PLUS_PLUS_BIFID_H

#include "polybiussquare.h"

#define KEYS {"1", "2", "3", "4", "5"}

namespace cryptoplusplus {
class Bifid : public Cipher<string, string> {
 private:
  PolybiusSquare polybiusSquare;
  unsigned long period;

 public:
  Bifid(unsigned long period, vector<string> alphabet) : period(period), polybiusSquare(KEYS, alphabet) {};
  string encrypt(string plainText);
  string decrypt(string cipherText);
};
}

#endif
