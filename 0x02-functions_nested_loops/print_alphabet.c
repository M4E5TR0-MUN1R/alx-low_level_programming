#include "main.h"

/**
  * print_alphabet - A function to print the alphabet.
  *
  * Return: Alway 0 Success
  *
  */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return;
}
