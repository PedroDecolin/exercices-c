#include <stdio.h>

int main()
{
	char ch;

	printf("Insira um caractere:\n");
	scanf("%c", &ch);

	int codigoAscii = ch;

	if (ch >= 65 && ch <= 90)
	{
		printf("A letra %c e maiuscula\nVersao minuscula e: %c", ch, (ch + 32));
	}
	else if (ch >= 97 && ch <= 122)
	{
		printf("A letra '%c' e minuscula\nVersao maiuscula e: %c", ch, (ch - 32));
	}
	else if (ch >= 48 && ch <= 57)
		printf("O caractere '%c' e um numero\n", ch);
	else
		printf("O caractere '%c' nao e alfanumerico", ch);
}