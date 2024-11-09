#include "mycrypto.h"
#include <ctype.h>
#include <string.h>

void caesar_encrypt(char *dest, const char *src, int shift)
{

    int i;

    for (i = 0; src[i] != '\0'; i++) // valida que serão percorridos todos os caractéres da palavra a ser criptografada.
    {
        dest[i] = (char)(((unsigned char)src[i] + shift) % 256); // utiliza-se o resto de divisão por 256 para garantir o comportamento cíclico.
    }
    dest[i] = '\0'; // garante que seja adicionado ao último char o terminador de string
}

void caesar_decrypt(char *dest, const char *src, int shift)
{
    int i;

    for (i = 0; src[i] != '\0'; i++) // valida que serão percorridos todos os caracteres da palavra a ser decriptografada.
    {
        dest[i] = (char)(((unsigned char)src[i] - shift + 256) % 256); // validação para que o valor se enquadra no ciclo 0-256 e não haja valores negativos.
    }
    dest[i] = '\0'; // garante que seja adicionado ao último char o terminador de string
}

void xor_encrypt(char *dest, const char *src, const char *key)
{
    int src_len = strlen(src); // verifica o tamanho da string de entrada.
    int key_len = strlen(key); // verifica o tamanho da string chave.

    if (key_len == 0) // Caso haja uma chave vazia.
    {
        return;
    }

    for (int i = 0; i < src_len; i++)
    {                                        // utiliza um looping para verificar cada letra da string de entrada.
        dest[i] = src[i] ^ key[i % key_len]; // utiliza-se uma validação para caso a chave for menor que o texto de origem, ser repetida.
    }
    dest[src_len] = '\0'; // Adiciona o terminador de string.
}

void xor_decrypt(char *dest, const char *src, const char *key) // a implementação decrypt da função xor é igual a encrypt.
{
    xor_encrypt(dest, src, key);
}

void atbash_encrypt(char *dest, const char *src)
{

    int i = 0;
    while (src[i] != '\0') // inicia o looping para criptografar cada letra.
    {
        char c = src[i]; // define que cada caracter das posições será um char "c".

        if (isalpha(c)) // verifica se é uma letra maiúscula ou minúscula, caso não seja, direciona para o "else".
        {
            if (isupper(c)) // verifica se é maiúscula.
            {
                dest[i] = 'Z' - (c - 'A'); // valida a letra de modo a incluir na posição i da string de saída a letra oposta no alfabeto.
            }
            else if (islower(c)) // verifica se é minúscula.
            {
                dest[i] = 'z' - (c - 'a'); // valida a letra de modo a incluir na posição i da string de saída a letra oposta no alfabeto.
            }
        }
        else // se for qualquer tipo de caractér diferente de uma letra.
        {
            dest[i] = c; // inclui esse caractér sem alteração do valor.
        }

        i++; // incrementa uma posição, passando para o próximo caractere
    }
    dest[i] = '\0'; // Ao finalizar o
}

void atbash_decrypt(char *dest, const char *src) // Atbash é uma cifra simétrica, portanto, a implementação será a mesma para o decrypt.
{
    atbash_encrypt(dest, src);
}
