#include <stdio.h>
#include <stdlib.h>

void troca(float *a, float *b) {
    float temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    float x = 3.14, y = 2.71;

    printf("Antes da troca: x = %f, y = %f\n", x, y);

    troca(&x, &y);

    printf("Depois da troca: x = %f, y = %f\n", x, y);

    return 0;
}