#include "main.h"

/**
 * swap_int - swap 2 intergers
 * @int *a, int *b: testing vars
 */

void swap_int(int *a, int *b)
{
	int c = *a;
	int d = *b;
	*a = d;
	*b = c;
}
