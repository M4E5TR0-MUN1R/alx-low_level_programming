#include "main.h"

/**
  * swap_int- A function that swaps the values of two integers
  * @a: Variable containing integer 1
  * @b: Variable containing integer 2
  * Return: Always NULL
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
