#include <stdio.h>

int main(){
    int numeros[13] = {1, 4, 5, 9, 10, 40, 50, 90, 100, 400, 500, 900, 1000};
    char* romanos[14] = {'I', 'IV', 'V', 'IX', 'X', 'XL', 'L', 'XC', 'C', 'CD', 'D', 'CM', 'M'};

    int num;
    do
    {
        printf("Insira um numero:\n");
        scanf("%d", &num);
        if (num <= 0 || num > 40000)
            printf("Numero fora do intervalo!");
    } while (num <= 0 || num > 40000);
    
}