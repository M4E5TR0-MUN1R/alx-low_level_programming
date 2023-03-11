#include <stdio.h>
/**
  * _strspn - A fnction tht returns the pstion where chars have bn found +1
  * @s: the string to be scanned
  * @accept: the characters to be found in s
  * Return: The index where all chars have been found + 1
  */
unsigned int _strspn(char *s, char *accept)
{
	int j, k, count = 0;

	for (j = 0; *(accept + j) != '\0' ; j++)
	{
		for (k = 0; *(s + k) != '\0'; k++)
		{
			if (*(s + k) == *(accept + j))
			{
				count++;
				break;
			}
		}
	}
	return (++count);
}
