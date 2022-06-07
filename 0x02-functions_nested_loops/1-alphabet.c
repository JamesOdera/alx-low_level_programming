#include "main.h"

/**
 * main - Entry point
 *
 * Return: always 0 (Success)
 */

void print_alphabet(void);
{
	char word;

	for (word = 'a'; word <= 'z'; word++)
	{
		_putchar(word);
	}

	_putchar('\n');
}
