#include <stdio.h>
#define NMESES 12

void lerTemps(float tempAno[]){
    printf("Insira as temperaturas medias:\n");
    for (int i = 0; i < NMESES; i++)
    {
        fseek(stdin, 0, SEEK_END);
        printf("# Mes %02d: ", (i + 1));
        scanf("%f", &tempAno[i]);
    }
    
}

void mostrarTemps(float tempAno[]){
    printf("Mes      Temperatura\n");
    printf("--------------------\n");
    for (int i = 0; i < NMESES; i++)
    {
        printf("%02d              %.1f\n", (i + 1), tempAno[i]);
    }
    printf("--------------------\n");
}

void pesquisarTemp(float temps[]){
    float temp;
    int tempAchada = 0, i;
    printf("Insira a temperatura a ser pesquisada:\n");
    scanf("%f", &temp);
    
    for (i= 0; i < NMESES; i++)
    {
        if (temps[i] == temp){
            tempAchada = 1;
            break;
        }
    }
    if(tempAchada)
        printf("A temperatura %.2f foi achada no mes %d\n", temps[i], (i + 1));
    else
        printf("A tempratura %.2f nao foi achada no ano\n", temps[i]);
}

float tempMedia(float temps[]){
    float soma = 0;
    for (int i = 0; i < NMESES; i++)
    {
        soma += temps[i];
    }
    return (soma / NMESES);
}

float maiorTemp(float temps[]){
    float maior = temps[0];
    for (int i = 0; i < NMESES; i++)
    {
        if (temps[i] > maior)
            maior = temps[i];
    }
    return maior;
}

float menorTemp(float temps[]){
    float menor = temps[0];
    for (int i = 0; i < NMESES; i++)
    {
        if (temps[i] < menor)
            menor = temps[i];
    }
    return menor;
}

float amplitudeTermica(float maior, float menor){
    return (maior - menor);
}

int main(){
    float tempAno[NMESES];

    lerTemps(tempAno);
    mostrarTemps(tempAno);
    pesquisarTemp(tempAno);

    printf("A temperatura media do ano foi: %.2f\n", tempMedia(tempAno));
    float maior = maiorTemp(tempAno);
    printf("A maior temperatura do ano foi: %.2f\n", maior);
    float menor = menorTemp(tempAno);
    printf("A menor temperatura do ano foi: %.2f\n", menor);
    printf("A amplitude termica do ano foi: %.2f\n", amplitudeTermica(maior, menor));
}