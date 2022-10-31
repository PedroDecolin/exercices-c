#include <stdio.h>

int main()
{
	float temperatura;

	printf("Insira o valor medio da temperatura:\n");
	scanf("%f", &temperatura);

	if (temperatura <= 10)
	{
		printf("Muito frio");
	}
	else if (temperatura > 10 && temperatura <= 20)
	{
		printf("Frio");
	}
	else if (temperatura > 20 && temperatura <= 25)
	{
		printf("Ameno");
	}
	else if (temperatura > 25 && temperatura <= 30)
	{
		printf("Quente");
	}
	else if (temperatura > 30)
	{
		printf("Muito quente");
	}
}