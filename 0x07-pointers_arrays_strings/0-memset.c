/**
  * _memset - A function that fills n bytes of a memory area with const byte b
  * @s: A pointer to the memory location filled with b
  * @b: The constant byte to be filled in the mem location
  * @n: The number of bytes to be filled with byte b
  * Return: A pointer to the memory location
  */
char *_memset(char *s, char b, unsigned int n)
{
	int c = 0;

	while (n > 0)
	{
		*(s + c) = b;
		c++;
		n--;
	}

	return (s);
}
