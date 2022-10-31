#include <stdio.h>
#define MESES 12

void ler_salarios(float salarios[])
{
    int m;
    for (m = 0; m < MESES; m++)
    {
        printf(" Salario do mes %02d: ", m + 1);
        scanf("%f", &salarios[m]);
    }
}

void mostra_salarios(float salarios[])
{
    int m;
    printf("Mes Salario \n");
    printf(" - - - -- - - - - - - - - -\n");
    for (m = 0; m < MESES; m++)
        printf("%02d %9.2f\n", m + 1, salarios[m]);
    printf(" - - - -- - - - - - - - - -\n");
}

float somar_salarios(float salarios[])
{
    int m;
    float total = 0.0;
    for (m = 0; m < MESES; m++)
    {
        total += salarios[m];
    }
    return total;
}

int main()
{
    float salarios[MESES];
    ler_salarios(salarios);
    mostra_salarios(salarios);
    printf(" Total %9.2f\n", somar_salarios(salarios));
}
