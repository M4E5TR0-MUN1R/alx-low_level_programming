#include <stdio.h>
#include "main.h"

/**
  * main - A main program to test my functions
  *
  * Return: Always (0) success
  */
int main(void)
{
	int b = 100;
	int *p = &b;

	printf("b before function %d\n", b);
	reset_to_98(p);
	printf("b after function %d\n", b);
	return (0);
}
