#include "caesar.h"

// TODO need to decide what to do about characters that shouldn't be in there
namespace cryptoplusplus {
    Caesar::Caesar() : SimpleSubstitution({
            {'A', 'X'}, {'B', 'Y'}, {'C', 'Z'}, {'D', 'A'}, {'E', 'B'}, {'F', 'C'},
            {'G', 'D'}, {'H', 'E'}, {'I', 'F'}, {'J', 'G'}, {'K', 'H'}, {'L', 'I'},
            {'M', 'J'}, {'N', 'K'}, {'O', 'L'}, {'P', 'M'}, {'Q', 'N'}, {'R', 'O'},
            {'S', 'P'}, {'T', 'Q'}, {'U', 'R'}, {'V', 'S'}, {'W', 'T'}, {'X', 'U'},
            {'Y', 'V'}, {'Z', 'W'}
    }) {};
}