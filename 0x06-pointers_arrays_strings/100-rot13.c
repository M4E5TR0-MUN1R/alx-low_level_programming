/**
  * rot13 - A function that can be called to encode/decode a string with rot13
  * @s: A pointer to the string
  * Return: a pointer to the encoded or decoded string
  */
char *rot13(char *s)
{
	char alp[52] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[52] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	int c, j;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		for (j = 0; j < 52; j++)
		{
			if (*(s + c) == *(alp + j))
			{
				*(s + c) = *(rot + j);
				break;
			}
			continue;
		}
	}

	return (s);
}
