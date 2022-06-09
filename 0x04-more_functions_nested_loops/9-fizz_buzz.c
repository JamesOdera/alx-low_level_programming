#include "main.h"

/**
 * main - prints no 1-100, for multiples of 3 fizz is printed,
 * multiples of 5 buzz is printed and for multiples of both
 * print fizzbuzz
 *
 * Return: always 0
 */

int main(void)
{
	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		print(" ");
	}

	print("\n");

	return (0);
}
