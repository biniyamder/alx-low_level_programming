#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z' || (ch != 'q' && ch != 'e'); ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
