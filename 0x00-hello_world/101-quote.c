#include <stdio.h>
#include <unistd.h>

/**
 * main - program begins here
 * Description: the program uses write function to return an error
 * Return: 1
 */

int main(void)
{
	char word[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2,"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",59);
	return (1);
}
