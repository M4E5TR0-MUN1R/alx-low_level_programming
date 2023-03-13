#include "main.h"
/**
  * print_number - A function that prints an integer
  * @n: The value of the number to be printed.
  * Return: Always Null
  */
void print_number(int n)
{
	unsigned int d, count;

	if (n < 0)
	{
		_putchar(45);
		n *= -1;
	}

	d = n;
	count = 1;

	while (d > 9)
	{
		d /= 10;
		count *= 10;
	}

	for (; count >= 1; count /= 10)
	{
		/* divide by count 1000 for 3rd digit */
		/* divide by count 100 for 2nd digit */
		/* divide by count 10 for 1st digit */
		/* Modulo 10 to extract one digit */
		_putchar(((n / count) % 10) + 48);
	}
}
