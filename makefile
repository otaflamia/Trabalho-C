all: caesar_decrypt_teste

caesar_decrypt_teste: caesar_decrypt_teste.c mycrypto.c
    gcc caesar_decrypt_teste.c mycrypto.c -o caesar_decrypt_teste

run: caesar_decrypt_teste
    caesar_decrypt_teste.exe

clean:
    del caesar_decrypt_teste.exe