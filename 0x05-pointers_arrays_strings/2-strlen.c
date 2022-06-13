#include "main.h"

/**
 * _strlen - determines the length of a string
 * @s: value a string is passed into
 * Return: returns length of the passed in string
 */


int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
