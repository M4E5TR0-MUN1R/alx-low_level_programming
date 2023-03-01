#include "main.h"
/**
  * _strcpy - A function that copies a whole string to a buffer
  * @dest: A pointer to the destination location
  * @src: A pointer to the source location
  * Return: A pointer to the destination
  */

char *_strcpy(char *dest, char *src)
{
	int count, len = 0;

	while (*(src + len) != 0)
	{
		len++;
	}
	len++;

	for (; count < len; count++)
	{
		*(dest + count) = *(src + count);
	}
	return (dest);
}
