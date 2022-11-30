#include <stdio.h>

void lerValores(float *pa, float *pb){
    printf("Insira um valor para a:\n");
    scanf("%f", pa);

    printf("Insira um valor para b:\n");
    scanf("%f", pb);
}

void imprimirValores(float a, float b, float *pa, float *pb){
    printf("Valor de a: %.2f\n", a);
    printf("Valor de b: %.2f\n", b);
    printf("Valor de pa: %p\n", pa);
    printf("Valor de pb: %p\n", pb);
    printf("Valor apontado por pa: %.2f\n", *pa);
    printf("Valor apontado por pb: %.2f\n", *pb);
}

void trocarValores(float *pa, float *pb){
    float temp = *pa;
    *pa = *pb;
    *pb = temp;
}

//Passado como parametro um duplo apontador
void trocarApontadores(float **pa, float **pb){
    float *temp = *pa;
    *pa = *pb;
    *pb = temp;
}

int main(){
    float a, b;
    float *pa = &a, *pb = &b;

    lerValores(pa, pb);
    printf("Antes da troca dos valores:\n");
    imprimirValores(a, b, pa, pb);
    trocarValores(pa, pb);
    printf("Depois da troca de valores:\n");
    imprimirValores(a, b, pa, pb);
    trocarApontadores(&pa, &pb); //Passado como parametro o endereco de dois apontadores
    printf("Depois da troca dos apontadores:\n");
    imprimirValores(a, b, pa, pb);
}