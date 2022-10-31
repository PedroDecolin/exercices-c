#include <stdio.h>

int isUpper(char ch){
    return (ch >= 'A' && ch <= 'Z');
}

int isLower(char ch){
    return (ch >= 'a' && ch <= 'z');
}

char switchCase(char ch){
    if (isUpper(ch))
        return (ch + 32);
    else if (isLower(ch))
        return (ch - 32);
    return ch;
}

char readChar(){
    char ch;

    while (!(isUpper(ch)) && !(isLower(ch)) && ch != '.')
    {
        fseek(stdin, 0, SEEK_END);
        printf("\nInsira um caractere:\n");
        scanf("%c", &ch);
    }
    return ch;
    

}

int main(){
    char ch;
    do
    {
        ch = readChar();
        if (ch != '.')
            printf("%c -> %c", ch, switchCase(ch));
    } while (ch != '.');
    printf("Adeus!");
}
