#include "main.h"

/**
 * exponent - a function that calculates the exponent of a numbers based 2
 * @expo: the power of the base 2
 * Return: the exponent of base two to the power passed in
 */

int exponent(int expo)
{
	int i;
	int ans = 2;

	if (expo == 0)
	{
		return (1);
	}
	else if (expo == 1)
	{
		return (2);
	}
	else
	{
		for (i = 1; i < expo; i++)
		{
			ans = ans * 2;
		}
		return (ans);
	}
}

/**
 * binary_to_uint - function that converts a binary string to base 10 numbers
 * @b: the binary string passed to the function
 * Return: the converted number or zero if the binary
 * string contains elements other then 0,1 an the null byte
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	int rev;
	unsigned int position = 0;
	unsigned int ans = 0;

	for (count = 0; b[count] != '\0'; count++)
	{
		if (b[count] != '0')
		{
			if (b[count] != '1')
			{
				if (b[count] != '\0')
				{
					return (0);
				}
			}
		}
	}

	for (rev = (count - 1); rev >= 0; rev--)
	{
		if (b[rev] == '1')
		{
			ans = ans + exponent(position);
		}
		position++;
	}
	return (ans);
}
