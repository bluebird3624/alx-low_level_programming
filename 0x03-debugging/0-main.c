#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;
	int j;

        i = 0;
        j = positive_or_negative(i);

	if (j == i)
	{
		printf("%d is zero",i);

        return (0);
}
