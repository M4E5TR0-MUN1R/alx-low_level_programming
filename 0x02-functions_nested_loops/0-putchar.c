#include "main.h"

/**
  * main - Program that prints _putchar
  *
  * Return: Always (0) Success
  *
  */
int main(void)
{
	int putchar[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int i, j;

	j = sizeof(putchar) / sizeof(putchar[0]);
	for (i = 0; i < j; i++)
	{
		_putchar(putchar[i]);
	}
	_putchar('\n');
	return (0);
}
