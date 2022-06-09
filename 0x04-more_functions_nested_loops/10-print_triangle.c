#include "main.h"

/**
 * print_triangle - prints the triangles
 * @size: determines the size of the triangles
 */

void print_triangle(int size)
{
	int len, wid;

	if (size > 0)

		for (len = 1; len <= size; len++)
		{
			for (wid = size; wid > 0; wid--)
			{
				if (wid > len)
					_putchar(' ');
				else
					_putchar('#');
			}
		_putchar('\n');
		}
	else
		_putchar('\n');
}
