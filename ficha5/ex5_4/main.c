#include <stdio.h>

void imprime_n_simbolos(int numEstrelas, char carac)
{
    for (int i = 0; i < numEstrelas; i++)
    {
        putchar(carac); //mesmo que: printf("%c", char)
    }
    printf("\n");
}

int main()
{
    int numCaracr;
    char caractere;

    printf("Insira a quantidade de estrelas desejadas:\n");
    scanf_s("%d", &numCaracr);

    fseek(stdin, 0, SEEK_END);

    printf("Insira o caractere desejado para a tabela:\n");
    scanf_s("%c", &caractere);
    
    imprime_n_simbolos(numCaracr, caractere);
    printf("Bem vindo!\n");
    imprime_n_simbolos(numCaracr, caractere);
}
