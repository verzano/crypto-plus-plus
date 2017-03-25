#include "rot13.h"

#define SHIFT 13
#define ALPHABET {"A","B","C","D","E","F","G","H","I","J","K","L","M","N","O","P","Q","R","S","T","U","V","W","X","Y","Z"}

namespace cryptoplusplus {
Rot13::Rot13() : ShiftCipher(SHIFT, ALPHABET) {};
}
