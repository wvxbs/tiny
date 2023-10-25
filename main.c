#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Estrutura para representar um token
typedef struct {
    char type;   // Tipo do token: 'i' para números inteiros, 'c' para caracteres
    char value[100]; // Valor do token
} Token;

// Função para analisar os tokens
Token* lexer(const char* input) {
    Token* tokens = malloc(sizeof(Token) * strlen(input));
    // Implemente a lógica de análise léxica aqui
    // Preencha o array de tokens
    return tokens;
}

// Função para gerar código assembly
void generateCode(Token* tokens) {
    // Implemente a geração de código aqui
}

int main() {
    const char* input = "int x = 42;";
    Token* tokens = lexer(input);
    generateCode(tokens);
    printf("hello world");
    free(tokens);
    return 0;
}
