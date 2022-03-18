#include <stdio.h>
#include "main.h"
/*
 * _isupper -  function that checks for uppercase character
 *
 * Return: 0,1
 */
int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
