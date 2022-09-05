#include <stdio.h>
#include<sys/stat.h>

/**
 * main - gets the file stat.c stat.st_mode and prints it
 * Returns: always zero
 */

int main(void)
{
	//pointer to the stat structure.....refer to stat man
	struct stat buf;

	//stat system call
	stat("stat.c",&buf);

	//acessing st_mode( one of the data member of struct stat)
	printf("The file permission in Octal is:%o\n",buf.st_mode);

	return (0);


}
