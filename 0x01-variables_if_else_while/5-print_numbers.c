#include <stdio.h>

/**
 *main - print 0123456789
 *Return: Always 0 (Success)
 */

int main(void)
{
	int count = 0;

	while (count < 10)
	{
		printf("%i", count);
		count++;
	}
	putchar('\n');

	return (0);
}
