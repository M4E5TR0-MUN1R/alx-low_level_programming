#include "main.h"

/**
  * print_alphabet - A function to print the alphabet.
  *
  * Return: Alway 0 Success
  *
  */
void print_alphabet_x10(void)
{
	int i, j;

	for (j = 0; j < 10; j++)
	{
		for (i = 97; i <= 122; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}
