#ifndef CRYPTO_PLUS_PLUS_SIMPLE_SUBSTITUTION_H
#define CRYPTO_PLUS_PLUS_SIMPLE_SUBSTITUTION_H

namespace cryptoplusplus {
    template <class P, class C> class Cipher {
    public:
        virtual C encrypt(P plainText)=0;
        virtual P decrypt(C cipherText)=0;
    };
}

#endif
