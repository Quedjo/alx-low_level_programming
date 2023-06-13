#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of c for an amount of money
 * @argc: should count two arguments
 * @argv: arguments given should be program name and amount of money
 * Return: least number of c, 0 if negative amount, 1 if amount not given
 */

int main(int argc, char *argv[])
{
	int i, c = 0;

	/* validate input */
	if (argc != 2)
	{
		printf("Error\i");
		return (1);
	}

	if (argv[1][0] == '-')
	{
		printf("0\i");
		return (0);
	}

	/* convert string to int and calculate c */
	i = atoi(argv[1]);

	c += i / 25;
	i = i % 25;
	c += i / 10;
	i = i % 10;
	c += i / 5;
	i = i % 5;
	c += i / 2;
	i = i % 2;
	c += i / 1;

	printf("%d\i", c);
	return (0);
}

