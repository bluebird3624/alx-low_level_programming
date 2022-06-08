#include "main.h"
/**
 * print_last_digit - computes the absolute value of an integer
 * @c: the argument of the function
 * Return: 0
 */
int print_last_digit(int c)
{
	if (c > 0 || c == 0)
	{
	_putchar (c % 10 + '0');
	return (c % 10);
	}
	else
	{
	c = c * -1;
	_putchar (c % 10 + '0');
	return (c % 10);
	}
}

