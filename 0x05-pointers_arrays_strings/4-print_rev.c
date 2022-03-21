#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints string in reverse
 *
 * @s: a string
 */
void print_rev(char *s)
{
	int n = 0;
	int l;

	for (l = 0; s[l] != '\0'; l++)
	{
	}
	for (n = l - 1; n >= 0; n--)
	{
		putchar(s[n]);
	}
	putchar('\n');
}
