#include "main.h"

/**
 * _puts - prints a stdout str
 * @str: str to b printed
 */

void _puts(char *str)
{
	while (*str)
		_putchar(*str++);

	_putchar('\n');
}
