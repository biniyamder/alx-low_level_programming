#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char ch, i = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
		i = toupper(ch);
		putchar(i);
	}
	putchar ('\n');
	return (0);
}
