#include "main.h"

/**
 * _print_rev_recursion - prints characters recursively in reverse
 * @s: the string being passed
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	else
	{
		if (*s == '\n')
		{
			_putchar(*s);
		}
		else
		{
			s++;
			_print_rev_recursion(s);
			_putchar(*s);
		}
	}

}
