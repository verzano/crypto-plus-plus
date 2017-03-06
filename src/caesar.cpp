#include "caesar.h"

namespace caesar {
    std::map<char, char> Caesar::encryptMap = {
            {'A', 'X'}, {'B', 'Y'}, {'C', 'Z'},
            {'D', 'A'}, {'E', 'B'}, {'F', 'C'},
            {'G', 'D'}, {'H', 'E'}, {'I', 'F'},
            {'J', 'G'}, {'K', 'H'}, {'L', 'I'},
            {'M', 'J'}, {'N', 'K'}, {'O', 'L'},
            {'P', 'M'}, {'Q', 'N'}, {'R', 'O'},
            {'S', 'P'}, {'T', 'Q'}, {'U', 'R'},
            {'V', 'S'}, {'W', 'T'}, {'X', 'U'},
            {'Y', 'V'}, {'Z', 'W'}
    };

    std::map<char, char> Caesar::decryptMap = {
            {'X', 'A'}, {'Y', 'B'}, {'Z', 'C'},
            {'A', 'D'}, {'B', 'E'}, {'C', 'F'},
            {'D', 'G'}, {'E', 'H'}, {'F', 'I'},
            {'G', 'J'}, {'H', 'K'}, {'I', 'L'},
            {'J', 'M'}, {'K', 'N'}, {'L', 'O'},
            {'M', 'P'}, {'N', 'Q'}, {'O', 'R'},
            {'P', 'S'}, {'Q', 'T'}, {'R', 'U'},
            {'S', 'V'}, {'T', 'W'}, {'U', 'X'},
            {'V', 'Y'}, {'W', 'Z'}
    };

    std::string Caesar::encrypt(std::string plainText) {
        std::string cipherText;
        for (char c : plainText) {
            cipherText += encryptMap[std::toupper(c)];
        }
        return cipherText;
    }

    std::string Caesar::decrypt(std::string cipherText) {
        std::string plainText;
        for (char c : cipherText) {
            plainText += decryptMap[std::toupper(c)];
        }
        return plainText;
    }
}