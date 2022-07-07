#include "variadic_functions.h"

/**
 * sum_them_all - sum all the parametes.
 * @n: the number of parameters
 * Description: sums all the parameters?
 * Return: this return the sum of the parameters.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list num;
	int sum;
	unsigned int x;

	x = 0;

	if (n == 0)
		return (0);
	sum = 0;
	va_start(num, n);
	while (x < n)
	{
		sum = sum + va_arg(num, int);
		x++;
	}
	va_end(num);
	return (sum);
}
