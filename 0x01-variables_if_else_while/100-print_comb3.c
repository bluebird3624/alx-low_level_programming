#include <stdio.h>

/**
* main - loop through variables a and b, to generate unique number pairs
*
* Return: 0
*/

int main(void)
{
	int a = '0';
	int b;

	while (a <= '9')
	{
		b = a++;
	while (b <= '9')
	{
		putchar(a);
		putchar(b);
	if (a == '8' && b == '9')
	{
		putchar('\n');
	}
	else
	{
		putchar(',');
		putchar(' ');
	}
		b++;
	}
		a++;
	}
	return (0);
}
