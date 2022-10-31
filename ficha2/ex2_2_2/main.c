#include <stdio.h>

int main()
{
	float comprimento, largura, area, perimetro;
	printf("Insira o valor do comprimento:\n");
	scanf_s("%f", &comprimento);
	printf("Insira o valor da largura:\n");
	scanf_s("%f", &largura);

	area = largura * comprimento;
	perimetro = (largura * 2) + (comprimento * 2);

	printf("Area: %f Perimetro: %f\n", area, perimetro);
	if (largura == comprimento)
		printf("A figura e um quadrado\n");
	else
		printf("A figura e um retangulo\n");
}