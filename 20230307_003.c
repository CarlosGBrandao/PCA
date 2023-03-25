#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 10;
    float f = 3.14;
    char c = 'a';
    int *p_i = &i;
    float *p_f = &f;
    char *p_c = &c;

    printf("Antes da modificação:\n");
    printf("i = %d\n", i);
    printf("f = %.2f\n", f);
    printf("c = %c\n", c);

    *p_i = 20;
    *p_f = 2.71;
    *p_c = 'b';

    printf("\nDepois da modificação:\n");
    printf("i = %d\n", i);
    printf("f = %.2f\n", f);
    printf("c = %c\n", c);

    return 0;
}