#include "main.h"

/**print_alphabet_x10 - prints alphabets twice
 * Return: null
 */

void print_alphabet_x10(void)
{
        int i;
	int count = 0;

        while (count < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
        {
        _putchar(i);
        }
	_putchar('\n');
	count++;
	}
}
