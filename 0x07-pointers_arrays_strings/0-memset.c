#include "main.h"

/**
 * _memset - Fills the first n bytes of the mem pointed.
 * @s: A pointer to the mem area to be filled
 * @c: the char to fill the mem
 * @n: number of bytes filled
 * Return: A pointer to be filled in mem area
 */

void *_memset(void *s, int c, size_t n)
{
	unsigned int i;
	unsigned char *memory = s, value = c;

	for (i = 0; i < n; i++)
		memory[i] = value;

	return (memory);
}
