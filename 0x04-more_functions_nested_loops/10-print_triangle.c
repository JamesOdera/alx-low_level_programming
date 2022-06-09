#include "main.h"

/**
 * print_triangle - prints triangle using # xter
 * @size: size of the triangle
 * Return: void
 */

void print _triangle(int size)
{
	int i, j;

	for (i = 0; i <= size; i++)
	{
		for (j = 1; j <= size; j++)
			_putchar(j < (size - i) ? ' ' : '#');
		_putchar('\n');
	}
	if (i == 0)
		_putchar('\n');
}
