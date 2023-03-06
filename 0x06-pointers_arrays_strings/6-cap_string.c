/**
  * cap_string - A function that capitalizes all words of a string
  * @s: A pointer to the string to be modified
  * Return: A pointer to the modified string
  */
char *cap_string(char *s)
{
	int c, j, t = 0;
	int d[13] = {9, 10, 32, 33, 34, 40, 41, 44, 46, 59, 63, 123, 125};

	for (c = 0; *(s + c) != '\0'; c++)
	{
		for (j = 0; j < 13 ; j++)
		{
			if (*(s + c) == *(d + j))
			{
				t = c;
				t++;
				if ((*(s + t) >= 97) && (*(s + t) <= 122))
				{
					*(s + t) = *(s + t) - 32;
				}
				break;
			}
			else
				continue;
		}
	}
	return (s);
}
