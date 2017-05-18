#ifndef CRYPTO_PLUS_PLUS_TRIFID_H
#define CRYPTO_PLUS_PLUS_TRIFID_H

#include "polybiussquare.h"

#define KEYS {"1", "2", "3"}

// TODO make a PolybiusCube that is conceptually the three squares as one
namespace cryptoplusplus {
class Trifid : public Cipher<string, string> {
 private:
  PolybiusSquare square1;
  PolybiusSquare square2;
  PolybiusSquare square3;
  unsigned long period;

 public:
  Trifid(unsigned long period, vector<string> alphabet1, vector<string> alphabet2, vector<string> alphabet3)
      : period(period), square1(KEYS, alphabet1), square2(KEYS, alphabet2), square3(KEYS, alphabet3) {};
  string encrypt(string plainText);
  string decrypt(string cipherText);
};
}

#endif
