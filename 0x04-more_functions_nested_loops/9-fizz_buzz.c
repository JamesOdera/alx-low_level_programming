#include <stdio.h>
#include "main.h"

/**
 * main - prints no 1-100, for multiples of 3 fizz is printed
 *
 * print fizzbuzz
 *
 * Return: always 0
 */

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
			printf("FizzBuzz");

		else if (i % 3 == 0)
			printf("Fizz");

		else if (i % 5 == 0)
			printf("Buzz");

		else
			printf("%i", i);

		if (i < 100)
			print(" ");
	}

	print("\n");

	return (0);
}
