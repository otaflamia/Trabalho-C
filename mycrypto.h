#ifndef MYCRYPTO_H
#define MYCRYPTO_H

void caesar_encrypt(char *dest, const char *src, int shift);
void caesar_decrypt(char *dest, const char *src, int shift);

void xor_encrypt(char *dest, const char *src, const char *key);
void xor_decrypt(char *dest, const char *src, const char *key);

void atbash_encrypt(char *dest, const char *src);
void atbash_decrypt(char *dest, const char *src);

#endif