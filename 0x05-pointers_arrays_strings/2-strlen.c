/**
  * _strlen - A function that returns the length of a string
  * @s:  A pointer to the first element of the string
  * Return: Integer (number of elements)
  */
int _strlen(char *s)
{
	int len;

	len = 0;
	do {
		len++;
	} while (*(s + len) != 0);
	return (len);
}
