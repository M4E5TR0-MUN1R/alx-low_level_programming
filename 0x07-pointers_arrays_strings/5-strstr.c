/**
  * _strstr - Finds the 1st occurrence of the substring needle in the string haystack
  * @haystack: A pointer to the main string
  * @needle: A pointer to the substring
  * Return: A pointer to the beginning of the located substring
  */
char *_strstr(char *haystack, char *needle)
{
	int j, k;
	for (j = 0; *(haystack + j) != '\0'; j++)
	{
		for (k = 0; *(needle + k) != '\0'; k++)
		{
			if (*(haystack + j) == *(needle + k))
			{
				return (haystack + j);
			}
		}
	}
}
