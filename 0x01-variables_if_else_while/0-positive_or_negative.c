#include <stdlib.h>
#include <time.h>

/**
 * main - entry point
 * Description: this function determines if the randomly generated n
 * is a number less than equal to or greater than zero 
 * Return: 0 
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	
	if(n > 0)
	{
	
		printf("%d is positive\n",n);

	}
	if(n == 0)
	{
		printf("%d is zero\n",n);
	
	}
	if(n < 0)
	{
		printf("%d is negative\n",n);
	}

	return (0);
}
