#include <stdio.h>

int main()
{
	float nota;

	printf("Insira a nota:\n");
	scanf("%f", &nota);

	if (nota >= 9.5 && nota <= 20.)
		printf("Aprovado!");
	else if (nota >= 6.5 && nota < 9.5)
		printf("Prova oral disponivel");
	else if (nota < 6.5 && nota >= 0)
		printf("Reprovado");
	else
		printf("Nota invalida");
}