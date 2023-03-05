/**
  * _strncat - A funtion that concatenates a specified length from source
  * @dest: A pointer to the destination string
  * @src: A pointer to the source string
  * @n: integer to specify number of characters to copy
  * Return: A pointer to the new concatenated string
  */
char *_strncat(char *dest, char *src, int n)
{
	int len_dest = 0, len_src = 0, count = 0;

	while (*(dest + len_dest) != '\0')
	{
		len_dest++;
	}
	while (*(src + len_src) != '\0')
	{
		len_src++;
	}

	for (count = 0; count < n; count++)
	{
		if (count == len_src)
		{
			break;
		}
		*(dest + len_dest) = *(src + count);
		len_dest++;
	}
	*(dest + len_dest) = '\0';
	return (dest);
}
