#include "main.h"

/**
 * _puts_recursion - prints characters recursively
 * @s: the string being passed
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	else
	{
		_putchar(*s);
		s++;
		_puts_recursion(s);
	}

}
