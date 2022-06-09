#include "main.h"

/**
 * print_diagonal - draws a diagonal
 * @n: variable passed into the function
 */

void print_diagonal(int n)
{
	int i = 1, num;
	char space = ' ';

	if (n > 0)
		while (n >= i)
		{
			if (i >= 2)
				for (num = 2; num <= i; num++)
					_putchar(space);
			_putchar(92);
			_putchar('\n');
			i++;
		}
	else
		_putchar('\n');
}
