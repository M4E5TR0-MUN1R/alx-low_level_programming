#include "main.h"

/**
  * main - Program that prints _putchar
  *
  * Return: Always (0) Success
  *
  */
int main(void)
{
	int put_char[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int i, j;

	j = sizeof(put_char) / sizeof(put_char[0]);
	for (i = 0; i < j; i++)
	{
		_putchar(put_char[i]);
	}
	_putchar('\n');
	return (0);
}
