#ifndef CRYPTO_PLUS_PLUS_TRIFID_H
#define CRYPTO_PLUS_PLUS_TRIFID_H

#include "polybiussquare.h"

namespace cryptoplusplus {
class trifid : public Cipher<string, string> {
 private:
  PolybiusSquare square1;
  PolybiusSquare square2;
  PolybiusSquare square3;

 public:
  string encrypt(string plainText);
  string decrypt(string cipherText);
};
}


#endif
