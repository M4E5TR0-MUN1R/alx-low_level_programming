# 0x01. C - Variables, if, else, while

## Resources
* [The C Book](https://publications.gbdirect.co.uk/c_book/)
* [Keywords and identifiers](https://publications.gbdirect.co.uk//c_book/chapter2/keywords_and_identifiers.html)

---
## Notes
### Keywords and Identifiers
#### Keywords
C keeps a small set of keywords for its own use. These keywords cannot be used as identifiers in the program. Here is the list of keywords used in Standard C; you will notice that none of them use upper-case letters.

| auto     | double | int      | struct   |
|----------|--------|----------|----------|
| break    | else   | long     | switch   |
| case     | enum   | register | typedef  |
| char     | extern | return   | union    |
| const    | float  | short    | unsigned |
| continue | for    | signed   | void     |
| default  | goto   | sizeof   | volatile |
| do       | if     | static   | while    |

#### Identifiers

Identifier is the fancy term used to mean ‘name’.The rules for the construction of identifiers are simple: you may use the 52 upper and lower case alphabetic characters, the 10 digits and finally the underscore ‘_’, which is considered to be an alphabetic character for this purpose. The only restriction is the usual one; identifiers must start with an alphabetic character.

The new limit on length of identifiers is 31 characters—although identifiers may be longer, they must differ in the first 31 characters if you want to be sure that your programs are portable. 

External identifiers are the ones that have to be visible outside the current source code file. Typical examples of these would be library routines or functions which have to be called from several different source files.

External identifiers should differ from each other in the first six characters. Worse than that, upper and lower case letters in external identifiers  may be treated the same!

## TASKS
### 0. Positive anything is better than negative nothing
This program will assign a random number to the variable ´n´ each time it is executed. Complete the [source code](https://github.com/holbertonschool/0x01.c/blob/master/0-positive_or_negative_c) in order to print whether the number stored in the variable n is positive or negative.

- The variable n will store a different value every time you will run this program.
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code.
- The output of the program should be:
  - The number, followed by
    - if the number is greater than 0: `is positive`
    - if the number is 0: `is zero`
    - if the number is less than 0: `is negative` 
  - followed by a new line.
 Task Code:
 ```
#include <stdlib.h>
#include <time.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  *
  */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n ==  0)
	{
		printf("is zero\n");
	}
	else if (n > 0)
	{
		printf("is positive\n");
	}
	else
	{
		printf("is negative\n");
	}
	return (0);
}
 ```
 
### 1. The last digit
This program will assign a random number to the variable `n` each time it is executed. Complete the [source code](https://github.com/holbertonschool/0x01.c/blob/master/1-last_digit_c) in order to print the last digit of the number stored in the variable `n`.

- The variable `n` will store a different value every time you run this program
- You don’t have to understand what `rand`, `srand`, `RAND_MAX` do. Please do not touch this code.
- The output of the program should be:
  - The string Last digit of, followed by `n`, followed by:
    - the string `is`, followed by
    - if the last digit of `n` is greater than 5: the string `and is greater than 5`
    - if the last digit of `n` is 0: the string `and is 0`
    - if the last digit of  is less than 6 and not 0: the string `and is less than 6 and not 0
  - followed by a new line

#### Resources
* [stdio.h Functions](https://www.techonthenet.com/c_language/standard_library_functions/stdio_h/index.php)
* [C Header Files](https://www.techonthenet.com/c_language/standard_library_functions/index.php)
* [stdlib.h Functions](https://www.techonthenet.com/c_language/standard_library_functions/stdlib_h/index.php)

Task Code:
```
#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  *main - Entry point
  *
  *Return: Always 0 (Success)
  *
  */
int main(void)
{
	int n, r;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	r = n % 10;
	if (r > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, r);
	}
	else if (r == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, r);
	}
	else if ((r < 6) && (r != 0))
	{
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, r);
	}
	return (0);
}
```

### 2. Write a program that prints the alphabet in lowercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the main function.
- You can only use `putchar` twice in your code.

#### Resources
- [The putchar Function](https://en.wikibooks.org/wiki/C_Programming/stdio.h/putchar#:~:text=putchar%20is%20a%20function%20in,the%20argument%20character%20is%20returned.)
- [ASCII Table](https://www.computerhope.com/jargon/a/ascii.htm)

Though C89 does not support declaration of a scoped loop variable like C99 does:
```
    for(int i = 0; i < 10; i++) {
        // ...
    }
```

C89 does support declaration of variables at the top of braced blocks whose scope is limited to that block:

```
    {
        int i;
        for(i = 0; i < 10; i++) {
            // ...
        }
    }
```

putchar is a function in the C programming language that writes a single character to the standard output stream, stdout. Its prototype is as follows: `int putchar (int character)`

The character to be printed is fed into the function as an argument, and if the writing is successful, the argument character is returned. Otherwise, end-of-file is returned.
The putchar function is specified in the C standard library header file stdio.h.

Task Code:
```
#include <stdio.h>

/**
  * main - Entry point of the program.
  *
  * Return: Alway 0 Success
  *
  */
int main(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
```

### 3. Write a program that prints the alphabet in lowercase, and then in uppercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the main function.
- You can only use `putchar` thrice in your code.

Task Code:
```
#include <stdio.h>

/**
  * main - Entry point of the program.
  *
  * Return: Alway 0 Success
  *
  */
int main(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
		putchar(i);
	}
	for (i = 65; i <= 90; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}

```

### 4. Write a program that prints the alphabet in lowercase, followed by a new line.
- print all the letters except `q` and `e`.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden).
- All your code should be in the main function.
- You can only use `putchar` twice in your code.

>ASCII code e and q , 101 and 113 respectively.

Task Code:

```
#include <stdio.h>

/**
  * main - Entry point of the program.
  *
  * Return: Alway 0 Success
  *
  */
int main(void)
{
	int i;
	
	for (i = 97; i <= 122; i++)
	{
		if (i == 101 || i == 113)
		{
			continue;
		}
		else
			putchar(i);
	}
	putchar('\n');
	return (0);
}
```

### 5. Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
- All your code should be in the `main` function.
Task code:
```
#include <stdio.h>

/**
  * main - Typical use of while loop
  *
  * Return: Always 0 (success)
  */
int main(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	putchar('\n');
	return (0);
}
```

### 6. Write a program that prints all single digit numbers of base 10 starting from 0, followed by a new line.
- You are not allowed to use any variable of type `char`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the main function.
- You can only use `putchar` twice in your code.

```
# include <stdio.h>

/**
  * main - using putchar function to print numbers.
  *
  * Return: Always 0 (success)
  *
  */
int main(void)
{
	int i;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
```

### 7. Write a program that prints the lowercase alphabet in reverse, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden).
- All your code should be in the main function.
- You can only use `putchar` twice in your code.

Task Code:
```
#include <stdio.h>

/**
  * main - Prints the lowercase alphabet in reverse.
  *
  * Return: Always (0) Success
  *
  */
int main(void)
{
	int i;

	i = 122;
	while (i >= 97)
	{
		putchar(i);
		i--;
	}
	putchar('\n');
	return (0);
}
```

### 8. Write a program that prints all the numbers of base 16 in lowercase, followed by a new line.
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden).
- All your code should be in the main function.
- You can only use `putchar` three times in your code.

Task Code:
```
#include <stdio.h>

/**
  * main - Program the prints numbers in base 16
  *
  * Return: Always (0) Success
  *
  */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		putchar(i);
	}
	for (j = 97; j <= 102; j++)
	{
		putchar(j);
	}
	putchar('\n');
	return (0);
}
```

### 9. Write a program that prints all possible combinations of single-digit numbers.
- Numbers must be separated by `,`, followed by a space
- Numbers should be printed in ascending order
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- All your code should be in the main function
- You can only use `putchar` four times maximum in your code
- You are not allowed to use any variable of type `char`

Task Code:
```

#include <stdio.h>

/**
 * main - Prints numbers between 0 to 9 with commas and spaces.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
		//No comma and space for the last digit.
		if (i != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
```

### 10. Write a program that prints all possible different combinations of two digits.
- Numbers must be separated by `,`, followed by a space
- The two digits must be different
- `01` and `10` are considered the same combination of the two digits `0` and `1`
- Print only the smallest combination of two digits
- Numbers should be printed in ascending order, with two digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` five times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

```
#include <stdio.h>

/**
 * main - Prints numbers between 00 to 89.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i, e;

	i = 48;
	e = 48;
	
	//while e < 9
	while (e < 58)
	{
		//i = 0
		i = 48;
		
		//while i < 9 
		while (i < 58)
		{
			//if e and i are not equal and e is less than i
			if (e != i && e < i)
			{
				putchar(e);
				putchar(i);
				
				//8 and 9 are the last combination breakout!
				if (i == 57 && e == 56)
				{
					break;
				}
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		e++;
	}
	putchar('\n');
	return (0);
}
```

### 11. Write a program that prints all possible different combinations of three digits.
- Numbers must be separated by `,`, followed by a space
- The three digits must be different
- `012`, `120`, `102`, `021`, `201`, `210` are considered the same combination of the three digits `0`, `1` and `2`
- Print only the smallest combination of three digits
- Numbers should be printed in ascending order, with three digits
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` six times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the `main` function

Task Code:
```
#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, e, g, h, op1, op2;

i = e = g = h = 48;
while (h < 58)
{
	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				op1 = (h * 10) + g;
				op2 = (e * 10) + i;
				if (op1 < op2)
				{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (h == 57 && g == 56 && e == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		g++;
	}
	h++;
}
putchar('\n');
return (0);
}
```

### 12. Write a program that prints all possible combinations of two two-digit numbers.
- The numbers should range from `0` to `99`
- The two numbers should be separated by a space
- All numbers should be printed with two digits. `1` should be printed as `01`
- The combination of numbers must be separated by comma, followed by a space
- The combinations of numbers should be printed in ascending order
- `00 01` and `01 00` are considered as the same combination of the numbers `0` and `1`
- You can only use the `putchar` function (every other function (`printf`, `puts`, etc…) is forbidden)
- You can only use `putchar` eight times maximum in your code
- You are not allowed to use any variable of type `char`
- All your code should be in the main function

```
#include <stdio.h>

/**
 * main - Prints numbers between 00 to 99.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
int i, e, g, h, op1, op2;

i = e = g = h = 48;
while (h < 58)
{
	g = 48;
	while (g < 58)
	{
		e = 48;
		while (e < 58)
		{
			i = 48;
			while (i < 58)
			{
				op1 = (h * 10) + g;
				op2 = (e * 10) + i;
				if (op1 < op2)
				{
					putchar(h);
					putchar(g);
					putchar(' ');
					putchar(e);
					putchar(i);
					if (h == 57 && g == 56 && e == 57 && i == 57)
						break;
					putchar(',');
					putchar(' ');
				}
				i++;
			}
			e++;
		}
		g++;
	}
	h++;
}
putchar('\n');
return (0);
}
```