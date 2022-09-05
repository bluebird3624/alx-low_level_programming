#include <stdio.h>
#include <unistd.h>

/*
 * main - prints the parent  process id of the program
 * Return: Always zero
 **/


int main()
{
	pid_t my_ppid;

	my_ppid = getppid();

	printf("%d\n",my_ppid);

	return (0);
}
