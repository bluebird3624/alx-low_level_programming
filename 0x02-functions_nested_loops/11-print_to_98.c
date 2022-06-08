#include "main.h"

/**
 * count - counts every number towards 98
 * Return: void
 * @n: the number input as function parameter
 */

void print(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n/10)
	{
		print(n/10);
		_putchar(n%10 + '0');
}
void print_to_98(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			print(n);
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			print(n);
		}
	}
	_putchar('\n');
}
