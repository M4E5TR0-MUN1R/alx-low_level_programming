# include <stdio.h>

/**
  * main - using putchar function to print numbers.
  *
  * Return: Always 0 (success)
  *
  */
int main(void)
{
	int i;
	
	for(i=48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
