#include <stdio.h>
#include "main.h"
/**
 * rev_string - function that reverse a string
 *
 * @s: a string
 */
void rev_string(char *s)
{
	int l, m, n;
	char c1, c2;

	for (l = 0; s[l] != '\0'; l++)
	{
	}

	m = l - 1;
	n = 0;

	while (m > n)
	{
		c1 = s[n];
		c2 = s[m];
		s[n] = c2;
		s[m] = c1;
		m--;
		n++;
	}
}
