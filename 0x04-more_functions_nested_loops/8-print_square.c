#include "main.h"

/**
 * print_square - print a square of #'s given size
 * @size: size to draw
 */

void print_square(int size)
{
	int n=0;
  
  if (size > 0)
  {
   while (n <= size)
   {
    for (int i = 0 ; i <= size ; i++)
    {
    _putchar('#');
    }
	_putchar('\n')
	n++
   }
  }
  else
  _putchar('\n');
}
