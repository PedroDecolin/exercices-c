#include <stdio.h>

int main()
{
	float aceleracao, tempo, distancia;

	printf("Insira o valor da aceleracao:\n");
	scanf("%f", &aceleracao);

	printf("Insira o valor da tempo:\n");
	scanf("%f", &tempo);

	distancia = (aceleracao * (tempo * tempo)) / 2;
	printf("A distancia percorrida foi de: %.2f metros", distancia);
}