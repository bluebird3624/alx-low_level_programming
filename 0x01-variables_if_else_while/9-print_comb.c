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
		putchar(',');
		putchar(' ');
	}
	return (0);
}
