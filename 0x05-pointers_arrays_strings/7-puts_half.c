#include "main.h"
/**
  * puts_half - A function that prints half the string
  * @str: A pointer to the string
  * Return: Always NULL
  */
void puts_half(char *str)
{
	int len, count;

	len = 0;
	while (*(str + len) != 0)
	{
		len++;
	}

	if ((len % 2) == 0)
	{
		count = (len / 2);
		for (; count < len; count++)
		{
			_putchar(*(str + count));
		}
		_putchar('\n');
	}
	else
	{
		count = (len - 1) / 2;
		count++;
		for (; count < len; count++)
		{
			_putchar(*(str + count));
		}
		_putchar('\n');
	}
}
