/** 
  * _atoi - A function that converts a string into an integer
  * @s: A pointer to the string
  * Return: The converted integer
  */
int _atoi(char *s)
{
	int count = 0;
	int sign = 1;
	int num = 0;
	int shift = 1;
	int prevNum = 0;

	int ost = 0;
	int oend = 9;
	int ist = 48;
	int iend = 57;

	while (*(s + count) != '\0')
	{
		if ( shift >= 10 && (*(s + count) < 48 || *(s + count) > 57))
		{
			break;
		}
		else if (*(s + count) == 45 && !(shift >= 10))
		{
			sign *= -1;
		}
		else if (*(s + count) >= 48 && *(s + count) <= 57)
		{
			int i = *(s + count);
			int o = ost + ((oend - ost) / (iend - ist)) * (i - ist);
			if (shift == 1)
			{
				num = o;
				prevNum = num;
				shift = (shift * 10);
			}
			else
			{
				num = ((num * shift) + o);
				prevNum = num;
			}
		}
		count++;
	}
	return (num * sign);
}
