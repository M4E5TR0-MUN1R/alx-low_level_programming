/**
  * rev_string - A function that reverses a string
  * @s: A pointer to the string
  * Return: Alwys NULL
  */
void rev_string(char *s)
{
	int len, j, k;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}

	char new_string[len];

	k = len;
	j = 0;
	for (len--; len >= 0; len--)
	{
	       new_string[j] = *(s + len);
	       j++;
      	}

	for (j = 0; j < k ; j++)
	{
		*(s + j) = new_string[j];
	}
}
