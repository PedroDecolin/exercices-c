#include <stdio.h>

int main()
{
	int i;

	// while
	printf("While:      ");
	i = 1;
	while (i <= 10)
	{
		printf("%d ", i);
		i++;
	}

	// do while
	printf("\nDo while:   ");
	i = 1;
	do
	{
		printf("%d ", i);
		i++;
	} while (i <= 10);

	// for
	printf("\nFor:        ");
	for (i = 1; i <= 10; i++)
	{
		printf("%d ", i);
	}
}