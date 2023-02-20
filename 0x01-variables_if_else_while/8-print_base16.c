#include <stdio.h>

/**
  * main - Program the prints numbers in base 16
  *
  * Return: Always (0) Success
  *
  */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\');
	return (0);
}
