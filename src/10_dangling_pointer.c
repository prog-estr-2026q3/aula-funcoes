#include <stdio.h>

/* Demonstracao de vulnerabilidade: retorno indevido de endereco local.
   Compiladores modernos (como o GCC) emitem aviso [-Wreturn-local-addr]
   e substituem o retorno por NULL. Com AddressSanitizer, dispara erro. */
int* criar_valor(void) {
    int local = 42;
    return &local; /* ERRO GRAVE: endereco de variavel local automatica */
}

int main(void) {
    int *ptr = criar_valor();
    if (ptr != NULL) {
        printf("Valor apontado: %d\n", *ptr);
    } else {
        printf("GCC substituiu defensivamente o ponteiro local por NULL.\n");
    }
    return 0;
}
