#ifndef CRYPTO_PLUS_PLUS_SHIFTCIPHER_H
#define CRYPTO_PLUS_PLUS_SHIFTCIPHER_H

#include "substitutioncipher.h"

#include <string>
#include <vector>

using namespace std;

// TODO this is implemented with chars/strings but could certainly be done even more generically
// TODO come up with better/more ways to initialize this
namespace cryptoplusplus {
    class ShiftCipher : public SubstitutionCipher {
    private:
        map<char, char> buildShiftedMap(int shift, vector<char> alphabet);
    public:
        ShiftCipher(int shift, vector<char> alphabet) : SubstitutionCipher(buildShiftedMap(shift, alphabet),
                                                                           buildShiftedMap(-shift, alphabet)) {}
    };
}



#endif
