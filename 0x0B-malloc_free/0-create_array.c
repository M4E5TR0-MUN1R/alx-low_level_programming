#include <stdlib.h>
/**
  * create_array - Creates an aray of chars, initializes with specific char
  * @size: Size of the array
  * @c: The character to be used for initialization
  * Return: A pointer to the array or NULL
  */
char *create_array(unsigned int size, char c)
{
	unsigned int d;
	char *ptr = malloc(sizeof(char) * size);

	for (d = 0; d <= size ; d++)
	{
		*(ptr + d) = c;
	}

	return (ptr);
}
