#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		while (ch != 'q' && ch != 'e')
		{
			return 0;
		}
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
