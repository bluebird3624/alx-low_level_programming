#include "main.h"

/**
 * print_square - prints squares based on n
 * @size: int value passed into the function
 */

void print_square(int size)
{
	int len, wid;

	if (size > 0)
		for (len = 1; len <= size; len++)
		{
			for (wid = 1; wid <= size; wid++)
			{
				_putchar(35);
			}
			_putchar(10);
		}
	else
		_putchar(10);
}
