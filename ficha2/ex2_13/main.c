#include <stdio.h>

int main()
{
	int num1, num2;

	printf("Introduza o primeiro numero: ");
	scanf("%d", &num1);

	printf("Introduza o segundo numero:");
	scanf("%d", &num2);

	printf("%d + %d = %d\n", num1, num2, (num1 + num2));
	printf("%d - %d = %d\n", num1, num2, (num1 - num2));
	printf("%d * %d = %d\n", num1, num2, (num1 * num2));
	printf("%d / %d = %d\n", num1, num2, (num1 / num2));
}