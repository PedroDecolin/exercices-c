#include <stdio.h>
int dataAtual[3] = {3, 11, 2022};

int bissexto(int ano)
{
    // funcao retorna 1 se o ano for bissexto e 0 senao for
    if (ano % 4 == 0)
    {
        if (ano % 100 == 0)
        {
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

int ultimo(int mes, int ano)
{
    // funcao retorna o ultimo dia do 'mes' com base no 'ano'
    if (mes >= 1 && mes <= 12)
    {
        if (mes == 2)
        {
            if (bissexto(ano))
                return 29;
            else
                return 28;
        }
        else
        {
            if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12)
                return 31;
            else
                return 30;
        }
    }
    else
    {
        printf("\nMes invalido!\n");
        return 0;
    }
}

int valida(int data[])
{
    // funcao retorna 1 se a data passada for valida, e 0 se nao for
    if (data[2] > 0)
    {
        if (data[1] >= 1 && data[1] <= 12)
        {
            if (data[0] > 0 && data[0] <= ultimo(data[1], data[2]))
                return 1;
            else
            {
                return 0;
                printf("Data invalida");
            }
        }
        else
        {
            return 0;
            printf("Data invalida");
        }
    }
    else
    {
        return 0;
        printf("Data invalida");
    }
}

int diaAno(int data[])
{
    // funcao retorna o dia do ano em funcao de uma data passada
    int soma = 0;
    if (valida(data))
    {
        for (int i = 1; i < data[1]; i++)
        {
            soma += ultimo(i, data[2]);
        }
        soma += data[0];
    }
    return soma;
}

int diaRestantesAno(int data[])
{
    // funcao restorna o numero de dias restantes num ano com base numa data passada
    if (valida(data))
    {
        int dataUltimo[3] = {31, 12, data[2]};
        return diaAno(dataUltimo) - diaAno(data);
    }
}

int diasEntre(int data1[], int data2[])
{
    // funcao devolve o numero de dias entre duas datas passadas. A primeira data deve ser menor do que a segunda
    if (valida(data1) && valida(data2))
    {
        int soma = 0;
        if (data2[2] > data1[2])
        {
            int dataUltimo[3] = {31, 12, 0};
            for (int i = 1; i < (data2[2] - data1[2]); i++)
            {
                dataUltimo[2] = (data1[2] + i);
                soma += diaAno(dataUltimo);
            }

            soma += diaRestantesAno(data1) + diaAno(data2);
        }
        else if (data1[2] == data2[2])
        {
            soma += (diaAno(data2) - diaAno(data1));
        }
        return soma;
    }
    else
        return 0;
}

int compararDatas(int data1[], int data2[])
{
    int ano, mes, dia;
    ano = (data1[2] - data2[2]) * 100;
    mes = (data1[1] - data2[1]) * 10;
    dia = (data1[0] - data2[0]);

    return (ano + mes + dia);
}

int calcularIdade(int dataNasc[])
{
    int idade = 0;
    if (compararDatas(dataNasc, dataAtual) < 0)
    {
        idade = dataAtual[2] - dataNasc[2];
        if (dataAtual[1] < dataNasc[1])
            idade--;
        else if (dataAtual[1] == dataNasc[1] && dataAtual[0] < dataNasc[0])
            idade--;
    }
    else
        printf("Data incompativel\n");

    return idade;
}

int main()
{
    int data1[3], data2[3];

    printf("Insira a data do nascimento [dd/mm/aaaa]:\n");
    scanf("%d/%d/%d", &data1[0], &data1[1], &data1[2]);

    /*printf("Insira a data de hoje [dd/mm/aaaa]:\n");
    scanf("%d/%d/%d", &data2[0], &data2[1], &data2[2]);

    printf("%d dias ja vividos", diasEntre(data1, data2));*/



    printf("Sua idade atualmente e: %d", calcularIdade(data1));
}