#include "main.h"

/**
 * find_sqrt - multiplies a number by itself
 * @num: The number to be multiplied by itself.
 * @root: number of times the number multiplies to it self
 * Return: x
 */

int find_sqrt(int num, int root)
{
	if ((root * root) == num)
		return (root);

	if (root == num / 2)
		return (-1);

	return (find_sqrt(num, root + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number.
 * @n: The number to return the square root of.
 * Return: If n has a natural square root - the natural square root of n.
 * else 1.
 */

int _sqrt_recursion(int n)
{
	int root = 0;

	if (n < 0)
		return (-1);

	if (n == 1)
		return (1);

	return (find_sqrt(n, root));
}
