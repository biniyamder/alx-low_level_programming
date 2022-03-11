#include <stdio.h>
/**
 * main - Entry point
 *
 * Return - Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';
	char i = 'Z';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	for (i = 'A'; i <= 'Z'; i++)
	{
		putchar(i);
	}
	putchar ('\n');
	
	return (0);
}
