#include "mathplusplus.h"

// TODO yes we could use the standard math.h to do these operations I bet but this is more fun and helps with learning
namespace mathplusplus {
int modulo(int a, int b) {
  int mod = a % b;
  return (mod >= 0) ^ (b < 0) ? mod : mod + b;
}

// TODO less naive version would be nice, and a faster one
//      Do this with both Euler and Extended Euclidean
//      Add a boolean to allow selection of the method by default use Extended Euclidean
// TODO a better name would be good
int modularInverse(int a, int m) {
  int mod = a % m;
  for (int i = 1; i < m; i++) {
    if ((mod * i) % m == 1) {
      return i;
    }
  }
  return -1;
}
}