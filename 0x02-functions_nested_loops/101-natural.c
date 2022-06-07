#include <stdio.h>
#include "main.h"
/**
 * main - list natural nos below 1024
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if ((i % 3) == 0 || (i % 5) == 0)
			sum += i;
	}

	printf("%d", sum);
	return (0);
}
