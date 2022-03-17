#include <stdio.h>
#include "main.h"
/*
 * _isupper -  function that checks for uppercase character
 *
 * Return: 0,1
 */
int _isupper(int c)
{
	char c = 'A';
	
	if (isupper(c))
	{
		putchar(49);
	}
	else
	{
		putchar(48);
	}
}
