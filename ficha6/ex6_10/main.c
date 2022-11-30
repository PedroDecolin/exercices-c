#include <stdio.h>
#define NMAX 100

int lerVetor(int vetor[])
{
    printf("Insira inteiros positivos (negativos ou 0 para parar)\n\n");
    int num, i;
    for (i = 0; i < NMAX; i++)
    {
        fseek(stdin, 0, SEEK_END);
        printf("Insira o %d elemento:\n", (i + 1));
        scanf("%d", &num);

        if (num <= 0)
            break;

        vetor[i] = num;
    }
    return i;
}

void mostrarVetor(int vetor[], int numElementos){
    printf("\nNumeros inteiros inseridos: ");
    for (int i = 0; i < numElementos; i++)
    {
        printf("%d ", vetor[i]);
    }
    
}

void inverterVetor(int vetor[], int numElementos){
    int i, j, auxiliar;
    for (i = 0, j = numElementos - 1; i < j; i++, j--)
    {
        auxiliar = vetor[i];
        vetor[i] = vetor[j];
        vetor[j] = auxiliar;
    }
    
}

int main()
{
    int vetor[NMAX];

    int numElementos = lerVetor(vetor);

    printf("\nAntes da inversao:");
    mostrarVetor(vetor, numElementos);

    inverterVetor(vetor, numElementos);

    printf("\nDepois da inversao:");
    mostrarVetor(vetor, numElementos);
}