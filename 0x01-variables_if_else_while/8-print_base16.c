#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int c;

	for (c = 0; c < 10; c++)
	{
		putchar(c + '0');
	}
	for (c = 'a'; c <= 'f'; c++)
	{
		putchar(c);
	}
		putchar('\n');

		return (0);
}
