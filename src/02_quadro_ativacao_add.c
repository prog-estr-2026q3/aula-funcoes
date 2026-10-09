#include <stdio.h>

int add(int a, int b) {
    int resultado = a + b;
    return resultado;
}

int main(void) {
    int soma = add(10, 20);
    printf("Soma: %d\n", soma);
    return 0;
}
