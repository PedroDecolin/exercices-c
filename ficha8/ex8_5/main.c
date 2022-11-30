#include <stdio.h>

void trocarValores(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(){
    int a, b;

    printf("Insira o valor de a:\n");
    scanf("%d", &a);

    printf("Insira o valor de b:\n");
    scanf("%d", &b);

    printf("Antes da troca dos valores:\n");
    printf("Valor de a: %d\nValor de b: %d\n", a, b);
    trocarValores(&a, &b);
    printf("Depois da troca dos valores:\n");
    printf("Valor de a: %d\nValor de b: %d\n", a, b);
}