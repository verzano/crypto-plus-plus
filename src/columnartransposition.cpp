#include "columnartransposition.h"

namespace cryptoplusplus {
ColumnarTransposition::ColumnarTransposition(map<unsigned long, unsigned long> swaps) {
  // TODO make this a deep copy instead of a reference one, unless that's what this does...
  encryptMap = swaps;

  // TODO could try and get a BiDi map to do this much easier
  for (auto const &entry : encryptMap) {
    decryptMap[entry.second] = entry.first;
  }
}

string ColumnarTransposition::encrypt(string plainText) {
  unsigned long plainTextLength = plainText.length();
  unsigned long mapSize = encryptMap.size();
  unsigned long cipherLength = plainTextLength + (plainTextLength % mapSize);
  // TODO pad the cipher text with random chars if it isn't the correct length based on the length of the encrypt map
  string cipherText(cipherLength, ' ');

  for (unsigned long i = 0; i < plainTextLength; i++) {
    unsigned long newPos = encryptMap[i % mapSize] + (i / mapSize) * mapSize;
    cipherText[newPos] = plainText[i];
  }
  return cipherText;
}

string ColumnarTransposition::decrypt(string cipherText) {
  unsigned long cipherTextLength = cipherText.length();
  // TODO instantiate plainText???
  string plainText(cipherTextLength, ' ');

  for (unsigned long i = 0; i < cipherTextLength; i++) {
    unsigned long mapSize = decryptMap.size();
    unsigned long newPos = decryptMap[i % mapSize] + (i / mapSize) * mapSize;
    plainText[newPos] = cipherText[i];
  }
  return plainText;
}
}