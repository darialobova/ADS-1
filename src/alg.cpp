// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  for (int x = 2; x*x <= (value); x++) {
      if (value % x == 0) {
        return false;
      }
  }
  return true;
}

uint64_t nPrime(uint64_t n) {
  int k = 0;
  uint64_t x = 1;
  while (k != n) {
    x++;
    if (checkPrime(x)) {
      k++;
    }
  }
  return x;
}

uint64_t nextPrime(uint64_t value) {
  int z = value;
  while (true) {
    z++;
    if (checkPrime(z))
      return z;
  }
}

uint64_t sumPrime(uint64_t hbound) {
  uint64_t sum = 0;
  for (int x = 2; x < hbound; x++) {
    if (checkPrime(x)) {
      sum += x;
    }
  }
  return sum;
}
