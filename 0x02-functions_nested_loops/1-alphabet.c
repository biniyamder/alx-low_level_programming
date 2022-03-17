#include <stdio.h>
#include "main.h"
/*
 * print_alphabet - function that prints the alphabet, in lowercase
 *
 * Return: a-z
 */
void print_alphabet(void)
{
	int a = (97);
	for (a=97; a<=122; a++)
	{
		putchar(a);
	}
	putchar('\n');
}
