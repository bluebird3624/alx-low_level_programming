#include <stdio.h>

/**
 * main - program begins here
 *Description: the program uses write function to return an error
 * Return: 1
 */

int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2,word,59);
	return (1);
}
