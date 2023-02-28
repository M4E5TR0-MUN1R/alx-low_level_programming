#include "main.h"
/**
  * puts2 - A function that prints alternate characters of a string
  * @str: A pointer to the string
  * Return: Always NULL
  */
void puts2(char *str)
{
	int count;

	for (count = 0; *(str + count) != 0 ; count++)
	{
		if ((count % 2) == 0)
		{
			_putchar(*(str + count));
		}
		continue;
	}
	_putchar('\n');
}
