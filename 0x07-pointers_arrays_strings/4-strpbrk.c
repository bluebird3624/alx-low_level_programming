#include "main.h"

/**
 * _strpbrk - Searches for any of a set of bytes.
 * @s: The string to be searched.
 * @accept: The set of bytes to be searched.
 * Return: If a set is matched - a pointer to the matched byte.
 * else no set is matched - NULL.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
