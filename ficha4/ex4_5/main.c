#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main()
{
	int num, numNegativos = 0, numImpares = 0;
	for (;;)
	{
		fseek(stdin, 0, SEEK_END);
		printf("Insira um numero inteiro:\n");
		scanf("%d", &num);

		if (num == 0)
			break;

		if (num < 0)
			numNegativos++;

		if (num % 2 != 0)
			numImpares++;
	}
	if (numNegativos == 0)
		printf("Todos os numeros inseridos sao positivos\n");
	if (numImpares == 0)
		printf("Todos os numeros inseridos sao pares");
}