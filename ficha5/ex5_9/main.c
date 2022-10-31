#include <stdio.h>

int bissexto(int ano){
    //funcao retorna 1 se o ano for bissexto e 0 senao for
    if (ano % 4 == 0){
        if (ano % 100 == 0){
            if (ano % 400 == 0)
                return 1;
            else
                return 0;
        }
        else
            return 1;
    }
    return 0;
}

int ultimo(int mes, int ano){
    //funcao retorna o ultimo dia do 'mes' com base no 'ano'
    if(mes >= 1 && mes <= 12){
        if (mes == 2){
            if (bissexto(ano))
                return 29;
            else
                return 28;
        }
        else{
            if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
                return 31;
            else
                return 30;
        }
    }
    else{
        printf("\nMes invalido!\n");
        return 0;
    }
}

int valida(int dia, int mes, int ano){
    //funcao retorna 1 se a data passada for valida, e 0 se nao for
    if (ano > 0){
        if (mes >= 1 && mes <= 12){
            if (dia > 0 && dia <= ultimo(mes, ano))
                return 1;
            else{
                return 0;
                printf("Data invalida");
            }
        }
        else{
            return 0;
            printf("Data invalida");
        }
    }
    else{
        return 0;
        printf("Data invalida");
    }
}

int diaAno(int dia, int mes, int ano){
    //funcao retorna o dia do ano em funcao de uma data passada
    int soma = 0;
    if (valida(dia, mes, ano)){
        for (int i = 1; i < mes; i++)
        {
            soma += ultimo(i, ano);
        }
        soma += dia;
    }
    return soma;
}

int diaRestantesAno(int dia, int mes, int ano){
    //funcao restorna o numero de dias restantes num ano com base numa data passada
    if (valida(dia, mes, ano)){
        return diaAno(31, 12, ano) - diaAno(dia, mes, ano); 
    }
}

int diasEntre(int dia1, int mes1, int ano1, int dia2, int mes2, int ano2){
    //funcao devolve o numero de dias entre duas datas passadas. A primeira data deve ser menor do que a segunda
    if(valida(dia1, mes1, ano1) && valida(dia2, mes2, ano2)){
        int soma = 0;
        if (ano2 > ano1){
            for (int i = 1; i < (ano2 - ano1); i++)
            {
                soma += diaAno(31, 12, (ano1 + i));
            }
            
            soma += diaRestantesAno(dia1, mes1, ano1) + diaAno(dia2, mes2, ano2);
        }
        else if (ano1 == ano2){
            soma += (diaAno(dia2, mes2, ano2) - diaAno(dia1, mes1, ano1));
        }
        return soma;
    }
    else
        return 0;
}

int main(){
    int dia1, mes1, ano1, dia2, mes2, ano2;

    printf("Insira a data do nascimento [dd/mm/aaaa]:\n");
    scanf("%d/%d/%d", &dia1, &mes1, &ano1);

    printf("Insira a data de hoje [dd/mm/aaaa]:\n");
    scanf("%d/%d/%d", &dia2, &mes2, &ano2);

    printf("%d dias ja vividos", diasEntre(dia1, mes1, ano1, dia2, mes2, ano2));
}