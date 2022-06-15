#include "main.h"

/**
 * _strncpy - copies inputted no. into dest
 * @dest: buffer store for strncpy
 * @src: source string
 * @n: the max no. of bytes copied frm src
 * Return: A pointer to the results
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, src_len = 0;

	while (src[i++])
		src_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[i] = src[i];

	for (i = src_len; i < n; i++)
		dest[i] = '\0';

	return (dest);
}