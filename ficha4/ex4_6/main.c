#include <stdio.h>

int main()
{
	int i, controleLinha = 1;
	for (i = 32; i < 128; i++)
	{
		printf("%c (%-3d)  ", i, i);
		if (controleLinha == 16)
		{
			printf("\n");
			controleLinha = 0;
		}
		controleLinha++;
	}
}