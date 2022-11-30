#include <stdio.h>
#define MESESANO 12

void ler(float *dados){
    int i = 0;
    do
    {
        fseek(stdin, 0, SEEK_END);
        printf("Insira a temperatura do mes %d:\n", (i + 1));
        scanf("%f", dados + i);
        i++;
    } while (i < MESESANO);
}

float *procura(float *dados, float temp){
    int i;
    for (i = 0; dados[i] != temp && i < MESESANO; i++){
        if (temp == *(dados + i))
            return (dados + i);
    }
    return NULL;
}

float *maxima(float *dados){
    float *pmaior = dados;
    for (int i = 0; i < MESESANO; i++)
    {
        if (*pmaior < *(dados + i))
            pmaior = (dados + i);
    }
    return pmaior;
}

float *minima(float *dados){
    float *pmenor = dados;
    for (int i = 0; i < MESESANO; i++)
    {
        if (*pmenor > *(dados + i))
            pmenor = (dados + i);
    }
    return pmenor;
}

float media(float *dados){
    float soma = 0;
    for (int i = 0; i < MESESANO; i++)
    {
        soma += *(dados + i);
    }
    return (soma / MESESANO);
}

void mostrar(float *dados){
    for (int i = 0; i < MESESANO; i++)
    {
        printf("- Mes :%d Temperatura: %.2f\n", i + 1, *(dados + i));
    }
    
}

int main(){
    float dados[MESESANO], *resultado, temp;

    ler(dados);
    mostrar(dados);
    
    printf("Insira uma temperatura a ser procurada:\n");
    scanf("%f", &temp);

    resultado = procura(dados, temp);
    if (resultado == NULL){
        printf("Temperatura %.2f nao encontrada\n", temp);
    }
    else
        printf("Temperatura %f encontrada no mes %d\n", temp, (resultado - dados + 1));

    float *pmaior = maxima(dados);
    float *pmenor = minima(dados);
    float med = media(dados);

    printf("A temperatura maxima do ano foi: %.2f no mes %d\n", *pmaior, (pmaior - dados + 1));
    printf("A temperatura minima do ano foi: %.2f no mes %d\n", *pmenor, (pmenor - dados + 1));
    printf("A media de temperatura do ano foi: %.2f\n", med);
    printf("A amplitude termica do ano foi de: %.2f\n", (*pmaior - *pmenor));
}