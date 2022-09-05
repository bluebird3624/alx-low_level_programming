#include <stdio.h>
#include <stdlib.h>


/**
 * main - a program that prints a '$' symbol and accepts user input as a string
 * Returns: returns the whole line of strings typed in by the user
 */


int main()
{
	char input[100];

	printf("$ ");
	fgets(input, 100, stdin);
	printf("%s\n",input);

	return (0);
}
