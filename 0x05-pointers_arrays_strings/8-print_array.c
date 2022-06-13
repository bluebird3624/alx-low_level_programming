#include <stdio.h>

/**
  * print_array - prints element n in an array
  * @a: array
  * @n: elements needed to print the array
  */

void print_array(int *a, int n)
{
	int e = 0;

	while (e < n)
	{
		if (e >= n - 1)
			printf("%d", a[e]);
		else
			printf("%d, ", a[e]);
		e++;
	}
	printf("\n");
}
