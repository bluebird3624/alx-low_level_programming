#include <stdio.h>

/**
 * fizz_buzz - this function prints fizz for numbers
 */


void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
		printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
			if (i == 100)
			{
				putchar('\n');
			}
		}
		else
		{
			printf("%d ", i);
		}
	}
}

/**
 * main - calls the function fizz_buzz
 * Return: 0
 */
int main(void)
{
	fizz_buzz();
	return (0);
}
