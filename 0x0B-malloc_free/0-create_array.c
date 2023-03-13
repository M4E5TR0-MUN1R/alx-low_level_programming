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
	char *ptr;

	if (size == 0)
	{
		return (NULL);
	}

	ptr = malloc(sizeof(char) * size);
	for (d = 0; d < size && size != 0; d++)
	{
		*(ptr + d) = c;
	}

	if (ptr == NULL)
	{
		return (NULL);
	}
	else
		return (ptr);
}
