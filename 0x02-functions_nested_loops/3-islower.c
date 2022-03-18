#include <stdio.h>
#include "main.h"
/**
 * _islower - a function that checks for lowercase character.
 *
 * Return: 0, 1
 */
int _islower(int c)
{
	if(islower(c))
	{
		putchar(49);
	}
	else
	{
		putchar(48);
	}
}
