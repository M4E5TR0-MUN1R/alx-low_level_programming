/**
  * _memcpy - A function that copies n bytes from memory loc src to dest
  * @dest: A pointer to the destination memory location
  * @src: A pointer to the source memory location
  * @n: The number of bytes to be copied from src to dest
  * Return: A pointer to the destination location
  */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int c;

	for (c = 0; n > 0; c++, n--)
	{
		*(dest + c) = *(src + c);
	}
	return (dest);
}
