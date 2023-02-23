#include "main.h"

/**
 * int _isupper(int c) - checks if a charcater is upper case or not
 * @c is the testing agent
 * Return 1 0r 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
