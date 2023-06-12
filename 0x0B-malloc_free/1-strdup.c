#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter
 * @str: string to duplicate
 * Return: pointer to duplicated string in allocated memory
 */

char *_strdup(char *str)
{
	char *duplicate;
	int j = 0, g = 0;

	if (str == NULL) /* validate str input */
		return (NULL);

	while (*(str + j))
		g++, j++;
	g++; /* add null terminator to length */

	duplicate = malloc(sizeof(char) * g); /* allocate memory */

	if (duplicate == NULL) /* validate memory */
		return (NULL);

	j = 0;
	while (j < g)
	{
		*(duplicate + j) = *(str + j);
		j++;
	}

	return (duplicate);
}

