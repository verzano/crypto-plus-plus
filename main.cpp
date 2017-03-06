#include <iostream>

#include "atbash.h"
#include "caesar.h"

int main() {
    std::string plainText = "This is some bullshit plainText";

    std::cout << "===== Caeser =====" << std::endl;
    std::cout << "plain     : " << plainText << std::endl;
    std::string caesarEncrypted = caesar::Caesar::encrypt(plainText);
    std::cout << "encrypted : " << caesarEncrypted << std::endl;
    std::string caesarDecrypted = caesar::Caesar::decrypt(caesarEncrypted);
    std::cout << "decrypted : " << caesarDecrypted << std::endl << std::endl;

    std::cout << "===== Atbash =====" << std::endl;
    std::cout << "plain     : " << plainText << std::endl;
    std::string atbashEncrypted = atbash::Atbash::encrypt(plainText);
    std::cout << "encrypted : " << atbashEncrypted << std::endl;
    std::string atbashDecrypted = atbash::Atbash::decrypt(atbashEncrypted);
    std::cout << "decrypted : " << atbashDecrypted << std::endl << std::endl;

    return EXIT_SUCCESS;
}