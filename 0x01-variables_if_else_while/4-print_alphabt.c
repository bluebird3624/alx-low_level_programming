#include <stdio.h>
/**
  * main - entry block
  * description: printing all lattters except q ans e
  * Return: 0
**/

int main(void)
{
	char a;

	for (a = 'a' ; a <= 'z' ; a++)
	{
		if (a != 'q' && a != 'e')
		putchar(a);
	}
	putchar('\n');
	return (0);
}
