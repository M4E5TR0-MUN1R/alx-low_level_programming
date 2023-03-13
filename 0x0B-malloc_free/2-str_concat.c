#include <stdlib.h>
/**
  * str_concat - A function that concatenates two strings
  * @s1: Fisrt String
  * @s2: Second String
  * Return: A pointer to the newly allocated memory space
  */
char *str_concat(char *s1, char *s2)
{
	int l1 = 0, l2 = 0, l3 = 0, c, c2;
	char *ptr;

	if (s1 == NULL)
	{
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		*s2 = '\0';
	}
	while (*(s1 + l1) != '\0')
	{
		l1++;
	}
	while (*(s2 + l2) != '\0')
	{
		l2++;
	}
	l3 = l1 + (++l2);

	ptr = malloc(sizeof(char) * l3);

	if (ptr == NULL)
	{
		return (NULL);
	}
	for (c = 0; c < l1; c++)
	{
		*(ptr + c) = *(s1 + c);
	}
	for (c2 = 0; c2 < l2; c2++, c++)
	{
		*(ptr + c) = *(s2 + c2);
	}
	return (ptr);
}
