#include <stdio.h>

int main()
{
	float num = 0, maiorNum = 0, menorNum = 0;
	int i = 0;

	for (;;)
	{
		fseek(stdin, 0, SEEK_END);
		printf("Introduza um numero real:\n");
		scanf("%f", &num);

		if (num < 0)
			break;

		if (i == 0)
		{
			maiorNum = num;
			menorNum = num;
		}
		i++;

		if (num > maiorNum)
			maiorNum = num;
		if (num < menorNum)
			menorNum = num;
	}

	printf("Maior numero: %f\nMenor numero: %f", maiorNum, menorNum);
}