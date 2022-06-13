#include "main.h"

/**
* _puts - prints out a string and a newline
* @str: pointer to the location of passed in value
*/

void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
