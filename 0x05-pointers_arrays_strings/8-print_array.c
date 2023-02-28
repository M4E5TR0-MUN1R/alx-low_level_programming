#include <stdio.h>
/**
  * print_array - A function that prints n numbers of an array of integers
  * @a: A pointer to the array of integers
  * @n: The variable describing how many elements to print
  * Return: Always NULL
  */
void print_array(int *a, int n)
{
	int j, k;

	j = 0;
	k = n;
	k--;
	for (n--; n >= 0 ; n--)
	{
		if (j == 0)
		{
			printf("%d,", *(a + j));
			j++;
		}
		else if (j != k)
		{
			printf(" %d,", *(a + j));
			j++;
		}
		else
		{
			printf(" %d", *(a + j));
			break;
		}
	}
	printf("\n");
}
