#include "main.h"

/**
 * _puts_recursion - prints characters recursively
 * @s: the string being passed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		s++;
		_puts_recursion(s);
		_putchar(*s);
	}

}
