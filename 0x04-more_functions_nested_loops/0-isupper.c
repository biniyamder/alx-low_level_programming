#include <stdio.h>
#include "main.h"
/*
 * _isupper -  function that checks for uppercase character
 *
 * Return: Always 0
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
