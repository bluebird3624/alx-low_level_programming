#include "main.h"
/**
 * print_sign - checks for a sign of a number
 * @n:  the argument of the function
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
	_putchar('+');
	return (1);
}
	else if (n < 0)
	{
	_putchar('-');
	return (-1);
	}
	else
	{
	_putchar('0');
	return (0);
	}
}
