#include <stdio.h>

int main()
{
	int a, b, temp;

	printf("Insira o valor de a: ");
	scanf("%d", &a);
	printf("Insira o valor de b:");
	scanf("%d", &b);

	temp = a;
	a = b;
	b = temp;

	printf("Novo valor de A: %d\nNovo valor de B: %d", a, b);
}