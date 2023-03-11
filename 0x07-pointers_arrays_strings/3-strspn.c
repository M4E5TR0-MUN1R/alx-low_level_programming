#include "main.h"
/**
  * _strspn - A fnction tht returns the pstion where chars have bn found +1
  * @s: the string to be scanned
  * @accept: the characters to be found in s
  * Return: The index where all chars have been found + 1
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k, bool;

	for (j = 0; *(s + j) != '\0' ; j++)
	{
		bool = 0;
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + j) == *(accept + k))
			{
				bool = 1;
				break;
			}
		}
		if (bool == 0)
			break;
	}
	return (j);
}
