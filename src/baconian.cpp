#include "baconian.h"

namespace cryptoplusplus {
    Baconian::Baconian() : SubstitutionCipher({
            {"A", "AAAAA"}, {"B", "AAAAB"}, {"C", "AAABA"}, {"D", "AAABB"}, {"E", "AABAA"}, {"F", "AABAB"},
            {"G", "AABBA"}, {"H", "AABBB"}, {"I", "ABAAA"}, {"J", "ABAAA"}, {"K", "ABAAB"}, {"L", "ABABA"},
            {"M", "ABABB"}, {"N", "ABBAA"}, {"O", "ABBAB"}, {"P", "ABBBA"}, {"Q", "ABBBB"}, {"R", "BAAAA"},
            {"S", "BAAAB"}, {"T", "BAABA"}, {"U", "BAABB"}, {"V", "BAABB"}, {"W", "BABAA"}, {"X", "BABAB"},
            {"Y", "BABBA"}, {"Z", "BABBB"}
    }, {
            {"AAAAA", "A"}, {"AAAAB", "B"}, {"AAABA", "C"}, {"AAABB", "D"}, {"AABAA", "E"}, {"AABAB", "F"},
            {"AABBA", "G"}, {"AABBB", "H"}, {"ABAAA", "I"}, {"ABAAB", "K"}, {"ABABA", "L"}, {"ABABB", "M"},
            {"ABBAA", "N"}, {"ABBAB", "O"}, {"ABBBA", "P"}, {"ABBBB", "Q"}, {"BAAAA", "R"}, {"BAAAB", "S"},
            {"BAABA", "T"}, {"BAABB", "U"}, {"BABAA", "W"}, {"BABAB", "X"}, {"BABBA", "Y"}, {"BABBB", "Z"}
    }) {};
}