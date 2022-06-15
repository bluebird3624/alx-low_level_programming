#include "main.h"

/**
  * *_strncat - concatenates two strings
  * @dest: first string
  * @src: second string
  * @n: number of bytes that will be taken in
  * Return: pointer to the resulting string
  */

char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;

	for (i = 0; dest[i] != '\0'; i++)
	{
		len++;
	}

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}
	dest[i + j] = '\0';
	return (dest);
}
