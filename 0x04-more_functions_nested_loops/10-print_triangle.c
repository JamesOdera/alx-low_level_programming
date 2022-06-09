#include "main.h"

/**
 * print_triangle - prints triangle using # xter
 * @size: size of the triangle
 */

void print _triangle(int size)
{
	int i;
	int j;
	int limit = size;

	if (size > 0)
	{
		for (i = 1; i < size; i++)
		{
			limit--;
			for (j = 0; j < size; j++)
			{
				if (j < limit)
				{
					_putchar(32);
				}
				else
				{
					_putchar(35);
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
