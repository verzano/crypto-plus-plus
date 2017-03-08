#include "shiftcipher.h"

#include "mathplusplus.h"

using namespace mathplusplus;

namespace cryptoplusplus {
    // TODO increase the efficiency of this
    map<char, char> ShiftCipher::buildShiftedMap(int shift, vector<char> alphabet) {
        int alphabetSize = (int) alphabet.size();

        map<char, char> encryptMap;
        for (int i = 0; i < alphabetSize; i++) {
            encryptMap[alphabet[i]] = alphabet[modulo(i + shift, alphabetSize)];
        }
        return encryptMap;
    };

    ShiftCipher::ShiftCipher(int shift, vector<char> alphabet) :
            SubstitutionCipher(buildShiftedMap(shift, alphabet), buildShiftedMap(-shift, alphabet)) {}
}