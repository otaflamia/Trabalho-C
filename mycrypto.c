#include "mycrypto.h"

void caesar_encrypt(char *dest, const char *src, int shift){

    int i;

    for(i=0; src[i] != '\0'; i++){ // valida que serão percorridos todos os caractéres da palavra a ser criptografada.
        dest[i] = (char)(((unsigned char)src[i]+shift) % 256); // utiliza-se o resto de divisão por 256 para garantir o comportamento cíclico.
    }
    dest[i] = '\0'; // garante que seja adicionado ao último char o terminador de string
    
}

void caesar_decrypt(char *dest, const char *src, int shift){
    int i;

    for(i=0; src[i] != '\0'; i++){ // valida que serão percorridos todos os caractéres da palavra a ser decriptografada.
        dest[i] = (char)(((unsigned char)src[i] - shift + 256) % 256); // validação para que o valor se enquadra no ciclo 0-256 e não haja valores negativos.
    }
    dest[i] = '\0'; // garante que seja adicionado ao último char o terminador de string
    
}
   
    

