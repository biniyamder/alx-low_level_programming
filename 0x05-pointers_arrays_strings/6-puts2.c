#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints every other character of a string
 *
 * @str: a string
 */
void puts2(char *str)
{
	int n = 0;

	while (str[n] != '\0')
	{
		if (n % 2 == 0)
		{
			putchar(str[n]);
		}
		n++;
	}
	putchar('\n');
}
