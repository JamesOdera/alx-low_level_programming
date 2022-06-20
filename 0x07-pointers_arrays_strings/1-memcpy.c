#include "main.h"

/**
 * _memcpy - Copies @n bytes from the mem area pointed by @src.
 * @dest: A pointer to the memory area to copy @src into.
 * @src: The source buffer to copy characters from.
 * @n: The number of bytes to copy from @src.
 * Return: A pointer to the destination buffer @dest.
 */

void *_memcpy(void *dest, void *src, unsigned int n)
{
	unsigned int i;
	unsigned char *destination = dest;
	unsigned char *source = src;

	for (i = 0; i < n; i++)
		destination[i] = source[i];

	return (dest);
}
