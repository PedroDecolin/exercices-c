#include <stdio.h>
int contC = 0, contS = 0, contV = 0, contD = 0, maior = 0;
char opcaoPred;

char lerOpcao(){
    fseek(stdin, 0, SEEK_END);
    char opcao;
    
    printf("Estado civil:\n");
    printf("c) Casado\n");
    printf("s) Solteiro\n");
    printf("v) Viuvo\n");
    printf("d) Divorciado\n");

    printf("R:\n");
    scanf("%c", &opcao);

    return opcao;
}

void extensoOpcao(char opcao){
    switch (opcao)
    {
    case 'c':
        printf("Casado\n");
        break;
    case 's':
        printf("Solteiro\n");
        break;
    case 'v':
        printf("Viuvo\n");
        break;
    case 'd':
        printf("Divorciado\n");
        break;
    default:
        printf("Fim!\n");
        break;
    }
}

void maiorNum(int num, char opcao){
    if (num > maior){
        maior = num;
        opcaoPred = opcao;
    }
}

int main(){
    char opcao;
    for(;;){
        fseek(stdin, 0, SEEK_END);
        opcao = lerOpcao();
        printf("# Escolheu: ");
        extensoOpcao(opcao);

        if (opcao == 'c'){
            contC++;
            maiorNum(contC, opcao);
        }
        else if (opcao == 's'){
            contS++;
            maiorNum(contS, opcao);
        }
        else if (opcao == 'v'){
            contV++;
            maiorNum(contV, opcao);
        }
        else if (opcao == 'd'){
            contD++;
            maiorNum(contD, opcao);
        }
        else
            break;
    }
    printf("\nEstado civil predominante: ");
    extensoOpcao(opcaoPred);

}