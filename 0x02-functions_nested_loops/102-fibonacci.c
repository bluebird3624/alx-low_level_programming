#include <stdio.h>

/**
 * main - Print fibonacci series.
 * Return: Always 0 (Success)
 */
int main(void)
{
	long n, one, two, sum;

	one = 2;
	two = 1;
	sum = 3;
	n = 2;

	printf("1, 2, ");
	while (n <= 50)
	{
		printf("%lu", sum);
		if (n == 49)
			break;
		printf(", ");

		two = one;
		one = sum;
		sum = one + two;
		n++;
	}
	putchar('\n');

	return (0);
}
