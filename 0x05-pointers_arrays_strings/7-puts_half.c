#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 *
 * @str: a string
 */
void puts_half(char *str)
{
	int l, n, m;

	for (l = 0; str[l] != '\0'; l++)
	{
	}
	n = (l - 1) / 2;
	for (m = n + 1; str[m] != '\0'; m++)
	{
		putchar(str[m]);
	}
	putchar('\n');
}
