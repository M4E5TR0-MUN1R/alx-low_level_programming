/**
  * _strncpy - A function that copies a string
  * @dest: A pointer to the destination string
  * @src: A pointer to the source string
  * @n: integer to specify number of characters to copy
  * Return: A pointer to the destination string
  */
char *_strncpy(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0, count = 0;

	while (*(dest + len_dest) != 0)
	{
		len_dest++;
	}
	while (*(src + len_src) != 0)
	{
		len_src++;
	}

	for (count = 0; count < n; count++)
	{
		if (*(src + count) == '\0')
		{
			break;
		}
		*(dest + count) = *(src + count);
	}

	if (len_src < n)
	{
		while (count <= n)
		{
			*(dest + count) = '\0';
			count++;
		}
	}
	return (dest);
}
