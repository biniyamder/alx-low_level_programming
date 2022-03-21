#include <stdio.h>
#include "main.h"
/**
 * void swap_int - swaps values of two integers
 *
 * @a: first pointer
 * @b: second pointer
 * Return; Always 0
 */
void swap_int(int *a, int *b)
{
	int nu;

	nu = 0;
	nu = *a;
	*a = *b;
	*b = nu;
}
