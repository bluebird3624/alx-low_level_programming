#include "main.h"

/**
  * *_strcpy - copies a string
  * @dest: destination
  * @src: pointer to string
  * Return: copy  of string in destination
*/

char *_strcpy(char *dest, char *src)
{
	int len = 0, el;

	while (src[len] != '\0')
		len++;

	for (el = 0; el < len; el++)
		dest[el] = src[el];
	return (dest);
}
