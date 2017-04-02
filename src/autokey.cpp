#include "autokey.h"

namespace cryptoplusplus {
string AutoKey::encrypt(string plainText) {
  string cipherText;

  string key = keyPrefix + plainText;
  for (int i = 0; i < plainText.length(); i++) {
    int val = key[i] + plainText[i] - 65;
    if (val > 90) {
      val -= 26;
    }
    cipherText += (char) val;
  }

  return cipherText;
}

string AutoKey::decrypt(string cipherText) {
  string plainText;

  for (int i = 0; i < cipherText.length(); i++) {
    int val = 65 + cipherText[i];

    if (i >= keyPrefix.length()) {
      val -= plainText[i - keyPrefix.length()];
    } else {
      val -= keyPrefix[i];
    }

    if (val < 65) {
      val += 26;
    }
    plainText += (char) val;
  }

  return plainText;
}
}
