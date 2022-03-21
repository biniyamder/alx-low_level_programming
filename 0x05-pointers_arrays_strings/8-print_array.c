#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
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
