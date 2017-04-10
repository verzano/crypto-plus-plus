#include "bifid.h"

namespace cryptoplusplus {
string Bifid::encrypt(string plainText) {
  string shiftedText;
  string left;
  string right;
  string polybiusCipherText = polybiusSquare.encrypt(plainText);
  for (unsigned long i = 0; i < polybiusCipherText.length(); i += 2) {
    if ((i / 2) % period == 0) {
      shiftedText += left + right;
      left.clear();
      right.clear();
    }

    left += polybiusCipherText[i];
    right += polybiusCipherText[i + 1];
  }

  shiftedText += left + right;
  return polybiusSquare.decrypt(shiftedText);
}

string Bifid::decrypt(string cipherText) {
  string shiftedText;
  string left;
  string right;
  string polybiusCipherText = polybiusSquare.encrypt(cipherText);

  unsigned long shiftSize = period * 2;
  for (unsigned long i = 0; i < polybiusCipherText.length() - shiftSize; i += shiftSize) {
    left = polybiusCipherText.substr(i, period);
    right = polybiusCipherText.substr(i + period, period);

    for (unsigned long j = 0; j < left.length(); j++) {
      shiftedText += left[j];
      shiftedText += right[j];
    }
  }

  // TODO extract this into a 'merge' method
  unsigned long remainingPeriod = (polybiusCipherText.length() - shiftedText.length()) / 2;
  left = polybiusCipherText.substr(shiftedText.length(), remainingPeriod);
  right = polybiusCipherText.substr(shiftedText.length() + remainingPeriod, remainingPeriod);

  for (unsigned long j = 0; j < left.length(); j++) {
    shiftedText += left[j];
    shiftedText += right[j];
  }

  return polybiusSquare.decrypt(shiftedText);
}
}
