/**
  * cap_string - A function that capitalizes all words of a string
  * @s: A pointer to the string to be modified
  * Return: A pointer to the modified string
  */
char *cap_string(char *s)
{
	int c, j;
	int d[12] = {' ', 92, ',', ';', '.', '!', '?', '"', '(', ')', '{', '}' };

	for (c = 0; *(s + c) != '\0'; c++)
	{
		for (j = 0; j < 12 ; j++)
		{
			if (*(s + c) == *(d + j))
			{
				c++;
				if ((*(s + c) >= 97) && (*(s + c) <= 122))
				{
					*(s + c) = *(s + c) - 32;
				}
				else
				{
					continue;
				}
			}
		}
	}
	return (s);
}
