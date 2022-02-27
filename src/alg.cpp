// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  setlocale(LC_ALL, "Russian");
  cout << "Введите число: ";
  cin >> value;
  int i=2;
  while (i*i<=value) {
    if (value%i==0)
      return false;
    i++; }
  return true;
}

uint64_t nPrime(uint64_t n) {
  setlocale(LC_ALL, "Russian");
  int n, i, j, a;
  cout << "Введите номер числа в ряду: ";
  cin >> n;
  a=0; i-2; j=2;
  for (i=2; ;i++) {
    for (j=2; j*j<=i; j++) {
      if (i%j==0) {
        a++;
        if (a==n) {
          cout<<i;
          break; }
      }
    }
  }
  system("Pause");
  return i;
}

uint64_t nextPrime(uint64_t value) {
  setlocale(LC_ALL, "Russian");
  cout << "Введите число: ";
  cin >> value;
  i=0; j=2;
  for (i=value+1;;i++) {
    while(j*j<=i) {
      if (i%j==0)
        break;
    j++; }
  }
  return i;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum=0;
  for(int i=2; i<hbound; i++) {
    if (checkPrime(i))
      sum += i;
  }
  return sum;
}
