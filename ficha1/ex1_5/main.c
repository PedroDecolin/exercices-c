#include <stdio.h>

int main()
{
	int h, m, s, total;

	/*printf("Introduza a hora: \n");
	scanf("%d", &h);

	printf("Introduza os minutos: \n");
	scanf("%d", &m);

	printf("Introduza os segundos: \n");
	scanf("%d", &s);*/

	printf("Introduza a hora [hh:mm:ss]: ");
	scanf("%d %d %d", &h, &m, &s);

	total = (h * 3600) + (m * 60) + s;
	total = ((h * 60) + m) * 60 + s;

	printf("O total de segundos e : %d", total);
}