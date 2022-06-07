#include "main.h"
/**
 * largest_number - returns largest no
 *
 * @a: first i
 * @b: second i
 * @c: third i
 *
 * Return: largest no
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}
