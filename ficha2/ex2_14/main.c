#include <stdio.h>
#include <math.h>

int main()
{
	int num1, num2;

	printf("Introduza o primeiro numero:\n");
	scanf("%d", &num1);

	printf("Introduza o segundo numero:\n");
	scanf("%d", &num2);

	printf("Divisao inteira:                          %d\n", (int)(num1 / num2));
	printf("Divisao real:                             %f\n", ((float)num1 / num2));
	printf("O resto da divisao:                       %d\n", (num1 % num2));
	printf("A raiz quadrada da soma dos dois valores: %f\n", (sqrt(num1 + num2)));
	printf("O primeiro valor incrementado:            %d\n", ++num1);
	printf("O segundo valor incrementado:             %d\n", ++num2);
}