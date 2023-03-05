#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkHexSum(char *k);
int modify(int len, int diff, char *k);
int genkey(char *k);

/**
  * main - This is a program to generate a crack for the program 101-crackme
  * Return: Always 0 Success
  */
int main(void)
{
	srand(time(NULL));
	char k[100] = "";

	while (genkey(k) != 2772)
	{
		genkey(k);
	}
	printf("%s\n", k);
	return (0);
}

/**
  * genkey - A function that generates the key with sum >= 2772
  * @k: A pointer to the variable key
  * Return: The sum of the key
  */
int genkey(char *k)
{
	int max = 122;
	int min = 48;
	int range = max - min;
	int random = 0;
	int count = 0;

	while (checkHexSum(k) != 2772)
	{
		char temp;

		random = ((rand() % range) + min);
		/*temp = s[random];*/
		temp = random;
		*(k + count) = temp;
		if (checkHexSum(k) > 2772)
		{
			break;
		}
		else if (checkHexSum(k) == 2772)
		{
			break;
		}
		count++;
	}
	/*
	 * printf("k is: %s \n", k);
	 * printf("The sum of ASCII Codes: %d \n", checkHexSum(k));
	 */
	if (checkHexSum(k) != 2772)
	{
		int len = 0;
		int diff = (checkHexSum(k) - 2772);

		/*printf("Difference is %d: \n", diff);*/
		while (*(k + len) != '\0')
		{
			len++;
		}
		len--;
		modify(len, diff, k);
		/*printf("%s\n", k);*/ /*key*/
	}
	else if (checkHexSum(k) == 2772)
	{
		/*printf("%s\n", k);*/ /*key*/
	}
	else
	{
		/*printf("Sorry Key not found!\n");*/
	}
	int finalsum;

	finalsum = checkHexSum(k);
	/*printf("Final sum of ASCII Codes: %d \n", finalsum);*/
	return (finalsum);
}

/**
  * checkHexSum - This is a function that calculates the ascii sum of the key
  * @k: A pointer to the key
  * Return: an integer sum of the key
  */
int checkHexSum(char *k)
{
	unsigned int j = 0;
	unsigned int sum = 0;
	unsigned int temp = 0;

	for (j = 0; *(k + j) != '\0'; j++)
	{
		temp = *(k + j);
		sum = sum + temp;
	}
	return (sum);
}

/**
  * modify - This is a function to modify the key to match the required target
  * @len: Length of current key
  * @diff: The sum difference between the target and current key
  * @k: A pointer to the key
  * Return: Always 0
  */
int modify(int len, int diff, char *k)
{
	/*printf("Last Char is %c Value is %d \n", *(k + len), *(k + len));*/
	if (diff == 0)
	{
		return (0);
	}
	if (*(k + len) == diff)
	{
		*(k + len) = '\0';
		diff = 0;
	}
	else if (*(k + len) > diff)
	{
		if (((*(k + len) - diff) >= 33) && ((*(k + len) - diff) <= 126))
		{
			*(k + len) -= diff;
			diff = 0;
		}
		else
		{
			len++;
			*(k + len) = 126;
			diff += 126;
			*(k + len + 1) = '\0';
			modify(len, diff, k);
			/*
			*(k + len) = diff;
			*(k + len) = '\0';
			len--;
			modify(len, diff, k);
			*/
		}
	}
	else if (*(k + len) < diff)
	{
		*(k + len) = '\0';
		len--;
		diff -= *(k + len);
		modify(len, diff, k);
	}
	return (0);
}
