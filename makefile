all: caesar_decrypt_teste

caesar_decrypt_teste: caesar_decrypt_teste.c mycrypto.c
    gcc caesar_decrypt_teste.c mycrypto.c -o caesar_decrypt_teste

run: caesar_decrypt_teste
    ./caesar_decrypt_teste

clean:
    rm caesar_decrypt_teste