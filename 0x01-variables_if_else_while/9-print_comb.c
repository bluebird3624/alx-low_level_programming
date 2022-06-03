#include <stdio.h>

/**
* main - entry point
* Return: always 0 (success)
*/

int main(void)
{
	int zero;

	for (zero = 48; zero <= 57; zero++)
	{
		putchar(zero);
		if (zero == 57)
		{
			putchar('/0');
			break;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
