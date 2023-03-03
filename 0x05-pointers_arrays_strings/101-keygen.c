#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int checkHexSum(char *k);
void modify(int t, char *k);

/**
  * main - This is a program to generate a crack for the program 101-crackme
  * Return: Always 0 Success
  */
int main(void)
{
	srand(time(NULL));
	char s[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z','A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z','0','1','2','3','4','5','6','7','8','9'};
	int random = 0;
	int count = 0;
	int clear = 0;
	char k[100] = "";

	while (checkHexSum(k) != 2772)
	{
		char temp;

		random = (rand() % 62);
		temp = s[random];
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
		modify(2772, k);
		printf("%s\n", k); /*key*/
	}
	else if (checkHexSum(k) == 2772)
	{
		printf("%s\n", k); /*key*/
	}
	else
	{
		/*printf("Sorry Key not found!\n");*/
	}
	/*printf("Final sum of ASCII Codes: %d \n", checkHexSum(k));*/
	return (0);
}

/**
  * checkHexSum - This is a function that calculates the ascii sum of the key
  * @k: A pointer to the key
  * Return: an integer sum of the key
  */
int checkHexSum(char *k)
{
	unsigned int j;
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
  * @k: A pointer to the key
  * @t: the target sum
  * Return: Always NULL
  */
void modify(int t, char *k)
{
	int scan = 0;
	int diff = (checkHexSum(k) - t);

	/*printf("Difference is %d: \n", diff);*/
	for (; (*(k + scan) != '\0') ;  scan++)
	{
	}
	scan--;

	/*printf("Last character is: %d \n", *(k + scan));*/
	if (*(k + scan) > diff)
	{
		*(k + scan) = *(k + scan) - diff;
	}
}
