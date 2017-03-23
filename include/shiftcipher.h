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
        map<string, string> buildShiftedMap(int shift, vector<string> alphabet);
    public:
        ShiftCipher(int shift, vector<string> alphabet);
    };
}

#endif
