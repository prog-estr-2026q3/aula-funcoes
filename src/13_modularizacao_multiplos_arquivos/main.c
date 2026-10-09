#include <stdio.h>
#include "matematica.h"

int main(void) {
    int v1 = 12;
    int v2 = 4;

    printf("Soma: %d\n", somar(v1, v2));
    printf("Diferenca: %d\n", subtrair(v1, v2));
    printf("Produto: %d\n", multiplicar(v1, v2));

    return 0;
}
