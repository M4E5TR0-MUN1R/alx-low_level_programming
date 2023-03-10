/**
  * _strpbrk - locates the 1st occurrence in s of any of the bytes in accept
  * @s: the string to be scanned
  * @accept: the string to use
  * Return: A pointer to the byte in s that matches one of the bytes in accept
  */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		/* We are looping through all characters in s */
		for (j = 0; *(accept + j) != '\0'; j++)
		{
			/* Checking each character in accept for a match */
			if (*(s + i) == *(accept + j))
			{
				return (s + i);
			}
		}
	}
	/* If all characters have been checked then return null */
	return ('\0');
}
