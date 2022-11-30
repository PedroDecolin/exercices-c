#include <stdio.h>

int main(){
    char ch, *pch;
    int a, b, *pa, *pb;
    pch = &ch;
    pa = &a;
    pb = &b;
    
    printf("Insira um caractere:\n");
    scanf("%c", &ch);

    printf("Insira o primeiro numero:\n");
    scanf("%d", &a);

    printf("Insira o segundo numero:\n");
    scanf("%d", &b);

    printf("- O endereco de ch: %p\n", &ch);
    printf("- O endereco de pch: %p\n", &pch);
    printf("- O conteudo de pch: %p\n", pch);
    printf("- O valor apontado por pch: %c\n", *pch);
    printf("- Os enderecos de a e b: %p e %p\n", &a, &b);
    printf("- Os enderecos de pa e pb: %p e %p\n", &pa, &pb);
    printf("- Os conteudos de pa e pb: %p e %p\n", pa, pb);
    printf("- Os valores apontados por pa e pb: %d e %d", *pa, *pb);
}