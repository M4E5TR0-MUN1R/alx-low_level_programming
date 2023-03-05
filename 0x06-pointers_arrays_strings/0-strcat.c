/**
  * _strcat - A function that concatenates two strings
  * @dest: A pointer to the string to be appended to
  * @src: the string to be copied to the new one
  * Return: A pointer to the concatenated string dest
  */
char *_strcat(char *dest, char *src)
{
	int len_src = 0, len_dest = 0, count = 0;

	while (*(src + len_src) != '\0')
	{
		len_src++;
	}
	while (*(dest + len_dest) != '\0')
	{
		len_dest++;
	}

	for (count = 0; count < len_src; count++)
	{
		*(dest + len_dest) = *(src + count);
		len_dest++;
	}
	*(dest + len_dest) = '\0';
	return (dest);
 }
