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

	/**
	  * j will loop through all string characters
	  * j loop will only break if bool = 0
	  * bool will only be 0 if the j char is not among all the accept chars
	  * every character of s will be checked against all the accept chars
	  * If we finally check a character against accept and get no match
	  * then we break out of the loop and get the position from j
	  */
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
91
