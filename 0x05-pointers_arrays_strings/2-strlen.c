#include "main.h"

/**
 * _strlen - returns length of a str
 * @str: the str
 * Return: the length of a @str
 */

size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;

	return (length);
}
