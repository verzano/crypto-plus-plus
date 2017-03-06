#include <iostream>

#include "caesar.h"

int main() {
    std::string plainText = "This is some bullshit plainText";
    std::string encrypted = caesar::Caesar::encrypt(plainText);
    std::string decrypted = caesar::Caesar::decrypt(encrypted);

    std::cout << "plain     : " << plainText << std::endl;
    std::cout << "encrypted : " << encrypted << std::endl;
    std::cout << "decrypted : " << decrypted << std::endl;

    return EXIT_SUCCESS;
}