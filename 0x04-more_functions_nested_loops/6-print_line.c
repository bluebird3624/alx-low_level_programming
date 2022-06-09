#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 * @n: represents the number of times a character is printed
 */

void print_line(int n)
{
	int i = 1;

	if (i > 0)
		while (n >= i)
		{
			_putchar('_');
			i++;
		}
	_putchar('\n');
}
