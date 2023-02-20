#include <stdio.h>

/**
  * main - Typical use of while loop
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
