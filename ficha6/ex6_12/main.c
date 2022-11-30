#include <stdio.h>
#define NALUNOS 20
#define NDISCIPLINAS 5

int menu(){
    int opcao; 
    printf("Opcoes:\n");
    printf("====================================================\n");
    printf("1) Preencher pauta\n");
    printf("2) Mostrar taxa aprovacao/reprovacao de disciplina\n");
    printf("3) Mostrar disciplina com maior aprovacao\n");
    printf("4) Mostrar media de determinado aluno\n");
    printf("5) Mostrar aluno com melhor media\n");
    printf("====================================================\n");
    scanf("%d", &opcao);

    if (opcao >= 1 && opcao <= 5)
        return opcao;
    return 0;
}

void preencherPauta(int notas[][NALUNOS]){
    for (int i = 0; i < NDISCIPLINAS; i++)
    {
        printf("Para a disciplina %d insira:", (i + 1));
        for (int j = 0; j < NALUNOS; j++)
        {
            fseek(stdin, 0, SEEK_END);
            printf("\n# Aluno %d: ", (j + 1));
            scanf("%f", &notas[i][j]);
        }
        
    }
    
}

void preencherAutomatico(int notas[][NALUNOS]){
    for (int i = 0; i < NDISCIPLINAS; i++)
    {
        for (int j = 0; j < NALUNOS; j++)
        {
            notas[i][j] = 3.5;
        }
        
    }
}

void mostrarPautas(int notas[][NALUNOS]){
    for (int i = 0; i < NDISCIPLINAS; i++)
    {
        printf("Disciplina %d\n", (i + 1));
        printf("======================\n");
        for (int j = 0; j < NALUNOS; j++)
        {
            printf("# Aluno %02d: %f\n", (j + 1), notas[i][j]);
        }
        printf("======================\n");
    }
    
}



int main(){
    float notas[NDISCIPLINAS][NALUNOS];
    int opcao = menu(notas);
    
    if (opcao == 1)
        preencherAutomatico(notas);
    mostrarPautas(notas);
}