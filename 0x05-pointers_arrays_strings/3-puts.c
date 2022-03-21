#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string followed by a new line
 *
 * @str: input string
 * Return: Always 0
 */
void _puts(char *str)
{
	int l;

	for (l = 0; str[l] != '\0'; l++)
	{
		putchar(str[l]);
	}
	putchar('\n');
}
