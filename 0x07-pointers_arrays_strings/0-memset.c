#include "main.h"

/**
 * _ memset - a function fills memory with a constant byte
 * @s: pointer
 * @b: byte to fill with
 * @n: number of bytes to fill
 * Return: memory area
 */

char *_memset(char *s, char b, unsigned int n)  
{
	int size = n; /* only accept positive sizes */

	if (size > 0)
	{
		int i;

		for (i = 0; i < size; i++)
			s[i] = b;
	}
	return (s);
}
