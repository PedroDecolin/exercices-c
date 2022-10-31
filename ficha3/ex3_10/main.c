#include <stdio.h>

int main()
{
	int numDependentes;
	float abono;

	printf("Insira o numero de dependentes:\n");
	scanf("%d", &numDependentes);

	if (numDependentes > 0)
	{
		switch (numDependentes)
		{

		case 1:
			printf("Abono de 50 euros");
			break;
		case 2:
			printf("Abono de 90,5 euros");
			break;
		case 3:
			printf("Abono de 170,7");
			break;
		default:
			abono = 170.7 + (20.3 * numDependentes);
			printf("Abono de %f euros", abono);
		}
	}
	else
		printf("O valor inserido invalido");
}