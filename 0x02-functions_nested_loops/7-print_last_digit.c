#include "main.h"
/**
 * print_last_digit - a fxn that prints ld of a number
 * @xld: number's ld result
 * Return: value of ld
 */
int print_last_digit(int xld)
{
	int pld;

	pld = (xld % 10);

	if (pld < 0)
	{
		pld = (-1 * pld)
	}

	_puchar(pld + '0');
	return (pld);
}
