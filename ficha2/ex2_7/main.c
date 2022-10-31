#include <stdio.h>

int main()
{
	int a, b, c;
	printf("Insira o valor de A:\n");
	scanf("%d", &a);
	printf("Insira o valor de B:\n");
	scanf("%d", &b);
	printf("Insira o valor de C:\n");
	scanf("%d", &c);

	if (a != 0 && b != 0 && c != 0)
	{
		if (a > b && a > 0)
		{
			if (b > c)
				printf("Em ordem crescente: %d %d %d", c, b, a);
			else
				printf("Em ordem crescente: %d %d %d", b, c, a);
		}
		else if (b > a && b > c)
		{
			if (a > c)
				printf("Em ordem crescente: %d %d %d", c, a, b);
			else
				printf("Em ordem crescente: %d %d %d", a, c, b);
		}
		else if (c > a && c > b)
		{
			if (a > b)
				printf("Em ordem crescente: %d %d %d", b, a, c);
			else
				printf("Em ordem crescente: %d %d %d", a, b, c);
		}
	}
	else
		printf("Algum numero introduzido e 0");
}