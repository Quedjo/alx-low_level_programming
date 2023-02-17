#include <stdio.h>

/**
 *main - print lowercase a-z
 *Return: Always 0 (Success)
 */

int main(void)
{
	char alpha = 'a';
	char beta = 'A';
	while (alpha <= 'z')
	{
		putchar(alpha);
		alpha++;
	}
	while (beta <= 'Z')
        {
                putchar(beta);
                beta++;
        }
	putchar('\n');

	return (0);
}
