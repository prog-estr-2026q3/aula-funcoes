#include <stdio.h>

/* Tentativa intencional de chamada a uma funcao antes de sua declaracao.
   Com 'gcc -std=c11 -Wall -Wextra', gera erro: implicit declaration of function 'somar'.
   Para compilar com sucesso, veja '12_prototipo_arquivo_unico.c'. */

int main(void) {
    //int resultado = somar(10, 20); // Erro: 'somar' ainda nao foi declarada
    //printf("Resultado: %d\n", resultado);
    return 0;
}

int somar(int a, int b) {
    return a + b;
}
