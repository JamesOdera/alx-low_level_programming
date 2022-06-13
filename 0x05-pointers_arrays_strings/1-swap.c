#include "main.h"

/**
 * swap_int - swaps the value of two ints
 * @a: first integer
 * @b: second integer swapped
 */

void swap_int(int *a, int *b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}
