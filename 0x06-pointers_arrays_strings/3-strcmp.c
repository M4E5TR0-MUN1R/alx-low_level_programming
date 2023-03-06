/**
  * _strcmp - A function that compares length of two strings
  * @s1: A pointer to the first string
  * @s2: A pointer to the second string
  * Return: An integer indicating the result of the comparison
  */
int _strcmp(char *s1, char *s2)
{
	int c = 0;

	for (c = 0; (*(s1 + c) != '\0') || (*(s2 + c) != '\0')  ; c++)
	{
		if (*(s1 + c) != *(s2 + c))
		{
			return (*(s1 + c) - *(s2 + c));
		}
		else if (*(s1 + c) == *(s2 + c))
		{
			continue;
		}
	}
	return (0);
}
