#include <stdio.h>

int main()
{
	int i = 1, num, numPares = 0, multiplosCinco = 0;

	do
	{
		fseek(stdin, 0, SEEK_END);
		printf("Introduza um numero inteiro: ");
		scanf("%d", &num);

		if (num % 2 == 0)
			numPares++;

		if (num % 5 == 0)
			multiplosCinco++;

		i++;
	} while (i <= 10 && num > 0);

	printf("Pares: %d \nMultiplos de 5: %d", numPares, multiplosCinco);
}