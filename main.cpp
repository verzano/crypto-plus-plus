#include <iostream>

#include "cipher.h"

#include "affine.h"
#include "atbash.h"
#include "caesar.h"

using namespace cryptoplusplus;

int main() {
    const std::string plainText = "This is some bullshit plainText";
    std::cout << "===== Plain Text =====" << std::endl;
    std::cout << plainText << std::endl << std::endl;

    std::cout << "===== Affine =====" << std::endl;
    Affine affine = Affine(5, 8);
    std::string affineEncrypted = affine.encrypt(plainText);
    std::cout << "encrypted : " << affineEncrypted << std::endl;
    std::string affineDecrypted = affine.decrypt(affineEncrypted);
    std::cout << "decrypted : " << affineDecrypted << std::endl << std::endl;

    std::cout << "===== Atbash =====" << std::endl;
    Atbash atbash = Atbash();
    std::string atbashEncrypted = atbash.encrypt(plainText);
    std::cout << "encrypted : " << atbashEncrypted << std::endl;
    std::string atbashDecrypted = atbash.decrypt(atbashEncrypted);
    std::cout << "decrypted : " << atbashDecrypted << std::endl << std::endl;

    std::cout << "===== Caesar =====" << std::endl;
    Caesar caesar = Caesar();
    std::string caesarEncrypted = caesar.encrypt(plainText);
    std::cout << "encrypted : " << caesarEncrypted << std::endl;
    std::string caesarDecrypted = caesar.decrypt(caesarEncrypted);
    std::cout << "decrypted : " << caesarDecrypted << std::endl;

    return EXIT_SUCCESS;
}