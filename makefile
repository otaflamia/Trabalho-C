# Nome do compilador
CC = gcc

# Flags do compilador para garantir boas práticas e facilitar a depuração
CFLAGS = -Wall -Wextra -Werror

# Nome dos executáveis
TARGET = mycrypto
TEST_TARGET = testcrypto

# Arquivos-fonte
SRC = main.c mycrypto.c
TEST_SRC = tests.c mycrypto.c

# Arquivos-objeto gerados durante a compilação
OBJ = $(SRC:.c=.o)
TEST_OBJ = $(TEST_SRC:.c=.o)

# Regra padrão para construir o projeto
all: $(TARGET) $(TEST_TARGET)

# Compilar o programa principal
$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJ)

# Compilar o programa de teste
$(TEST_TARGET): $(TEST_OBJ)
	$(CC) $(CFLAGS) -o $(TEST_TARGET) $(TEST_OBJ)

# Regra para compilar os arquivos .c em .o
%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

# Executar os testes unitários
test: $(TEST_TARGET)
	./$(TEST_TARGET)

# Limpar arquivos temporários
clean:
	rm -f $(OBJ) $(TEST_OBJ) $(TARGET) $(TEST_TARGET)

# Limpeza completa
distclean: clean
	rm -f *~

# Exibir ajuda
help:
	@echo "Opções do Makefile:"
	@echo "  make          - Compila o programa e os testes"
	@echo "  make test     - Executa os testes unitários"
	@echo "  make clean    - Remove os arquivos objetos e executáveis"
	@echo "  make distclean- Remove todos os arquivos temporários, incluindo backups"