#include <stdio.h>
#include <string.h>
#define MAXSTR 40

void quebraLinha(char string[]){
    for (int i = 0; i < MAXSTR; i++)
    {
        if (string[i] == ' ')
            string[i] = '\n';
    }
    
}

int main(){
    char string[MAXSTR];

    printf("Insira uma string:\n");
    gets(string);

    printf("Antes da quebra de linha:\n");
    puts(string);
    quebraLinha(string);
    printf("Depois da quebra de linha:\n");
    puts(string);
}