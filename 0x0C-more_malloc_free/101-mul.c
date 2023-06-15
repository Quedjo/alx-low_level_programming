#include "main.h"
#include <limits.h>
/**
 * str_len - finds string length
 * @str: input pointer to string
 * Return: length of string
 */
int str_len(char *str)
{
	int length_of;

	for (length_of = 0; *str != '\0'; length_of++)
		length_of++, str++;
	return (length_of / 2);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @bytes: bytes of memory needed per size requested
 * @size: size in bytes of each element
 * Return: pointer to the allocated memory
 */
void *_calloc(unsigned int bytes, unsigned int size)
{
	unsigned int i;
	char *pointer;

	if (bytes == 0 || size == 0)
		return (NULL);
	if (size >= UINT_MAX / bytes || bytes >= UINT_MAX / size)
		return (NULL);
	pointer = malloc(size * bytes);
	if (pointer == NULL)
		return (NULL);
	for (i = 0; i < bytes * size; i++)
		pointer[i] = 0;
	return ((void *)pointer);
}
/**
 * add_arrays - adds 2 arrays of ints
 * @product: pointer to array with numbers from pdf_of
 * @add_r: pointer to array with numbers from  total
 * @len_r: length of both arrays
 * Return: void
 */
void add_arrays(int *product, int *add_r, int len_r)
{
	int i = 0, length_of_remainder_2 = len_r - 1, remainder = 0, total;

	while (i < len_r)
	{
		total = remainder + product[length_of_r2] + add_r[length_of_r2];
		add_r[length_of_r2] = total % 10;
		remainder = total / 10;
		i++;
		length_of_r2--;
	}
}
/**
 * is_digit - checks for digits
 * @c: input character to check for d
 * Return: 0 failure, 1 success
 */
int is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	printf("Error\n");
	return (0);
}
/**
 * multiply - multiplies 2 #'s, prints result, must be 2 #'s
 * @num1: factor # 1 (is the smaller of 2 numbers)
 * @first_length: length of factor 1
 * @num2: factor # 2 (is the larger of 2 numbers)
 * @second_length: length of factor 2
 * @len_r: length of result arrays
 * Return: 0 fail, 1 success
 */
int *multiply(char *num1, int first_length, char *num2, int second_length, int len_r)
{
	int i = 0, first_i = first_length - 1;
	int second_i, pdf_of, remainder, d, *product, *add_r;

	add_r = _calloc(sizeof(int), (len_r));
	while (i < first_length)
	{
		product = _calloc(sizeof(int), len_r);
		second_i = second_length - 1, d = (len_r - 1 - i);
		if (!is_digit(num1[first_i]))
			return (NULL);
		remainder = 0;
		while (second_i >= 0)
		{
			if (!is_digit(num2[second_i]))
				return (NULL);
			pdf_of = (num1[first_i] - '0') * (num2[second_i] - '0');
			pdf_of += remainder;
			product[d] += pdf_of % 10;
			remainder = pdf_of / 10;
			d--, second_i--;
		}
		add_arrays(product, add_r, len_r);
		free(product);
	    i++, first_i--;
	}
	return (add_r);
}
/**
 * print_me - prints my array of the hopeful pdf_of here
 * @add_r: pointer to int array with numbers to add
 * @len_r: length of result array
 * Return: void
 */
void print_me(int *add_r, int len_r)
{
	int i = 0;

	while (add_r[i] == 0 && i < len_r)
		i++;
	if (i == len_r)
		_putchar('0');
	while (i < len_r)
		_putchar(add_r[i++] + '0');
	_putchar('\n');
}
/**
 * main - multiply 2 input #'s of large lengths and print result or print Error
 * @argc: input count of args
 * @argv: input array of string args
 * Return: 0, Success
 */
int main(int argc, char **argv)
{
	int first_length, second_length, len_r, reg, *add_r;
	char *num1, *num2;

	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}
	first_length = str_len(argv[1]), second_length = str_len(argv[2]);
	len_r = first_length + second_length;
	if (first_length < second_length)
		num1 = argv[1], num2 = argv[2];
	else
	{
		num1 = argv[2], num2 = argv[1];
		reg = second_length, second_length = first_length, first_length = reg;
	}
	add_r = multiply(num1, first_length, num2, second_length, len_r);
	if (add_r == NULL)
		exit(98);
	print_me(add_r, len_r);
	return (0);
}
