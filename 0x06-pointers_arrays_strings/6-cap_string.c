/**
  * cap_string - A function that capitalizes all words of a string
  * @s: A pointer to the string to be modified
  * Return: A pointer to the modified string
  */
char *cap_string(char *s)
{
	int c, j, t = 0;
	int d[13] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	for (c = 0; *(s + c) != '\0'; c++)
	{
		for (j = 0; j < 13 ; j++)
		{
			if (*(s + c) == *(d + j))
			{
				t = c;
				t++;
				if ((*(s + t) == 110) || (*(s + t) == 116))
				{
					if (*(s + c) == 92)
					{
						break;
					}
					else
						*(s + t) = *(s + t) - 32;
				}
				else if ((*(s + t) >= 97) && (*(s + t) <= 122))
				{
					*(s + t) = *(s + t) - 32;
				}
				break;
			}
		}
	}
	return (s);
}
