#include <stdio.h>

int main()
{
	char ch;
	printf(" Introduza a letra minuscula : ");
	scanf("%c", &ch);
	printf("O correspondente maiusculo de %c = %c\n", ch, ch - ('a' - 'A'));
}