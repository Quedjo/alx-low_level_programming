#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array - create array of chars and initialize with a specific char
 * @size: size of array
 * @c: fill array values with this char
 * Return: pointer to array
 */

char *create_array(unsigned int size, char c)
{
	char *p;
	int j = 0;

	if (size <= 0) /* validate size input */
		return (NULL);
	p = malloc(sizeof(char) * size); /* allocate memory */

	if (p == NULL) /* validate memory */
		return (NULL);

	while (j < (int)size) /* set array values to char c */
	{
		*(p + j) = c;
		j++;
	}
	*(p + j) = '\0';

	return (p);
}
