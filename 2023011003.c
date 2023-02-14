#include <stdio.h>
#define TRUE 1
#define FALSE 0

int funcao(int a, int b) {
  
  while (b != 0 && a % 10 == b % 10) {
    a = a/10;
    b = b/10;
  }

  if (b == 0)
    return TRUE;
  else
    return FALSE;