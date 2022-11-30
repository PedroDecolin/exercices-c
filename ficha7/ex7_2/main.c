#include <stdio.h>
#define MAXSTR 50

int isNull(char *string){
    int isNull = 1;
    for (int i = 0; i < MAXSTR; i++)
    {
        if (string[i] != NULL){
            isNull = 0;
            break;
        }
    }
    return isNull;
}

int strlen(char *string){
    int i;
    for (i = 0; string[i] != '\0'; i++);
    return i;
}

char *strlower(char *string){
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'A' && string[i] <= 'Z')
            string[i] += 32;
    }
    return string;
}

char *strupper(char *string){
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] >= 'a' && string[i] <= 'z')
            string[i] -= 32;
    }
    return string;
}

int strcountc(char *string, char ch){
    int count = 0;
    for (int i = 0; i < strlen(string); i++)
    {
        if (string[i] == ch)
            count++;
    }
    return count;
}

int indchr(char *string, char ch){
    int i;
    for (i = 0; string[i] != ch && i < strlen(string); i++);
    return i;
}

char *trimright(char *string){
    for (int i = MAXSTR; i > 0; i--)
    {
        if (string[i] != '\0'){
            if (string[i] == ' '){
                string[i] == '\0';
                string[i + 1] = "";
            }
            else
                break;
        }
    }
    
}

int main(){
    //2.a
    char strA[] = "";
    printf("A string e nula: %d\n", isNull(strA));

    //2.b
    char strB[] = {'a', 'b', 'c'};
    printf("Tamanho da string: %d\n", strlen(strB));

    //2.c
    char strC[] = {'A', 'B', 'c'};
    printf("String toda em minuscula: ");
    puts(strlower(strC));

    //2.d
    char strD[] = {'a', 'b', 'C'};
    printf("String toda em maiuscula: ");
    puts(strupper(strD));

    //2.e
    char strE[] = {'a', 'a', 'B', 'E', 'a', 'e'};
    printf("Ocorrencias do caractere 'a' na string: %d\n", strcountc(strE, 'a'));

    //2.f
    char strF[] = {'b', 'g', 'y', 'a', 'a'};
    printf("Primeira ocorrencia do caractere 'a' na string: posicao %d\n", indchr(strF, 'a'));

    //2.g
    char strG[] = {'t', 'e', 's', 't', 'e', ' ', ' ', ' '};
    printf("String com trimright:\n");
    puts(trimright(strG));
}