# Exemplos de Código - Capítulo 03: Funções e Modularização

Este diretório contém todos os exemplos de código-fonte apresentados no Capítulo 03 das notas de aula de Programação Estruturada.

## Compilação

Para compilar todos os programas válidos de uma só vez:

```bash
make
```

Os executáveis serão gerados no diretório `build/`.

Para compilar um programa específico manualmente:

```bash
gcc -std=c11 -Wall -Wextra -pedantic 01_definicao_invocacao.c -o build/01_definicao_invocacao -lm
```

Para compilar o exemplo de *dangling pointer* com o AddressSanitizer (ASan):

```bash
make asan
./build/10_dangling_pointer_asan
```

Para testar o erro de compilação pedagógico de chamada sem protótipo:

```bash
make erro-11
```

Para limpar todos os binários gerados:

```bash
make clean
```

## Execução

Após a compilação, execute os binários a partir do diretório `build/`:

```bash
./build/01_definicao_invocacao
./build/03_reuso_quadro
./build/04_encadeamento_funcoes
./build/06_swap_ponteiros
./build/07_parametros_saida_status
./build/13_modularizacao_app
```

## Relação dos Arquivos com o Texto das Notas de Aula

1. `01_definicao_invocacao.c`: Definição de funções (`add`, `sub`) e desvio de controle a partir da `main` (`code:definicao_funcao_legado`).
2. `02_quadro_ativacao_add.c`: Função com parâmetros e variável local para análise do quadro de ativação (`code:funcao_add_quadro`).
3. `03_reuso_quadro.c`: Reutilização da mesma área de memória da pilha por quadros de ativação sequenciais não aninhados.
4. `04_encadeamento_funcoes.c`: Encadeamento de chamadas com quatro níveis de profundidade na pilha de execução (`code:encadeamento_funcoes`).
5. `05_passagem_por_valor.c`: Demonstração do isolamento de dados na passagem por valor estrita (`code:passagem_por_valor`).
6. `06_swap_ponteiros.c`: Simulação de passagem por referência com ponteiros e mutação via desreferenciação (`code:swap_referencia`).
7. `07_parametros_saida_status.c`: Uso de parâmetros de saída (*out-parameters*) para múltiplos retornos e código de status de erro (`code:divisao_segura`).
8. `08_ponteiro_entrada_const.c`: Proteção de parâmetros de entrada somente-leitura com o qualificador `const`.
9. `09_escopo_bloco.c`: Escopo de bloco e tempo de vida de variáveis locais e aninhadas (`code:escopo_local_variaveis`).
10. `10_dangling_pointer.c`: Retorno indevido de endereço de variável local automática e diagnóstico defensivo.
11. `11_sem_prototipo_erro.c`: Tentativa intencional de chamada a sub-rotina antes de sua declaração (`code:sem_prototipo`).
12. `12_prototipo_arquivo_unico.c`: Declaração prévia de subprogramas com protótipos de função (`code:prototipo_exemplo`).
13. `13_modularizacao_multiplos_arquivos/`: Projeto modularizado com compilação separada:
    - `matematica.h`: Cabeçalho com protótipos e guardas de inclusão (`code:modulo_header`).
    - `matematica.c`: Implementação dos algoritmos aritméticos (`code:modulo_impl`).
    - `main.c`: Programa cliente consumindo a interface do módulo (`code:modulo_main`).
