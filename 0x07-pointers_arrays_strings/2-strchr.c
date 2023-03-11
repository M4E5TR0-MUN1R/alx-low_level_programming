#include <stddef.h>
/**
  * _strchr - A function that scans a string to find char c
  * @s: the string to be scanned
  * @c: the character to be found
  * Return: Null if not found or 1st occurence of char c
  */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		if (*(s + j) == c)
		{
			return ((s + j));
		}
	}
	return (NULL);
}
