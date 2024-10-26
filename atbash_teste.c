#include <stdio.h>
#include "mycrypto.h"
#include <ctype.h>

int main(){
    const char *src = "Teste de atbash";
    char dest [256];

    atbash_encrypt(dest, src);
    
    printf("Texto original: %s\n", src);
    printf("Texto criptografado %s\n", dest);

    tbash_decrypt(dest, src);
    
    return 0;
}

