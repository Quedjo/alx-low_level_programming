#include <stdlib.h>
#include "main.h"

/**
 * _strlen - calculate and return string length
 * @string: string
 * Return: string length
 */

int _strlen(char *string)
{
	int i;

	for (i = 0; string[i] != '\0'; i++)
		;
	return (i);
}

/**
 * string_nconcat - concatenate s1 and n bytes of s2; return pointer to string
 * @s1: string 1
 * @s2: string 2
 * @n: n bytes to concat from string 2
 * Return: pointer to concatenated string
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *pointer;
	int number, length, i, j;

	number = n;

	if (s1 == NULL) /* account for NULL strings */
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	if (number < 0) /* account for negative n bytes */
		return (NULL);
	if (number >= _strlen(s2)) /* account for n too big */
		number = _strlen(s2);

	length = _strlen(s1) + number + 1; /* +1 to account for null pointer */

	pointer = malloc(sizeof(*pointer) * length); /* malloc and check for error */
	if (pointer == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++) /* concat */
		pointer[i] = s1[i];
	for (j = 0; j < number; j++)
		pointer[i + j] = s2[j];
	pointer[i + j] = '\0';

	return (pointer);
}

