#include <stdio.h>
#define NMAX 20

int lerVetor(int vetor[]){
    int i, num;
    for (i = 0; i < NMAX; i++)
    {
        fseek(stdin, 0, SEEK_END);
        printf("Insira o %d numero:\n", (i + 1));
        scanf("%d", &num);

        if (num == 0)
            break;
        else
            vetor[i] = num;
    }
    return i;
}

int eCrescente(int vetor[], int numElem){
    int i;
    for (i = 0; i < numElem; i++)
    {
        if ((i + 1) < numElem){
            if (!(vetor[i] <= vetor[i + 1]))
                return 0;
        }
    }
    return 1;
}

int eAlternado(int vetor[], int numElem){
    int i;
    for (i = 0; i < numElem; i++)
    {
        if ((i + 1) < numElem){
            if (!(vetor[i] * vetor[i + 1] < 0))
                return 0;
        }
    }
    return 1;
}

int semRepeticao(int vetor[], int numElem){
    int i;
    for (i = 0; i < numElem; i++)
    {
        for (int j = i + 1; j < numElem; j++)
        {
            if (vetor[i] == vetor[j])
                return 0;
        }
    }
    return 1;
}

int main(){
    int vetor[NMAX];
    int numElem = lerVetor(vetor);

    printf("O vetor esta em ordem crescente: %d\n", eCrescente(vetor, numElem));
    printf("A sequencia e alternada: %d\n", eAlternado(vetor, numElem));
    printf("O vetor nao tem elementos repetidos: %d\n", semRepeticao(vetor, numElem));
}