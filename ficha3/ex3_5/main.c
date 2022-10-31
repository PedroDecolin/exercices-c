#include <stdio.h>

int main()
{
	float ficha1, ficha2, ficha3, exameFinal, notaFinal;

	printf("Insira a nota da ficha 1:\n");
	scanf("%f", &ficha1);

	printf("Insira a nota da ficha 2:\n");
	scanf("%f", &ficha2);

	printf("Insira a nota da ficha 3:\n");
	scanf("%f", &ficha3);

	printf("Insira a nota do exame final:\n");
	scanf("%f", &exameFinal);

	notaFinal = (ficha1 * 0.2) + (ficha2 * 0.2) + (ficha3 * 0.2) + (exameFinal * 0.4);
	printf("Nota final: %f", notaFinal);
}