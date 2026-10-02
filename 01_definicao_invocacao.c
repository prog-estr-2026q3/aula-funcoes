#include <stdio.h>

// 1. Definicoes das funcoes
int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int main(void) {
    int soma = add(10, 20); // primeira invocacao: desvio para add
    int dif  = sub(30, 15); // segunda invocacao: desvio para sub

    printf("Soma: %d, Diferenca: %d\n", soma, dif);
    return 0;
}
