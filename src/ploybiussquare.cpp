#include "polybiussquare.h"

namespace cryptoplusplus {
PolybiusSquare::PolybiusSquare(vector<string> keys, vector<string> alphabet) :
    SubstitutionCipher(buildEncryptMap(keys, alphabet), buildDecryptMap(keys, alphabet)) {};

map<string, string> PolybiusSquare::buildEncryptMap(vector<string> keys, vector<string> alphabet) {
  map<string, string> encryptMap;

  int i = 0;
  for (auto prefix : keys) {
    for (auto suffix : keys) {
      encryptMap[alphabet[i++]] = prefix + suffix;
    }
  }

  return encryptMap;
};

map<string, string> PolybiusSquare::buildDecryptMap(vector<string> keys, vector<string> alphabet) {
  map<string, string> decryptMap;

  int i = 0;
  for (auto prefix : keys) {
    for (auto suffix : keys) {
      decryptMap[prefix + suffix] = alphabet[i++];
    }
  }

  return decryptMap;
};
}
