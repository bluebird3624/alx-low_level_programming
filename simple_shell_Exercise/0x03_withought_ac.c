#include <stdio.h>

/**
 * main - function that prints mains arguments withough usimg ac
 * Returns : always zero
 */

int main(int ac,char* av[])
{
	int i;

	for (i = 0; av[i] != NULL; i++)
	{
		printf("%s\n",av[i]);
	}	
}
