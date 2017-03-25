#include "shiftcipher.h"

#include "mathplusplus.h"

using namespace mathplusplus;

namespace cryptoplusplus {
// TODO increase the efficiency of this
map<string, string> ShiftCipher::buildShiftedMap(int shift, vector<string> alphabet) {
  int alphabetSize = (int) alphabet.size();

  map<string, string> encryptMap;
  for (int i = 0; i < alphabetSize; i++) {
    encryptMap[alphabet[i]] = alphabet[modulo(i + shift, alphabetSize)];
  }
  return encryptMap;
};

ShiftCipher::ShiftCipher(int shift, vector<string> alphabet) :
    SubstitutionCipher(buildShiftedMap(shift, alphabet), buildShiftedMap(-shift, alphabet)) {}
}