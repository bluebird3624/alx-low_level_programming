#include "main.h"

/**
 * jack_bauner: returns all time
 * Return: 0
 */
void jack_bauer(void)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;

	for (a = 0; a <= 2; a++)
	{	

		for (b = 0; b <= 9; b++)
		{ 
			if (a == 2 && (b == 4 || b == 5 || b == 6 || b == 7 || b == 8 ||b == 9 ))
			{
				continue;
			}


			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{
					putchar(a + '0');
					putchar(b + '0');
					putchar(':');
					putchar(c + '0');
					putchar(d + '0');
					putchar(' ');
				}	

			}
		}
	}
}
