#include "main.h"

/**
 * _strlen_recursion - Returns the length of a string.
 * @s: The string to be counted.
 * Return: The length of the string.
 */

int _strlen_recursion(char *s)
{
	int count = 0;

	if (*s)
	{
		count++;
		s++;
		count += _strlen_recursion(s);
	}

	return (count);
}
