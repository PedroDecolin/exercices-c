#include <stdio.h>

float potencia(float base, int expoente)
{
    float pot = 1;
    int k;
    for (k = 1; k <= expoente; k++)
        pot *= base;
    return pot;
}

int main()
{
    float base;
    int exp;
    printf("Base : ");
    scanf("%f", &base);
    
    for (;;)
    {
        printf("Expoente (positivo): ");
        scanf("%d", &exp);

        if(exp >= 0){
            break;
        }
    }

    printf("Resultado de %.2f ^ %d = %.3f\n", base, exp, potencia(base, exp));
}