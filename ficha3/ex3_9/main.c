#include <stdio.h>

int main()
{
	float peso;
	char sexo;

	printf("Insira o sexo:\n");
	scanf("%c", &sexo);

	printf("Insira o peso:\n");
	scanf("%f", &peso);

	if (sexo == 'm')
	{
		if (peso > 0 && peso <= 50)
			printf("Muito magro\n");
		else if (peso > 50 && peso <= 60)
			printf("Magro\n");
		else if (peso > 60 && peso <= 80)
			printf("Saudavel\n");
		else if (peso > 80 && peso <= 90)
			printf("Gordo\n");
		else if (peso > 90)
			printf("Muito gordo\n");
	}
	else if (sexo == 'f')
	{
		if (peso > 0 && peso <= 40)
			printf("Muito magro\n");
		else if (peso > 40 && peso <= 50)
			printf("Magro\n");
		else if (peso > 50 && peso <= 65)
			printf("Saudavel\n");
		else if (peso > 65 && peso <= 80)
			printf("Gordo\n");
		else if (peso > 80)
			printf("Muito gordo\n");
	}
	else
		printf("Sexo invalido");
}