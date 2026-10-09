#include <stdio.h>

int divisao_segura(int dividendo, int divisor, int *quociente, int *resto) {
    if (divisor == 0) {
        return -1; /* Codigo de erro: divisao por zero */
    }
    *quociente = dividendo / divisor;
    *resto = dividendo % divisor;
    return 0; /* Codigo de sucesso */
}

int main(void) {
    int q, r;
    if (divisao_segura(17, 5, &q, &r) == 0) {
        printf("Quociente: %d, Resto: %d\n", q, r);
    } else {
        printf("Erro: divisao por zero detectada.\n");
    }
    return 0;
}
