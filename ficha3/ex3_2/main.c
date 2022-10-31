#include <stdio.h>

int main()
{
	float num;

	printf("Insira um numero:\n");
	scanf("%f", &num);

	if (num > 0)
		printf("Positivo");
	else if (num < 0)
		printf("Negativo");
	else
		printf("Nulo");
}