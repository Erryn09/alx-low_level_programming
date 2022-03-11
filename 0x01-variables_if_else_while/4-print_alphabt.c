#include <stdio.h>

/**
 * main - Start
 *
 * Return: 0(Success)
 */

int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if ((c != 'q') && (c != 'e'))
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');

	return (0);
}
