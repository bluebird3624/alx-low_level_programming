#include "holberton.h"

/**
  * puts_half - prints half of a string
  * @str: contains the passed in string
  */

void puts_half(char *str)
{
	int len = 0, h1;

	while (str[len] != '\0')
		len++;

	if (len % 2 == 0)
		h1 = len / 2;
	else
		h1 = (len + 1) / 2;

	for (; h1 < len; h1++)
		_putchar(str[h1]);
	_putchar('\n');
}
