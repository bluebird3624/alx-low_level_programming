#include <stdlib.h>
#include <time.h>
#include <stdio.h>
#include <string.h>

/**
 * main - entry point
 * Description: the program gets the last digit of the number 
 * through modular division by 10 where the last number is the remainder
 * Retun: 0
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;

	int last;
	last = n % 10;
	char *word;

	if (n >5)
	{
		word = "and is greater than 5\n";
	}
	else if (n == 0)
	{
		word = "and is 0\n";
	}
	else if (n < 6 && n != 0)
	{
		word = "and is less than 6 and not 0\n";
	}

	printf("The last digit of %d is %d %s " ,n,last,word);

	return (0);
}
