#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n = 0X'0';
	char ch = 0X'a';
	
	for (n = '0'; n <= 10; n++)
	{
		putchar(n);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
