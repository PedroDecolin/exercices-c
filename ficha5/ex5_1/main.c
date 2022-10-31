#include <stdio.h>

void imprime_20_estrelas()
{
    printf("********************\n");
}

int main()
{
    imprime_20_estrelas();
    printf("Numeros entre 1 e 5\n");
    imprime_20_estrelas();
    int n;
    for (n = 1; n <= 5; n++)
        printf("%d\n", n);
    imprime_20_estrelas();
}
