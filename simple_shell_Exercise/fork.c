#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

/**
 * main - forks the to one child process and waits for it to 
 * 	finish execution
 * Returns: always zero
 */

int main(void)
{
	pid_t id;
	id = fork();

	if (id == 0)
	{
		printf("Hello from the child process\n");
		printf("1\n");
		printf("2\n");
	}
	else if (id == -1)
	{
		printf("An Error occoured\n");
	}
	else
	{
		wait(&id);
		printf("Hello from parent\n");
		printf("1\n");
		printf("2\n");
	}

	return (0);
}
