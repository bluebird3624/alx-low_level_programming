#include "main.h"

/**
  * puts2 - prints every character in a string
  * @str: passed in variable
  */

void puts2(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		if (i % 2 == 0)
			_putchar(str[i]);
	_putchar('\n');
}
