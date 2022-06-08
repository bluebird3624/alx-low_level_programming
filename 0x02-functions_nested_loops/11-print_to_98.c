#include "main.h"

/**
 * count - counts every number towards 98
 * Return: void
 * @n: the number input as function parameter
 */

void print_to_98(int n)
{
	while (1)
	{
		if (n == 98)
		{
			printf("%d\n", n);
			break;
		}
		else
		{
			printf("%d, ", n);
		}
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
}
