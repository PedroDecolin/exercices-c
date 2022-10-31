#include <stdio.h>

int main() {
	int num1, num2;
	char opcao;

	printf("Escolha um operador:\n");
	printf("+) adicao\n");
	printf("-) subtracao\n");
	printf("*) multiplicacao\n");
	printf("/) divisao\n");
	printf("/) divisao\n");
	scanf("%c", &opcao);

	printf("Insira o primeiro valor:\n");
	scanf("%d", &num1);

	printf("Insira o segundo valor:\n");
	scanf("%d", &num2);

	if (opcao == '+') {
		printf("%d + %d = %d", num1, num2, (num1 + num2));
	}
	else if (opcao == '-') {
		printf("%d - %d = %d", num1, num2, (num1 - num2));
	}
	else if (opcao == '*') {
		printf("%d * %d = %d", num1, num2, (num1 * num2));
	}
	else if (opcao == '/') {
		printf("%d / %d = %d", num1, num2, (num1 / num2));
	}
	else
		printf("Tu digitas-te o caractere errado!");
}