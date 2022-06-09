#include "main.h"

/**
 * _isupper - determines if c is a lower case or upper case
 * @c: contains an integer value set by main
 * Return: 1 for uppercase, 0 for otherwise
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
