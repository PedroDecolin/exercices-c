#include <stdio.h>
#include <math.h>

float potencia(float base, int exp)
{
    float pot = 1;

    for (int k = 1; k <= abs(exp); k++)
        pot *= base;

    if (exp < 0)
        pot = 1 / pot;

    return pot;
}

int main()
{
    float base;
    int exp;
    printf("Base : ");
    scanf("%f", &base);

    printf("Expoente: ");
    scanf("%d", &exp);

    printf("Resultado de %.3f ^ %d = %.3f\n", base, exp, potencia(base, exp));
}