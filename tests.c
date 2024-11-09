#include <stdio.h>
#include <assert.h>
#include <string.h>
#include "mycrypto.h"  
int main() {
    
    char caesar_enc[100], caesar_dec[100];
    caesar_encrypt(caesar_enc, "Hello", 3);
    caesar_decrypt(caesar_dec, caesar_enc, 3);
    assert(strcmp(caesar_enc, "Khoor") == 0);  
    assert(strcmp(caesar_dec, "Hello") == 0);  

    
    char xor_enc[100], xor_dec[100];
    xor_encrypt(xor_enc, "Hello", "key");
    xor_decrypt(xor_dec, xor_enc, "key");
    assert(strcmp(xor_enc, "\x02\x07\x01\x01\x0f") == 0); 
    assert(strcmp(xor_dec, "Hello") == 0);  

    
    char atbash_enc[100], atbash_dec[100];
    atbash_encrypt(atbash_enc, "Hello");
    atbash_decrypt(atbash_dec, atbash_enc);
    assert(strcmp(atbash_enc, "Svool") == 0);  
    assert(strcmp(atbash_dec, "Hello") == 0);  

    printf("Todos os testes passaram com sucesso!\n");

    return 0;
}