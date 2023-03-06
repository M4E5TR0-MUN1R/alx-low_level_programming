#include <stdio.h>
/**
  * reverse_array - A function that reverses the content of arrays
  * @a: A pointer to the array that should be reversed.
  * @n: The number of elements in the array
  * Return: Always NULL
  */
void reverse_array(int *a, int n)
{
	int t1 = 0, c, len = n / 2;

	for (c = 0; c < len ; c++, n--)
	{
		t1 = *(a + c);
		*(a + c) = *(a + (--n));
		*(a + n) = t1;
	}
}
