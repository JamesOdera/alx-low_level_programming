#include "main.h"

/**
 * _strcat - concatenates str pointed by @src
 * @dest: a pointer to the concatenated str
 * @src: source str to be appended to @dest
 * Return: A pointer to the destination
 */

char *_strcat(char *dest, char *src)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i]; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
