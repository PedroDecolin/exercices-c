#include <stdio.h>

int eLetra(char ch)
{
    return (ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z');
}

int eVogal(char ch)
{
    return (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U');
}

int eConsoante(char ch)
{
    return (eLetra(ch) && !eVogal(ch));
}

int eDigito(char ch){
    return (ch >= '0' && ch <= '9');
}

int ePrimo(char ch){
    if (eDigito(ch)){
        int num = ch - 48;
        
        int primo = 1;
        for (int i = 2; i < num ; i++)
        {
            if (num % i == 0){
                primo = 0;
                break;
            }
        }
        return primo;
        
    }
    else
        return 0;
}

int main()
{
    char ch;
    printf("Insira um caractere:\n");
    scanf("%c", &ch);

    printf("E letra: %d\n", eLetra(ch));
    printf("E vogal: %d\n", eVogal(ch));
    printf("E consoante: %d\n", eConsoante(ch));
    printf("E digito: %d\n", eDigito(ch));
    printf("E primo: %d", ePrimo(ch));
}