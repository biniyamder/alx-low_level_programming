#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	unsigned char n = 0X0;
	unsigned char ch = 0Xa;
	
	for (n = '0'; n <= 10; n++)
	{
		putchar(%x);
	}
	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(%x);
	}
	putchar('\n');

	return (0);
}
