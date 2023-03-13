#include <stdlib.h>
/**
  * _strdup - A function dumps a string in mem and returns a pointer
  * @str: A pointer to the string that should be dumped
  * Return: A pointer to the dump location
  */
char *_strdup(char *str)
{
	int l = 0, i;
	char *ptr;

	while (*(str + l) != '\0')
	{
		l++;
	}

	ptr = malloc(sizeof(char) * l);

	for (i = 0; i <= l; i++)
	{
		*(ptr + i) = *(str + i);
	}

	return (ptr);
}
