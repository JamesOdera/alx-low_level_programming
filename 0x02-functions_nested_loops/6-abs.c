#include "main.h"
/**
 * _abs - a fxn that computes absolute value of int
 * @ab: interger input
 * Return: absolute value of ab
 */
int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
