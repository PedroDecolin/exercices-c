#include <stdio.h>

int main()
{
	char clube;

	printf("Insira a sigla do clube [b, g, p, s]:\n");
	scanf("%c", &clube);

	if (clube == 'b' || clube == 'B')
	{
		printf("Benfica");
	}
	else if (clube == 'g' || clube == 'G')
	{
		printf("Guimaraes");
	}
	else if (clube == 'p' || clube == 'P')
	{
		printf("Porto");
	}
	else if (clube == 's' || clube == 'S')
	{
		printf("Sporting");
	}
	else
		printf("Caractere invalido!\n");
}