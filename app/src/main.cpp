#include <iostream>

#include "cipher.h"

#include "affine.h"
#include "atbash.h"
#include "caesar.h"

using namespace std;
using namespace cryptoplusplus;

int main() {
    const string plainText = "This is some bullshit plainText";
    cout << "===== Plain Text =====" << endl;
    cout << plainText << endl << endl;

    cout << "===== Affine =====" << endl;
    Affine affine = Affine(5, 8);
    string affineEncrypted = affine.encrypt(plainText);
    cout << "encrypted : " << affineEncrypted << endl;
    string affineDecrypted = affine.decrypt(affineEncrypted);
    cout << "decrypted : " << affineDecrypted << endl << endl;

    cout << "===== Atbash =====" << endl;
    Atbash atbash = Atbash();
    string atbashEncrypted = atbash.encrypt(plainText);
    cout << "encrypted : " << atbashEncrypted << endl;
    string atbashDecrypted = atbash.decrypt(atbashEncrypted);
    cout << "decrypted : " << atbashDecrypted << endl << endl;

    cout << "===== Caesar =====" << endl;
    Caesar caesar = Caesar();
    string caesarEncrypted = caesar.encrypt(plainText);
    cout << "encrypted : " << caesarEncrypted << endl;
    string caesarDecrypted = caesar.decrypt(caesarEncrypted);
    cout << "decrypted : " << caesarDecrypted << endl;

    return EXIT_SUCCESS;
}