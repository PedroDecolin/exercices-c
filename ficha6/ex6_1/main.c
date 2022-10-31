#include <stdio.h >
int main()
{
    float salarios[12], total = 0.0;
    int m;
    for (m = 0; m < 12; m++)
    {
        printf(" Salario do mes %02d: ", m + 1);
        scanf("%f", &salarios[m]);
    }
    printf("Mes Salario \n");
    printf(" - - - - -- - - - - - - - -\n");
    for (m = 0; m < 12; m++)
    {
        printf("%02d %9.2f\n", m + 1, salarios[m]);
        total += salarios[m];
    }
    printf(" - - - - -- - - - - - - - -\n");
    printf(" Total %9.2f\n", total);
}