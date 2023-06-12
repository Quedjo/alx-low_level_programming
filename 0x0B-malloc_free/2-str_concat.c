#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to concatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *concatenated_string;
	int l1 = 0, l2 = 0, i = 0, j = 0;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (*(s1 + i))
		l1++, i++;
	while (*(s2 + j))
		l2++, j++;
	l2++; /* add null terminator to length */

	concatenated_string = malloc(sizeof(char) * (l1 + l2)); /*alloc memory*/

	if (concatenated_string == NULL) /* validate memory */
		return (NULL);

	i = 0, j = 0;
	while (i < l1) /* concatenate */
	{
		*(concatenated_string + i) = *(s1 + i);
		i++;
	}
	while (j < l2)
	{
		*(concatenated_string + i) = *(s2 + j);
		i++, j++;
	}

	return (concatenated_string);
}

