#include <stdio.h>

// 1. Declaracoes previas (prototipos de funcao)
int calcular_quadrado(int n);
int somar(int a, int b);

int main(void) {
    int x = 5;
    int y = 3;

    // O compilador valida as chamadas atraves dos prototipos declarados acima
    int soma = somar(x, y);
    int quad = calcular_quadrado(soma);

    printf("Soma: %d, Quadrado da soma: %d\n", soma, quad);
    return 0;
}

// 2. Definicoes com os corpos das funcoes
int somar(int a, int b) {
    return a + b;
}

int calcular_quadrado(int n) {
    return n * n;
}
