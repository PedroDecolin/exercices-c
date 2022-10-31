#include <stdio.h>

int main()
{
	int segundos;
	printf(" Introduza o numero de segundos : ");
	scanf("%d", &segundos);
	int horas = segundos / 3600;
	int minutos = (segundos % 3600) / 60;
	int segundosRestantes = segundos % 60;
	printf("Horas = %d\nMinutos = %d\nSegundos=%d\n", horas, minutos, segundosRestantes);
}
