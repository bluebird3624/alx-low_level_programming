#include "main.h"
/**
 * _islower - checks for lowercase character
 * Return: 0
 * description: checks if alphabet is lower
 * int a: local integer to the function
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
