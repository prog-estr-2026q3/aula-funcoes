# Exemplos de código - Capítulo 03: funções e modularização

Este diretório contém todos os exemplos de código-fonte apresentados no Capítulo 03 das notas de aula de Programação Estruturada.

## Estrutura

```
.
├── Makefile
├── README.md
├── .gitignore
├── .devcontainer/   # Configuração de ambiente para Dev Container / Codespaces
├── src/             # Códigos-fonte (.c) e módulos dos exemplos
└── build/           # Executáveis compilados (ignorado pelo git)
```

## Compilação

Para compilar todos os programas válidos de uma só vez:

```bash
make
```

Os executáveis serão gerados no diretório `build/`.

Para compilar um programa específico manualmente:

```bash
gcc -std=c11 -Wall -Wextra -pedantic src/01_definicao_invocacao.c -o build/01_definicao_invocacao -lm
```

Para compilar o exemplo de ponteiro pendente com o AddressSanitizer (ASan):

```bash
make asan
./build/10_dangling_pointer_asan
```

Para testar o erro pedagógico de compilação na chamada sem protótipo:

```bash
make erro-11
```

Para limpar todos os executáveis gerados:

```bash
make clean
```

## Execução

Após a compilação, execute os programas a partir do diretório raiz do módulo:

```bash
./build/01_definicao_invocacao
./build/03_reuso_quadro
./build/04_encadeamento_funcoes
./build/06_swap_ponteiros
./build/07_parametros_saida_status
./build/13_modularizacao_app
```

## Relação dos arquivos com o texto das notas de aula

Todos os códigos-fonte estão localizados no diretório `src/`:

1. `src/01_definicao_invocacao.c`: Definição de funções (`add`, `sub`) e desvio de controle a partir da função principal `main` (`code:definicao_funcao_legado`).
2. `src/02_quadro_ativacao_add.c`: Função com parâmetros e variável local para análise do quadro de ativação (`code:funcao_add_quadro`).
3. `src/03_reuso_quadro.c`: Reutilização da mesma área de memória da pilha por quadros de ativação sequenciais não aninhados (`code:reuso_quadro`).
4. `src/04_encadeamento_funcoes.c`: Encadeamento de chamadas com quatro níveis de profundidade na pilha de execução (`code:encadeamento_funcoes`).
5. `src/05_passagem_por_valor.c`: Demonstração do isolamento de dados na passagem estrita por valor (`code:passagem_por_valor`).
6. `src/06_swap_ponteiros.c`: Troca de valores por referência com ponteiros e alteração via desreferenciação (`code:swap_referencia`).
7. `src/07_parametros_saida_status.c`: Uso de parâmetros de saída para múltiplos retornos e código de estado de erro (`code:divisao_segura`).
8. `src/08_ponteiro_entrada_const.c`: Proteção de parâmetros de entrada somente para leitura com o qualificador `const`.
9. `src/09_escopo_bloco.c`: Escopo de bloco e tempo de vida de variáveis locais e aninhadas (`code:escopo_local_variaveis`).
10. `src/10_dangling_pointer.c`: Retorno indevido de endereço de variável local automática (ponteiro pendente) e diagnóstico defensivo.
11. `src/11_sem_prototipo_erro.c`: Tentativa intencional de chamada a sub-rotina antes de sua declaração (`code:sem_prototipo`).
12. `src/12_prototipo_arquivo_unico.c`: Declaração prévia de subprogramas com protótipos de função (`code:prototipo_exemplo`).
13. `src/13_modularizacao_multiplos_arquivos/`: Projeto modularizado com compilação separada:
    - `matematica.h`: Arquivo de cabeçalho com protótipos e proteções contra inclusão múltipla (`code:modulo_header`).
    - `matematica.c`: Implementação dos algoritmos aritméticos (`code:modulo_impl`).
    - `main.c`: Programa cliente consumindo a interface do módulo (`code:modulo_main`).
