#include "main.h"

/**
 * puts2 - prints every other xter of str to stdout
 * @str: string to print
 * Return: void
 */

void puts2(char *str)
{
	int i = 0, len = 0;

	while (str[i++])
		len++;

	for (i = 0; i < len; i += 2)
		_putchar(str[i]);

	_putchar('\n');
}
