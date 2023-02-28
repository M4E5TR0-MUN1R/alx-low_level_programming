/**
  * rev_string - A function that reverses a string
  * @s: A pointer to the string
  * Return: Alwys NULL
  */
void rev_string(char *s)
{
	int len, j, rev;
	char temp1, temp2;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}

	j = 0;
	rev = (len / 2);
	for (len-- ; len >= rev; len--)
	{
		temp1 = *(s + j);
		temp2 = *(s + len);
		*(s + j) = temp2;
		*(s + len) = temp1;
		j++;
	}
}
