#include <stdio.h>

void imprimir_dados(const int *valor) {
    printf("Valor: %d\n", *valor);
    /* Descomentar a linha abaixo gera erro de compilacao:
       *valor = 100; // assignment of read-only location '*valor'
    */
}

int main(void) {
    int numero = 42;
    imprimir_dados(&numero);
    return 0;
}
