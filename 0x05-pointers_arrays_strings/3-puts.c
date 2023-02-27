#include "main.h"
/**
  * _puts - A function that prints out a string
  * @str: A pointer to the string
  * Return: Always Null
  */
void _puts(char *str)
{
	int count, val;

	count = 0;
	while (*(str + count) != 0)
	{
		val = (*(str + count));
		_putchar(val);
		count++;
	}
	_putchar('\n');
}
