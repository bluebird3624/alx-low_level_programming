#include "main.h"

/**
 * print_last_digit - computes absolute value of an int
 * @a: argument for the function
 * Return: 0
 */

int print_last_digit(int a)
{
	int l = a % 10;

	if (l >= 0)
	{
		_putchar(l + '0');
		return (l);
	}
	else
	{
		_putchar(-l + '0');
		return (-l);
	}
}
