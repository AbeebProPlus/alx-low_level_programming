#include "main.h"
/**
 * print_triangle - Prints triangle pattern
 * @size: parameter of type int
 * Return: Nothing
 */
void print_triangle(int size)
{
	int i, j, k;

	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= (size - i); j++)
			_putchar(' ');
		for (k = 1; k <= i; k++)
			_putchar(35);
		_putchar('\n');
	}
}
