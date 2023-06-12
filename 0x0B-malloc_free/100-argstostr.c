#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: string
 * Return: length
 */

int _strlen(char *s)
{
	int length_of_str = 0;

	while (*s != '\0')
		length_of_str++, s++;

	return (length_of_str);
}

/**
 * argstostr - concatenates all the arguments of your program
 * @ac: argc
 * @av: arguments
 * Return: pointer to array
 */

char *argstostr(int ac, char **av)
{
	char *s;
	int length_of_str = 0, i, j, k = 0;

	if (ac == 0 || av == NULL) /* validate input */
		return (NULL);

	/* find length to malloc */
	for (i = 0; i < ac; i++)
	{
		length_of_str += _strlen(av[i]);
	}
	length_of_str += (ac + 1); /* add space for newlines and null terminator */

	/* allocate memory and free if error */
	s = malloc(length_of_str * sizeof(char));

	if (s == NULL)
	{
		free(s);
		return (NULL);
	}

	/* insert each arg into *str */
	for (i = 0; i < ac; i++)
	{
		for (j = 0; j < _strlen(av[i]); j++)
		{
			s[k++] = av[i][j];
		}
		s[k++] = '\n';
	}

	return (s);
}

