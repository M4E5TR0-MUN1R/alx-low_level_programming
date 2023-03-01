#include "main.h"
/**
  * _strcpy - A function that copies a whole string to a buffer
  * @dest: A pointer to the destination location
  * @src: A pointer to the source location
  * Return: A pointer to the destination
  */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(dest + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
