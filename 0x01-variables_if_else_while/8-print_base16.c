#include <stdio.h>

/**
* main - entry block
* Return: 0
*/

int main(void)
{
	int i;
	char v;

	for (i = 0; i < 10; i++)
		putchar(i + '0');
	for (v = 'a'; v <= 'f'; v++)
	{
		putchar(v);
	}
	putchar('\n');
	return (0);
}
