#include "main.h"

/**
 * _strncat - concats two strings  using at most an inputted no. of bytes
 * @dest: the string to be appended
 * @src: the str appended to dest
 * @n: no. of bytes from src to be appended to dest
 * Return: A pointer to resulting str dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, dest_len = 0;

	while (dest[i++])
		dest_len++;

	for (i = 0; src[i] && i < n; i++)
		dest[dest_len++] = src[i];

	return (dest);
}
