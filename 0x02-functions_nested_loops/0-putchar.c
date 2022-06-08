#include "holberton.h"

/**
 * main - entry point
 * Return: 0
 */
int main(void)
{
	char string[8] = {'_', 'p', 'u', 't', 'c', 'h', 'a', 'r'};
	unsigned int c;

	for (c = 0; c < sizeof(string); c++)
	{
		_putchar(string[c]);
	}
_putchar('\n');
return (0);
}
