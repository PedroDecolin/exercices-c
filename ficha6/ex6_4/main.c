#include <stdio.h>

int lerCaracteres(char carac[]){
    char ch;
    int i;
    for (i = 0; i < 10; i++)
    {
        fseek(stdin, 0, SEEK_END);
        printf("Insira o %d caractere:\n", (i + 1));
        scanf("%c", &ch);

        if (ch == '#')
            break;
        carac[i] = ch;
    }
    return i;
}

void imprimirInverso(char carac[]){
    printf("Ordem inversa:\n");
    for (int i = 9; i >= 0; i--)
    {
        if (carac[i] != NULL)
            printf("%c\n", carac[i]);
    }
    
}

int countMaiusculas(char carac[], int numElem){
    int count = 0;
    for (int i = 0; i < numElem; i++)
    {
        if (carac[i] >= 'A' && carac[i] <= 'Z')
            count++;
    }
    return count;
}

int countMinusculas(char carac[], int numElem){
    int count = 0;
    for (int i = 0; i < numElem; i++)
    {
        if (carac[i] >= 'a' && carac[i] <= 'z')
            count++;
    }
    return count;
}

int main(){
    char carac[10]; 
    int numElem = lerCaracteres(carac);

    imprimirInverso(carac);
    printf("A quantidade de maiusculas inseridas e: %d\n", countMaiusculas(carac, numElem));
    printf("A quantidade de minusculas inseridas e: %d\n", countMinusculas(carac, numElem));
}