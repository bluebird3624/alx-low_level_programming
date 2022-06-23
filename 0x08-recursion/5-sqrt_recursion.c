#include "main.h"

/**
 * square - multiplies a number by itself
 * @x: The number to be multiplied by itself.
 * @y: number of times the number multiplies to it self
 * Return: x
 */

int square(int x, int y)
{
	int sqrt;

	sqr = x * x;

	if (sqr == y)
	{
		return (x);
	}
	else
	{
		return (square(1+x,y));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: If n has a natural square root - the natural square root of n.
 * else 1.
 */

int _sqrt_recursion(int n)
{
	int i = 1;

	return (1 + sqare(1 + i, n));
}
