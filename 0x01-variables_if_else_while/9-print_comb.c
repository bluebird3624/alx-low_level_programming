#include <stdio.h>

/**
* main - entry point
* Return: 0
*/

int main(void)
{
	int zero;

	for (zero = 48; zero <= 57; zero++)
	{
		putchar(zero);
		if (zero == 57)
		{
			putchar('\n');
			break;
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
