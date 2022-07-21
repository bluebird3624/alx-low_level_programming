#include "main.h"

int exponent(int expo)
{
	int i;
	int ans = 2;
	if(expo == 0)
	{
		return (1);
	}
	else if(expo == 1)
	{
		return (2);
	}
	else
	{
		for(i = 1; i < expo; i++)
		{
			ans = ans *2;
		}
		return (ans);
	}
}

unsigned int binary_to_uint(const char *b)
{
	unsigned int count;
	for(count = 0; string[count] != '\0'; count++)
	{
		if(string[count] != '0')
		{
			if(string[count] != '1')
			{
				if(string[count] != '\0')
				{
					return (0);
				}
			}
		}
	}

	int rev;
	unsigned int position = 0;
	unsigned int ans = 0;

	for(rev = (count - 1); rev >= 0; rev--)
	{
		if(string[rev] == '1')
		{
			ans = ans + exponent(position);
		}
		position++;
	}
	return (ans);
}
