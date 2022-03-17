#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - function that prints 10 times the alphabet in lowercase
 *
 * Return: x10 a-z
 */
void print_alphabet_x10(void)
{
	int i, n;

	i = 0;

	while (i < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			putchar(n);
		}
		i++;
		putchar('\n');
	}
}
