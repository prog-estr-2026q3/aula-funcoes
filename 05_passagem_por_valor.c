#include <stdio.h>

int alterar_valores(int a, int b) {
    a = 100;
    b = 200;
    return a + b;
}

int main(void) {
    int x = 1;
    int y = 2;

    printf("Antes:   x = %d, y = %d\n", x, y);
    int soma = alterar_valores(x, y);
    printf("Soma:    %d\n", soma);
    printf("Depois:  x = %d, y = %d (inalterados!)\n", x, y);

    return 0;
}
