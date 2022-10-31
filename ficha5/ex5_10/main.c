#include <stdio.h>
#define NUM_AVALIACOES 6

int lerValor()
{
    for (;;)
    {
        int opcao;
        printf("Escolha a avaliacao:\n");
        printf("1) Mau\n");
        printf("2) Nao satisfaz\n");
        printf("3) Satisfaz\n");
        printf("4) Satisfaz bastante\n");
        printf("5) Excelente\n");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 5)
        {
            return opcao;
            break;
        }
        else
            printf("\nResposta invalida\n");
    }
}

int qualitativaParaQuantitativa(int quali)
{
    switch (quali)
    {
    case 1:
        return 0;
        break;

    case 2:
        return 5;
        break;

    case 3:
        return 12;
        break;

    case 4:
        return 17;
        break;

    case 5:
        return 20;
        break;
    }
}

int main()
{
    int nota;
    int somaNotas = 0;

    for (int  avaliacao = 1; avaliacao <= NUM_AVALIACOES; avaliacao++)
    {
        printf("=== Avaliacao %d ===\n", avaliacao);
        nota = qualitativaParaQuantitativa(lerValor());

        somaNotas += nota;
    }

    printf("Nota final do aluno: %.1f", (float) (somaNotas / NUM_AVALIACOES));
    
}