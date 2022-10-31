#include <stdio.h>

int main()
{
	float salario;
	printf("Insira o valor do salario:\n");
	scanf("%f", &salario);

	if (salario < 400)
	{
		salario += 100;
	}

	printf("O valor do salario passa a ser: %.2f", salario);
}