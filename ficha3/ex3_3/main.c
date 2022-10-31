#include <stdio.h>

int main()
{
	char situacao;

	printf("Insira a sua situacao atual:\n");
	printf("s\\S - Solteiro\n");
	printf("c\\C - Casado\n");
	printf("v\\V - Viuvo\n");
	printf("d\\D - Divorciado\n");
	scanf("%c", &situacao);

	if (situacao == 's' || situacao == 'S')
		printf("Solteiro");
	else if (situacao == 'c' || situacao == 'C')
		printf("Casado");
	else if (situacao == 'v' || situacao == 'V')
		printf("Viuvo");
	else if (situacao == 'd' || situacao == 'D')
		printf("Divorciado");
	else
		printf("Caractere invalido");
}