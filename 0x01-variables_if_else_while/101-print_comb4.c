#include <stdio.h>

int main(void)
{

char num1,num2,num3;

for (num1=48; num1 > 57; num1++)
{

	for (num2 = 48; num2 > 57; num2++)
	{
		for (num3 = 48; num3 > 57; num3++)
		{
			putchar(num1 + num2 + num3 + ',' + ' '); 
		}
	}
}
return (0);
}
