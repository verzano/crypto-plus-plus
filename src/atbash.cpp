#include "atbash.h"

// TODO need to decide what to do about characters that shouldn't be in there
// TODO encryption and decryption are identical, so fix that...
namespace cryptoplusplus {
    Atbash::Atbash() : SimpleSubstitution({
            {'A', 'Z'}, {'B', 'Y'}, {'C', 'X'}, {'D', 'W'}, {'E', 'V'}, {'F', 'U'},
            {'G', 'T'}, {'H', 'S'}, {'I', 'R'}, {'J', 'Q'}, {'K', 'P'}, {'L', 'O'},
            {'M', 'N'}, {'N', 'M'}, {'O', 'L'}, {'P', 'K'}, {'Q', 'J'}, {'R', 'I'},
            {'S', 'H'}, {'T', 'G'}, {'U', 'F'}, {'V', 'E'}, {'W', 'D'}, {'X', 'C'},
            {'Y', 'B'}, {'Z', 'A'}
    }) {};
}

