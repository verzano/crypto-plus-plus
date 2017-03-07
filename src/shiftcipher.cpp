#include "shiftcipher.h"

namespace cryptoplusplus {
    // TODO increase the efficiency of this
    map<char, char> ShiftCipher::buildShiftedMap(int shift, vector<char> alphabet) {
        int alphabetSize = (int) alphabet.size();

        map<char, char> encryptMap;
        for (int i = 0; i < alphabetSize; i++) {
            // TODO stupid negative modulo fucking our shit up
            encryptMap[alphabet[i]] = alphabet[((i + shift) % alphabetSize + alphabetSize)%alphabetSize];
        }
        return encryptMap;
    };
}