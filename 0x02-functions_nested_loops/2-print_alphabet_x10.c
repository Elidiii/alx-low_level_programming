#include "main.h"
#include <stdio.h>
/**
 *print_alphabet_x10 - prints the alphabet 10 times in lowercase
 *Return: 0
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 'a'; j <= 'z'; j++)
		{
			_putchar(j);
		}
			_putchar('\n');
	}
}
