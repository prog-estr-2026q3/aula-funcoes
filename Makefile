CC = gcc
CFLAGS = -std=c11 -Wall -Wextra -pedantic
ASAN_FLAGS = -fsanitize=address -g
DEBUG_FLAGS = -g
LDLIBS = -lm
BUILD_DIR = build

# Programas individuais válidos (exclui o 11 que é propositalmente com erro)
SRCS = 01_definicao_invocacao.c \
       02_quadro_ativacao_add.c \
       03_reuso_quadro.c \
       04_encadeamento_funcoes.c \
       05_passagem_por_valor.c \
       06_swap_ponteiros.c \
       07_parametros_saida_status.c \
       08_ponteiro_entrada_const.c \
       09_escopo_bloco.c \
       10_dangling_pointer.c \
       12_prototipo_arquivo_unico.c

BINS = $(SRCS:%.c=$(BUILD_DIR)/%)
MODULAR_BIN = $(BUILD_DIR)/13_modularizacao_app
ASAN_BIN_10 = $(BUILD_DIR)/10_dangling_pointer_asan

all: $(BINS) $(MODULAR_BIN)

# Programa modularizado em múltiplos arquivos
$(MODULAR_BIN): 13_modularizacao_multiplos_arquivos/main.c 13_modularizacao_multiplos_arquivos/matematica.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $^ -o $@ $(LDLIBS)

# Compilação do dangling pointer com AddressSanitizer
asan-10: $(ASAN_BIN_10)
asan: asan-10

$(ASAN_BIN_10): 10_dangling_pointer.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $(ASAN_FLAGS) $< -o $@ $(LDLIBS)

# Alvo para demonstrar o erro de compilação sem protótipo (espera-se falha)
erro-11:
	@echo "--- Tentando compilar 11_sem_prototipo_erro.c (espera-se erro do compilador) ---"
	-$(CC) $(CFLAGS) 11_sem_prototipo_erro.c -o $(BUILD_DIR)/11_sem_prototipo_erro $(LDLIBS)

# Aliases de compatibilidade
asan-09: asan-10
erro-10: erro-11

$(BUILD_DIR)/%: %.c | $(BUILD_DIR)
	$(CC) $(CFLAGS) $< -o $@ $(LDLIBS)

$(BUILD_DIR):
	mkdir -p $(BUILD_DIR)

clean:
	rm -rf $(BUILD_DIR)

.PHONY: all clean asan asan-10 asan-09 erro-11 erro-10
