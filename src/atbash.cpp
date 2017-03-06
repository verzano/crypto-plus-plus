#include "atbash.h"

namespace atbash {
    std::map<char, char> Atbash::encryptMap = {
            {'A', 'Z'}, {'B', 'Y'}, {'C', 'X'},
            {'D', 'W'}, {'E', 'V'}, {'F', 'U'},
            {'G', 'T'}, {'H', 'S'}, {'I', 'R'},
            {'J', 'Q'}, {'K', 'P'}, {'L', 'O'},
            {'M', 'N'}, {'N', 'M'}, {'O', 'L'},
            {'P', 'K'}, {'Q', 'J'}, {'R', 'I'},
            {'S', 'H'}, {'T', 'G'}, {'U', 'F'},
            {'V', 'E'}, {'W', 'D'}, {'X', 'C'},
            {'Y', 'B'}, {'Z', 'A'}
    };

    std::map<char, char> Atbash::decryptMap = std::map<char, char>(encryptMap);

    std::string Atbash::encrypt(std::string plainText) {
        std::string cipherText;
        for (char c : plainText) {
            cipherText += std::isalpha(c) ? encryptMap[std::toupper(c)] : c;
        }
        return cipherText;
    }

    std::string Atbash::decrypt(std::string cipherText) {
        std::string plainText;
        for (char c : cipherText) {
            plainText += std::isalpha(c) ? decryptMap[std::toupper(c)] : c;
        }
        return plainText;
    }
}

