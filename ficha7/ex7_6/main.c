#include <stdio.h>
#include <string.h>
#define MAXSTR 20

int mygets(char *str, int lim)
{
    int i = 0;
    while ((str[i] = getchar()) != '\n' && i++ < lim - 1);
    str[i] = '\0 ';
    return i;
}

int main()
{
    char string[MAXSTR], saveMaior[MAXSTR], saveMenor[MAXSTR];
    int comp, max = 0, min = MAXSTR;
    printf("Introduza uma frase (1 por linha, max %d):\n", MAXSTR);
    while ((comp = mygets(string, MAXSTR)) > 0)
    {
        if (comp > max)
        {
            max = comp;
            strcpy(saveMaior, string);
        }
        if (comp < min)
        {
            min = comp;
            strcpy(saveMenor, string);
        }
    }
    if (max > 0)
    {
        printf("- Linha mais longa: %s (%d char)\n", saveMaior, max);
    }
    if (min > 0)
    {
        printf("- Linha mais curta: %s (%d char)\n", saveMenor, min);
    }
}