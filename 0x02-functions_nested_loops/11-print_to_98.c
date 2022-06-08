#include "main.h"

/**
 * count - counts every number towards 98
 * Return: void
 * @n: the number input as function parameter
 */

void count(int n)
{
	if (n > 98)
	{
		for (n = n; n >= 98; n--)
		{
			_putchar(n + '0');
		}
	}
	else
	{
		for (n = n; n <= 98; n++)
		{
			_putchar(n + '0');
		}
	}
	_putchar('\n');
}
