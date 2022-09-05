#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>
#include <stdlib.h>

/**
 * main - executes comands passed in
 * Return: always zero
 */

int main(void)
{
	pid_t id1;
	int i;
	for (i = 0; i< 5; i++)
	{
		id1 = fork();

		if (id1 == -1)
		{
			printf("Fork failed");
		}
		else if (id1 == 0)
		{
			fflush(stdout);
			printf(" \n\n--Child Process %d:--%d\n",i,getpid());
                	printf(" --Parent process:--%d\n\n",getppid());
			char* binarypath = "/bin/ls";
        		char *const args[] = {"/bin/ls","-l","/tmp",NULL};
        		execve(binarypath, args, NULL);
		}
		else
		{
			wait(&id1);
			printf("----------------------------- END OF ITERATION %d --------------------------\n\n",i);
		}
	}

	return (0);
}
