#include "main.h"
/**
 * times_table - prints the 9 times table
 */
void times_table(void)
{
	int a, b, c, d, e;
	for (a = 0; a <= 9; a++)
	{
		for (c = 0; c <= 9; c++)
		{
			b = a * c;
			e = b / 10;
			d = b % 10;
			if (c == 9)
			{
				if (b > 9)
				{
					_putchar(' ');
					_putchar(e + '0');
					_putchar(d + '0');
				}
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(b + '0');
				}
			}
			else
			{
				if (b > 9)
				{
					_putchar(' ');
					_putchar(e + '0');
					_putchar(d + '0');
					_putchar(',');
				}
				else
				{
					if (c == 0)
					{
						_putchar(b + '0');
						_putchar(',');
					}
					else
					{
						_putchar(' ');
						_putchar(' ');
						_putchar(b + '0');
						_putchar(',');
					}
				}
			}
		}
		_putchar('\n');
	}
}
