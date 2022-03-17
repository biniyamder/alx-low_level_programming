#include <stdio.h>
#include "0-main.h"
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
