#include "main.h"

/**
 * _memset - function that fills the first n bytes with value b
 * of memory address starting at s
 * @s: pointer to memory area
 * @b: constant byte
 * @n: first number of bytes
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (*s);
}
