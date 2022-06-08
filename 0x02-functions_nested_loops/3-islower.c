#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 0
 * description: checks if alphabet is lower
 * @c: local integer to the function
 */
int _islower(int c)
{
	if (c > 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
