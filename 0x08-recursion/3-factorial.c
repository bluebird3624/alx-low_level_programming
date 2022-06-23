#include "main.h"

/**
 * factorial - claculates factorial of a number
 * @n: number to be calculated
 * Return: factorial of the number
 */

int factorial(int n)
{
	if(n < 0)
	{
		return(-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
