#include <stdio.h>
#define MAXSTR 40
#define ALFABETO 26

char upper(char ch)
{
    return (ch - 32);
}

void encriptarAlfabeto(char alfabeto[], char alfabetoCripto[], int numRodar)
{
    int i = 0, j = 0;
    while (i < ALFABETO)
    {
        if(alfabeto[j + numRodar] == '\0')
            j = -numRodar;
        alfabetoCripto[i] = alfabeto[j + numRodar];
        i++;
        j++;
    }
}

void encriptarString(char string[], char alfabeto[], char alfabetoCripto[]){
    for (int i = 0; string[i] != '\0'; i++)
    {
        for (int j = 0; j < ALFABETO; j++)
        {
            if (string[i] == alfabeto[j]){
                string[i] = alfabetoCripto[j];
                break;
            }
            else if (string[i] == upper(alfabeto[j])){
                string[i] = upper(alfabetoCripto[j]);
                break;
            }
        }    
    }
}

void decriptarString(char string[], char alfabeto[], char alfabetoCripto[]){
    for (int i = 0; string[i] != '\0'; i++)
    {
        for (int j = 0; j < ALFABETO; j++)
        {
            if (string[i] == alfabetoCripto[j]){
                string[i] = alfabeto[j];
                break;
            }
            else if (string[i] == upper(alfabetoCripto[j])){
                string[i] = upper(alfabeto[j]);
                break;
            }
        }    
    }
}

int main()
{
    char string[MAXSTR], alfabetoCripto[ALFABETO + 1], alfabeto[ALFABETO + 1] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z', '\0'};
    int numRodar = 6;

    printf("Insira a string a ser encriptada:\n");
    gets(string);

    printf("Insira a quantidade de vezes para girar o alfabeto:\n");
    scanf("%d", &numRodar);

    encriptarAlfabeto(alfabeto, alfabetoCripto, numRodar);
    encriptarString(string, alfabeto, alfabetoCripto);

    printf("A string encriptada e:\n");
    puts(string);

    decriptarString(string, alfabeto, alfabetoCripto);

    printf("A string decriptada e:\n");
    puts(string);
}