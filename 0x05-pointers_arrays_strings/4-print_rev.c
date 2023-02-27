#include "main.h"

/**
  * print_rev - A function that prints a string in reverse.
  * @s: A pointer to the string
  * Return: Always NULL
  */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}

	for (len-- ; len >= 0 ; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
