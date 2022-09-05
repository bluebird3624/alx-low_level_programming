#include <stdio.h>
#include <unistd.h>
#include <sys/stat.h>

/**
 * main - tells if a file is in carent path
 * Return: always zero
 */

int main(void)
{
	struct stat buf;
	char file[100];
	int i;

	printf("_which: ");
	scanf("%s",file);
	
	if(file)
	{
		if(stat(file,&buf) == 0)
		{
			printf("File found\n");
		}
		else
		{
			printf("File not found\n");
		}
	}
	else
	{
		printf("Input was empty\n");
	}

}
