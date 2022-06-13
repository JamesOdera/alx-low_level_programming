#include "main.h"

/**
 * _strcpy - copy str pointed to @src
 * @dest: A buffer to copy the string to
 * @src: the source string to copy
 * Return: a pointer to the destination str @dest
 */

char *_strcpy(char *dest, char *src)
{

	int i = 0;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
