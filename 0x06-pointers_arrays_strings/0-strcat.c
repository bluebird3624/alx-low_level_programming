#include "main.h"

/**
  * *_strcat - concatenates two strings
  * @dest: first string
  * @src: second string
  * Return: returns the pointer to the resulting string address
  */

char *_strcat(char *dest, char *src)
{
	int str1, str2 = 0;

	for (str1 = 0; str1 >= 0; str1++)
	{
		if (dest[str1] == '\0')
			dest[str1] = src[str2];
		if (dest[str1] == src[str2])
			str2++;
		if (src[str2] == '\0')
			break;
	}
	return (dest);
}
