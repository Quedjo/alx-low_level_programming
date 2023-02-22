#include "main.h"

/**
 * _islower - determines if a character is upper or lower case
 *@c: character used for testing
 * Return: 0 or 1
 */

int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
