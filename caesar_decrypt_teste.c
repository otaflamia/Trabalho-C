#include <stdio.h>
#include "mycrypto.h"

int main(){
    const char *src = "Olá mundo bonito";
    char dest [256];
    int shift = 3;

    caesar_encrypt(dest, src, shift);

    printf("Texto original: %s\n", src);
    printf("Texto encriptado: %s\n", dest);

    return 0;
}