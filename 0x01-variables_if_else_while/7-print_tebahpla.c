#include <stdio.h>

/**
  * main - Prints the lowercase alphabet in reverse.
  *
  * Return: Always (0) Success
  *
  */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
