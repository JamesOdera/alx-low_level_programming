#include "main.h"

/**
 * _strcmp - compares pointers to strngs
 * @s1: a pointer to first str
 * @s2: a pointer to second str
 * Return: results
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (*(s1 + i) && *(s2 + i) && (*(s1 + i) == *(s2 + i)))
		i++;
	return (*(s1 + i) - *(s2 + i));
}
