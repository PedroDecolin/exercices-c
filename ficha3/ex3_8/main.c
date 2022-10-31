#include <stdio.h>

int main()
{
	float notaPratica, notaEscrito, notaContinua, notaFinal;

	printf("Insira a nota do trabalho pratico:\n");
	scanf("%f", &notaPratica);

	printf("Insira a nota do exame escrito:\n");
	scanf("%f", &notaEscrito);

	printf("Insira a nota da avaliacao continua:\n");
	scanf("%f", &notaContinua);

	notaFinal = (notaPratica * 0.3) + (notaEscrito * 0.5) + (notaContinua * 0.2);
	printf("Nota final: %f\n", notaFinal);

	if (notaFinal >= 0 && notaFinal <= 20)
	{
		if (notaFinal >= 9.5)
			printf("Aprovado!");
		else
			printf("Reprovado!");
	}
	else
		printf("Nota invalida");
}