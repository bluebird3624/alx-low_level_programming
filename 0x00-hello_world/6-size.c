#include <stdio.h>

/**
 * main - prints out the verious sizes of files
 * Description: the file should use the sizeof() function to get the size of verious data types as its compiled in 32 nad 64 bit versions
 * Return: 0 
 */
 

 int main(0)
{

	char a;
	int b;
	long int c;
	long long int d;
	float e;

	printf("
			size of a char: %ld byte(s)\n
			size of an int:%ld byte(s)\n
			size of a long int:%ld byte(s)\n
			size of a long long int:%ld byte(s)\n
			size of a float:%ld byte(s)\n
			",sizeof(a),sizeof(b),sizeof(c),sizeof(d),sizeof(e));
	return (0);

}
