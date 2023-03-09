/**
  * leet - A function that does 1337 string encoding.
  * @s: A pointer to the string that is to be encoded
  * Return: A pointer to the encoded string
  */
char *leet(char *s)
{
	int c[10] = {97, 65, 69, 101, 79, 111, 84, 116, 76, 108};
	int c2[10] = {52, 52, 51, 51, 48, 48, 55, 55, 49, 49};
	int j, k;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		for (k = 0; k < 10; k++)
		{
			if (*(s + j) == c[k])
			{
				*(s + j) = c2[k];
			}
		}
	}
	return (s);
}
