#include "main.h"

/**
  * rev_string - reverses a string
  * @s: pointer to the passed variable
  */

void rev_string(char *s)
{
	int len = 0, st = 0, tem;

	while (s[len] != '\0')
		len++;

	while (len - 1 > st)
	{
		tem = s[st];
		s[st] = s[len - 1];
		s[len - 1] = tem;
		st++;
		len--;
	}
}
