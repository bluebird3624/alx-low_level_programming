#include "main.h"
/**
 * print_alphabet_x10 - print alphabets 10 times
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int a, i;

	for (i = 0; i <= 9; i++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}
