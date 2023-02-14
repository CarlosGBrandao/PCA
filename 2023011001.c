#include <stdio.h>


int contador(int n, int d) {

  int conta, resto;

  conta = 0;

  while (n != 0) {
    resto = n % 10;
    n = n/10;
    if (resto == d)
      conta++;
  }

  return conta;
}