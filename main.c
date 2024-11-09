#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "mycrypto.h"

int main() {
    char text[] = "Hello, World!";  // Texto a ser criptografado
    char encrypted[256], decrypted[256];

    // Demonstração da Cifra de César
    int shift = 3;
    printf("Texto original (César): %s\n", text);
    caesar_encrypt(encrypted, text, shift);
    printf("Texto criptografado (César): %s\n", encrypted);
    caesar_decrypt(decrypted, encrypted, shift);
    printf("Texto decriptografado (César): %s\n", decrypted);

    // Demonstração da Criptografia XOR
    const char *key = "key123";
    printf("\nTexto original (XOR): %s\n", text);
    xor_encrypt(encrypted, text, key);
    printf("Texto criptografado (XOR): %s\n", encrypted);
    xor_decrypt(decrypted, encrypted, key);
    printf("Texto decriptografado (XOR): %s\n", decrypted);

    // Demonstração da Cifra Atbash
    printf("\nTexto original (Atbash): %s\n", text);
    atbash_encrypt(encrypted, text);
    printf("Texto criptografado (Atbash): %s\n", encrypted);
    atbash_decrypt(decrypted, encrypted);
    printf("Texto decriptografado (Atbash): %s\n", decrypted);

    return 0;
}
