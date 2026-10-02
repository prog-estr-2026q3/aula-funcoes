#include <stdio.h>

void demonstrar_escopo(int parametro) {
    /* Variavel local da funcao: visivel em todo o corpo da rotina */
    int variavel_funcao = parametro * 2;

    if (variavel_funcao > 10) {
        /* Variavel de bloco aninhado: visivel apenas dentro do 'if' */
        int variavel_bloco = variavel_funcao - 5;
        printf("Bloco aninhado: %d\n", variavel_bloco);
    } /* 'variavel_bloco' encerra seu tempo de vida aqui */

    /* printf("%d\n", variavel_bloco); // Erro: fora de escopo! */
    printf("Funcao: %d\n", variavel_funcao);
} /* 'variavel_funcao' encerra seu tempo de vida aqui */

int main(void) {
    demonstrar_escopo(8);
    /* printf("%d\n", variavel_funcao); // Erro: inacessivel fora da funcao */
    return 0;
}
