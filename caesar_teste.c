#include <stdio.h>
#include "mycrypto.h"

int main(){
    const char *src = "Testando caesar";
    char dest [256];
    int shift = 3;

    caesar_encrypt(dest, src, shift);

    printf("Texto original: %s\n", src);
    printf("Texto criptografado: %s\n", dest);

    return 0;
}