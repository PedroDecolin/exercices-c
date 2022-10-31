#include <stdio.h>

int main()
{
	int num;

	printf("Insira um numero:\n");
	scanf("%d", &num);

	if (num >= 10 && num <= 50)
		printf("O numero %d encontra-se no intervalo 10 - 50", num);
	else
		printf("O numero %d econtra-se fora do intervalo 10 - 50", num);
}