#include "substitutioncipher.h"

namespace cryptoplusplus {
string SubstitutionCipher::encrypt(string plainText) {
  string cipherText;

  unsigned long index = 0;
  unsigned long chunkLength = 1;
  string plainChunk;
  while (index + chunkLength <= plainText.length()) {
    plainChunk = plainText.substr(index, chunkLength);
    if (encryptMap.count(plainChunk) == 1) {
      cipherText += encryptMap[plainChunk];
      index += chunkLength;
      chunkLength = 1;
    } else {
      chunkLength++;
    }
  }
  return cipherText;
}

string SubstitutionCipher::decrypt(string cipherText) {
  string plainText;

  unsigned long index = 0;
  unsigned long chunkLength = 1;
  string cipherChunk;
  while (index + chunkLength <= cipherText.length()) {
    cipherChunk = cipherText.substr(index, chunkLength);
    if (decryptMap.count(cipherChunk) == 1) {
      plainText += decryptMap[cipherChunk];
      index += chunkLength;
      chunkLength = 1;
    } else {
      chunkLength++;
    }
  }
  return plainText;
}
}