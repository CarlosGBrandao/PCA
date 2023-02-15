#include <stdio.h>
#include <locale.h>
int main() {
    setlocale(LC_ALL, "Portuguese");
  int a, b, h, x;
  int i, j;
  printf("Digite o tamanho maximo da hipotenusa: \n");
  scanf("%d", &h);
  for (a = 1; a <= h; a++){
      for (b = 1; b <= h; b++){
            for(x= 1; x<=h; x++){
        if ((a*a) + (b*b) == x*x){

            printf("Catetos %d e %d, hipotenusa = %d\n", a, b, x);
        }
      }
  }
  }

  return 0;
}