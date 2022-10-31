#include <stdio.h>

int main()
{
	int numRamos, caractere = 65;
	printf("Insira o numero de ramos da arvore:\n");
	scanf("%d", &numRamos);

	for (int i = 0; i < numRamos; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			printf("%c ", caractere);
		}
		printf("\n");
		caractere++;
	}
}