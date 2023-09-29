#include "main.h"
#include <stdio.h>
/**
 *_abs - finds absolute value of a number
 *@n: function parameter
 *Return: -n or n
 */
int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (n);
	}
}

