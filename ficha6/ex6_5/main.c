#include <stdio.h>
#define MAXNOTAS 50
#define MEDIA 9.5

int lerNotas(float vetor[]){
    int i;
    float num;
    for (i = 0; i < MAXNOTAS; i++)
    {
        fseek(stdin, 0, SEEK_END);
        printf("Insira uma nota:\n");
        scanf("%f", &num);

        if (num < 0)
            break;

        vetor[i] = num;
    }
    return i;
}

void mostrarAcimaMedia(float vetor[], int numElem){
    printf("Notas acima da media:\n");
    for (int i = 0; i < numElem; i++)
    {
        if (vetor[i] >= MEDIA)
            printf("# %.1f\n", vetor[i]);
    }
    
}

int main(){
    float notas[MAXNOTAS];
    int numElem = lerNotas(notas);

    mostrarAcimaMedia(notas, numElem);
}