#include <stdio.h>

int main()
{
	int nota;

	printf("Insira a nota:\n");
	scanf("%d", &nota);

	if (nota >= 9 && nota <= 20)
		printf("Aprovado!");
	else if (nota >= 0 && nota < 9)
		printf("Reprovado");
	else
		printf("Nota invalida");
}