#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
  *
  *
  *
  *
  */
int checkHexSum(char *s);

int main(void)
{
	int i = 0, j = 0, sum = 0;
	char s[62]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	char key[]="";
	srand(time(NULL));

	while(sum != 2772)
	{
		int random =  rand() % 61;
		printf("%d \n", random);
		*(key + j) = *(s + random);
		printf("Key is: %s \n", key);
		/*
		if (checkHexSum(key) == 2772)
		{
			break;
		}
		else if(checkHexSum(key) > 2772)
		{
			int c = 0, i = 0;
			while (*(key + c) != '\0')
			{
				c++;
			}
			c--;
			for(i=0; i<c ;i++)
			{
				*(key + i) = 0;
			}
		}
		*/
		j++;
	}
	sum = checkHexSum(key);
	printf("Found it: %d \n", sum);
	printf("Key is: %s \n", key);
	return (0);
}

int checkHexSum(char *s)
{
	unsigned int j, sum = 0, temp = 0;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		temp = *(s + j);
		printf("%c", *(s + j));
		sum = sum + temp;
	}
	//printf(" Sum: %d \n", sum);
	return (sum);
}
