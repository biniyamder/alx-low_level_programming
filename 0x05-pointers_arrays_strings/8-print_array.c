#include <stdio.h>
#include "main.h"
/**
 * print_array - prints n elements of an array of integers
 *
 * @a: first integer
 * @n: second integer
 */
void print_array(int *a, int n)
{
	int m;

	for (m = 0; m < n; m++)
	{
		printf("%d", a[m]);
		if (m < n - 1)
		{
			printf(", ");
		}
	}
	printf("\n");
}
