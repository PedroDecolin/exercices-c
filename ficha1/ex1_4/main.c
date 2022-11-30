#include <stdio.h>

int main()
{
	int a = 1;
	printf("O valor do tipo char e: %d bytes\n", sizeof(char));
	printf("O valor do tipo int e: %d bytes\n", sizeof(int));
	printf("O valor do tipo float e: %d bytes\n", sizeof(float));
	printf("O valor do tipo double e: %d bytes\n", sizeof(double));
	printf("O valor da variavel A e: %d bytes\n", sizeof(a));
}