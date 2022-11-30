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

        if (num < 0 || num > 50)
            break;

        vetor[i] = num;
    }
    return i;
}

int menor(int vetor[], int numElementos){
    int posiMenor;
    int min = vetor[0];
    
    for (int i = 0; i < numElementos; i++)
    {
        if (vetor[i] < min){
            posiMenor = i;
            min = vetor[i];
        }
    }
    return posiMenor;
    
}

int maior(int vetor[], int numElementos){
    int posiMaior;
    int max = vetor[0];
    
    for (int i = 0; i < numElementos; i++)
    {
        if (vetor[i] > max){
            posiMaior = i;
            max = vetor[i];
        }
    }
    return posiMaior;
}

void imprimirDiferenca(int vetor[], int numElementos){
    printf("\nA diferenca entre o valor maximo e minimo e: %d", maior(vetor, numElementos) - menor(vetor, numElementos));
}

void imprimirVetor(int vetor[], int numElementos){
    printf("\nVetor de inteiros: ");
    for (int i = 0; i < numElementos; i++)
    {
        printf("%d ", vetor[i]);
    }
    
}

int main()
{
    int vetor[100];

    int numElementos = lerVetor(vetor);

    printf("Valor maximo: %d\n", maior(vetor, numElementos));
    printf("Valor minimo: %d\n", menor(vetor, numElementos));

    imprimirDiferenca(vetor, numElementos);

    imprimirVetor(vetor, numElementos);
}