#include <stdio.h>
#define NMAX 50

int verificaLimite(int num)
{
    return (num <= NMAX && num > 0);
}

void lerInteiros(int inteiros[], int numElementos)
{
    printf("\nLeitura dos elementos:\n");
    for (int i = 0; i < numElementos; i++)
    {
        fseek(stdin, 0, SEEK_END);
        printf("Insira o %d inteiro:\n", (i + 1));
        scanf("%d", &inteiros[i]);
    }
}

void mostrarVetor(int vetor[], int numElementos)
{
    printf(" elementos: ");
    for (int i = 0; i < numElementos; i++)
    {
        printf("%d ", vetor[i]);
    }
    printf("\n");
}

void inverterVetores(int vetor1[], int vetor2[], int numElem)
{
    int i, cache;
    for (i = 0; i < numElem; i++)
    {
        cache = vetor1[i];
        vetor1[i] = vetor2[i];
        vetor2[i] = cache;
    }
    
}

int main()
{
    int vetor1[NMAX], vetor2[NMAX], numElem;

    printf("Insira a quantidade de inteiros a serem inseridos:\n");
    scanf("%d", &numElem);

    if (verificaLimite(numElem))
    {
        lerInteiros(vetor1, numElem);
        lerInteiros(vetor2, numElem);

        printf("Antes de trocar:\n");
        printf("1 vetor");
        mostrarVetor(vetor1, numElem);
        printf("2 vetor");
        mostrarVetor(vetor2, numElem);

        inverterVetores(vetor1, vetor2, numElem);

        printf("Depois de trocar:\n");
        printf("1 vetor");
        mostrarVetor(vetor1, numElem);
        printf("2 vetor");
        mostrarVetor(vetor2, numElem);
    }
    else
        printf("Valor de elementos invalido!");
}