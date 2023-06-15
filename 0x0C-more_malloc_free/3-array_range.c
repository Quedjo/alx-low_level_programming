#include <stdlib.h>
#include "main.h"

/**
 * array_range - create array of integers
 * @min: start range from
 * @max: end range at
 * Return: pointer to array
 */

int *array_range(int min, int max)
{
	int *pointer;
	int i;
	int total_number = (max - min + 1);

	if (min > max) /* validate input */
		return (NULL);

	/* malloc and check for error */
	pointer = malloc(sizeof(int) * total_number);
	if (pointer == NULL)
		return (NULL);

	/* set values */
	for (i = 0; i < total_number; i++)
		pointer[i] = min++;

	return (pointer);
}

