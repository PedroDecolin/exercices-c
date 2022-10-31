#include <stdio.h>

int main()
{
	int p = 5, k = 3;

	p -= 25;
	printf("p -= 25        => %d\n", p);

	k = 20 / 5;
	printf("k = 20 / 5     => %d\n", k);

	k = ++k;
	printf("k = ++k        => %d\n", k);

	k = p-- - 2;
	printf("k = p-- - 2    => %d\n", k);

	p %= 2 * 2;
	printf("p %= 2 * 2      => %d\n", p);

	p = ++k * 5;
	printf("p = ++k * 5    => %d\n", p);

	k = p & 3;
	printf("k = p & 3      => %d\n", k);

	p <<= 1;
	printf("p <<= 1        => %d\n", p);

	p = p / k * 10;
	printf("p = p / k * 10 => %d\n", p);
}