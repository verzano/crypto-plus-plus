#ifndef CRYPTO_PLUS_PLUS_AUTOKEY_H
#define CRYPTO_PLUS_PLUS_AUTOKEY_H

#include "cipher.h"

#include <map>
#include <string>

using namespace std;

namespace cryptoplusplus {
class AutoKey : public Cipher<string, string> {
 private:
  string keyPrefix;
 public:
  AutoKey(string keyPrefix) : keyPrefix(keyPrefix) {};
  string encrypt(string plainText);
  string decrypt(string cipherText);
};
}

#endif
