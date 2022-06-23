#include "main.h"

/**
 * _pow_recursion - Returns the value of x raised to the power of y.
 * @x: The number to be exponentiated
 * @y: The exponent.
 * Return: The value of exponent.
 */

int _pow_recursion(int x, int y)
{
	int result = x;

	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
	result *= _pow_recursion(x, y - 1);
	}

	return (result);
}
