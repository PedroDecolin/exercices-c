#include <stdio.h>

float potencia(float base, int exp)
{
    float pot = 1;

    for (int k = 1; k <= abs(exp); k++)
        pot *= base;

    if (exp < 0){
        pot = 1 / pot;
    }

    return pot;
}

double sigma(float investimento, float taxaJuro, int anos){
    double sigma = 0;
    for (int n = 1; n <= anos; n++)
    {
        sigma += investimento / potencia((1 + taxaJuro), n);
    }
    return sigma;
    
}

int main(){
    float investimento, taxaJuro;
    int anos;
    
    printf("Introduza o investimento inicial:\n");
    scanf("%f", &investimento);

    printf("Introduza a taxa de juro anual:\n");
    scanf("%f", &taxaJuro);

    printf("Introduza o numero de anos:\n");
    scanf("%d", &anos);

    printf("Valor Atual Liquido (VAL): %.3f\n", sigma(investimento, taxaJuro, anos));
}