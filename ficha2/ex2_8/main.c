#include <stdio.h>

int main()
{
	char ch;

	printf("Insira um caractere:\n");
	scanf("%c", &ch);

	if (ch >= 'A' && ch <= 'Z')
	{
		printf("A letra %c e maiuscula\nVersao minuscula e: %c", ch, (ch + 32));
	}
	else if (ch >= 'a' && ch <= 'z')
	{
		printf("A letra '%c' e minuscula\nVersao maiuscula e: %c", ch, (ch - 32));
	}
	else if (ch >= '0' && ch <= '9')
		printf("O caractere '%c' e um numero\n", ch);
	else
		printf("O caractere '%c' nao e alfanumerico", ch);
}