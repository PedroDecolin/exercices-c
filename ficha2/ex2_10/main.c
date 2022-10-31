#include <stdio.h>

int main()
{
	int x, y;

	y = 4 + 3 * 2;
	printf("y = 4 + 3 * 2     => %d\n", y);

	x = 3 * 4 / 2 - 2;
	printf("x = 3 * 4 / 2 - 2 => %d\n", x);

	x = y++;
	printf("x = y++           => %d\n", x);

	x += 3;
	printf("x += 3            => %d\n", x);

	y -= 2;
	printf("y -= 2            => %d\n", y);

	x /= 3;
	printf("x /= 3            => %d\n", x);

	y %= 3;
	printf("y %= 3            => %d\n", y);

	x *= y++ + 3;
	printf("x *= y++ + 3      => %d\n", x);
}