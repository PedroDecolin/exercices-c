//exercicio resolvido parcialmente, pois o C nao tem variavel grande o suficiente para calcular numCombinacoes(6, 49)

#include <stdio.h>

long fatorial(int num){
    long fat = 1;
    for (int i = 1; i <= num; i++)
    {
        fat *= i;
    }
    return fat;
    
}

long int fatorialSimplificado(int subconjunto, int numElementos){
    /*int n = numElementos;
    int p = (numElementos - subconjunto) + 1;
    
    while (p <= n){
        fat *= p;
        p++;
    }*/

    long int mult = 1;
    int n = 49;
    for(;;){
        if (n == 40)
            break;
        mult *= n;
        printf("%ld\n", mult);
        n--;
    }
    return mult;
    
}

long numCombinacoes(int subconjunto, int numElementos){
    return fatorialSimplificado(subconjunto, numElementos) / fatorial(subconjunto);
}

int main(){
    printf("Fatorial simplificado: %ld", fatorialSimplificado(6, 49));
    //printf("Totoloto: %ld", numCombinacoes(6, 49));
    //printf("Euromilhoes: %ld", (numCombinacoes(5, 50) * numCombinacoes(2, 11)));
}