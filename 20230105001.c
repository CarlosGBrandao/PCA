#include <stdio.h>

int scanIntIntervalo(int min, int max) {
    int num;
    do {
        printf("Digite um número entre %d e %d: ", min, max);
        scanf("%d", &num);
    } while (num < min || num > max);
    return num;
}

float percentual(int menor, int maior) {
    return 100.0 * menor / maior;
}

float absdif(float a, float b) {
    if (a > b) {
        return a - b;
    } else {
        return b - a;
    }
}

int main() {
    int x, y, maior, menor;
    float p;
    x = scanIntIntervalo(0, 1000);
    y = scanIntIntervalo(0, 1000);
    if (x > y) {
        maior = x;
        menor = y;
    } else {
        maior = y;
        menor = x;
    }
    p = percentual(menor, maior);
    printf("Percentual do menor em relação ao maior: %.2f%%\n", p);
    printf("Módulo da diferença entre o maior e o menor: %.2f\n", absdif(maior, menor));
    return 0;
}