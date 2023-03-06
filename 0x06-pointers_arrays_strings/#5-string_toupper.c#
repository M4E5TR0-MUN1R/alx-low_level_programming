/**
  * string_toupper - A function that changes all lowercase letters to uppercase
  * @s: A pointer to the string to be modified
  * Return: A pointer to the modified string
  */
char *string_toupper(char *s)
{
	int c;
	int os = 65;
	int oe = 90;
	int is = 97;
	int ie = 122;

	for (c = 0; *(s + c) != '\0'; c++)
	{
		if ((*(s + c) >= 97) && (*(s + c) <= 122))
		{
			*(s + c) = os + ((oe - os) / (ie - is)) * (*(s + c) - is);
		}
		else
		{
			continue;
		}
	}
	return (s);
}
