# 0x05. C - Pointers, arrays and strings
## Resources
- [C - Arrays](https://www.tutorialspoint.com/cprogramming/c_arrays.htm)
- [C - Pointers](https://www.tutorialspoint.com/cprogramming/c_pointers.htm)
- [C - Strings](https://www.tutorialspoint.com/cprogramming/c_strings.htm)
- [Memory Layout Of a C program](https://aticleworld.com/memory-layout-of-c-program/)

## Learning Objectives
- What are pointers and how to use them
- What are arrays and how to use them
- What are the differences between pointers and arrays
- How to use strings and how to manipulate them
- Scope of variables

## Notes
### To find a file in linux
- [Find command Syntax](https://www.cyberciti.biz/faq/linux-how-can-i-find-a-file-on-my-system/)
> sudo find / -name FILENAME.c 

> sudo find /home/user/ -name xyz
 
## Requirements
- Allowed editors: `vi`, `vim`,`emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style. It will be checked using `betty-style.pl` and `betty-doc.pl`
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use `_putchar`
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, `the main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Tasks
### 0. Write a function that takes a pointer to an int as parameter and updates the value it points to to 98.
- Prototype: `void reset_to_98(int *n);`

Example:
```
julien@ubuntu:~/0x05$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code 
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = 402;
    printf("n=%d\n", n);
    reset_to_98(&n);
    printf("n=%d\n", n);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-reset_to_98.c -o 0-98
julien@ubuntu:~/0x05$ ./0-98 
n=402
n=98
julien@ubuntu:~/0x05$ 
```

My Code:
```
/**
  * reset_to_98 - A function that sets the arguement value to 98
  * @n: A pointer to the value to be changed
  * Return: NULL
  */

void reset_to_98(int *n)
{
	*n = 98;
}
```

### 1. Write a function that swaps the values of two integers.
- Prototype: `void swap_int(int *a, int *b);`
Example:
```
julien@ubuntu:~/0x05$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a;
    int b;

    a = 98;
    b = 42;
    printf("a=%d, b=%d\n", a, b);
    swap_int(&a, &b);
    printf("a=%d, b=%d\n", a, b);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-swap.c -o 1-swap
julien@ubuntu:~/0x05$ ./1-swap 
a=98, b=42
a=42, b=98
julien@ubuntu:~/0x05$
```

My Code:
```
#include "main.h"

/**
  * swap_int- A function that swaps the values of two integers
  * @a: Variable containing integer 1
  * @b: Variable containing integer 2
  * Return: Always NULL
  */
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}
```

### 2. Write a function that returns the length of a string.
- Prototype: `int _strlen(char *s);`

FYI: The standard library provides a similar function: `strlen`. Run `man strlen` to learn more.

```
julien@ubuntu:~/0x05$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;
    int len;

    str = "My first strlen!";
    len = _strlen(str);
    printf("%d\n", len);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strlen.c -o 2-strlen
julien@ubuntu:~/0x05$ ./2-strlen 
16
julien@ubuntu:~/0x05$ 
```

My Code:
```
/**
  * _strlen - A function that returns the length of a string
  * @s:  A pointer to the first element of the string
  * Return: Integer (number of elements)
  */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}
	return (len);
}
```

### 3. Write a function that prints a string, followed by a new line, to stdout.
- Prototype: `void _puts(char *str);`

FYI: The standard library provides a similar function: `puts`. Run `man puts to learn more.

Example Code:
```
julien@ubuntu:~/0x05$ cat 3-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    _puts(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 3-main.c 3-puts.c -o 3-puts
julien@ubuntu:~/0x05$ ./3-puts 
I do not fear computers. I fear the lack of them - Isaac Asimov
julien@ubuntu:~/0x05$ 
```

My Code:
```
#include "main.h"
/**
  * _puts - A function that prints out a string
  * @str: A pointer to the string
  * Return: Always Null
  */
void _puts(char *str)
{
	int count, val;

	count = 0;
	while (*(str + count) != 0)
	{
		val = (*(str + count));
		_putchar(val);
		count++;
	}
	_putchar('\n');
}
```

### 4. Write a function that prints a string, in reverse, followed by a new line.
- Prototype: void print_rev(char *s);

Example Code:
```
julien@ubuntu:~/0x05$ cat 4-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "I do not fear computers. I fear the lack of them - Isaac Asimov";
    print_rev(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 4-main.c 4-print_rev.c -o 4-print_rev
julien@ubuntu:~/0x05$ ./4-print_rev 
vomisA caasI - meht fo kcal eht raef I .sretupmoc raef ton od I
julien@ubuntu:~/0x05$ 
```

My Code:
- We Decrease len before using it on the for loop as the index usually ends at -1, 
> e.g int num[3];

> index 0, 1, 2  where  2 = len - 1

```
#include "main.h"

/**
  * print_rev - A function that prints a string in reverse.
  * @s: A pointer to the string
  * Return: Always NULL
  */
void print_rev(char *s)
{
	int len;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}

	for (len-- ; len >= 0 ; len--)
	{
		_putchar(*(s + len));
	}
	_putchar('\n');
}
```

### 5. Write a function that reverses a string.
- Prototype: `void rev_string(char *s);`

_error: ISO C90 forbids variable length array ‘new_string’ [-Werror=vla]_
```
/**
  * rev_string - A function that reverses a string
  * @s: A pointer to the string
  * Return: Alwys NULL
  */
void rev_string(char *s)
{
	int len, j, k;

	len = 0;
	while (*(s + len) != 0)
	{
		len++;
	}

	char new_string[len];

	k = len;
	j = 0;
	for (len--; len >= 0; len--)
	{
	       new_string[j] = *(s + len);
	       j++;
      	}

	for (j = 0; j < k ; j++)
	{
		*(s + j) = new_string[j];
	}
}
```

Fix:
- Challenge 1: Output was not reversed, fixed by diving length of the string by 2.
- Challenge 2: Used temp char variables instead of temp int variables.
```
/**
  * rev_string - A function that reverses a string
  * @s: A pointer to the string
  * Return: Always NULL
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
```

### 6. Write a function that prints every other character of a string, starting with the first character, followed by a new line.
- Prototype: `void puts2(char *str);`

Example Code:
```
julien@ubuntu:~/0x05$ cat 6-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts2(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 6-main.c 6-puts2.c -o 6-puts2
julien@ubuntu:~/0x05$ ./6-puts2 
02468
julien@ubuntu:~/0x05$ 
```

My Code:
```
#include "main.h"
/**
  * puts2 - A function that prints alternate characters of a string
  * @str: A pointer to the string
  * Return: Always NULL
  */
void puts2(char *str)
{
	int count;

	for (count = 0; *(str + count) != 0 ; count++)
	{
		if ((count % 2) == 0)
		{
			_putchar(*(str + count));
		}
		continue;
	}
	_putchar('\n');
}
```

### 7. Write a function that prints half of a string, followed by a new line.
- Prototype: `void puts_half(char *str);`
- The function should print the second half of the string
- If the number of characters is odd, the function should print the last `n` characters of the string, where `n = (length_of_the_string - 1) / 2`

Example Code:
```
julien@ubuntu:~/0x05$ cat 7-main.c
#include "main.h"

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *str;

    str = "0123456789";
    puts_half(str);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 _putchar.c 7-main.c 7-puts_half.c -o 7-puts_half
julien@ubuntu:~/0x05$ ./7-puts_half 
56789
julien@ubuntu:~/0x05$ 
```

My code:
```
#include "main.h"
/**
  * puts_half - A function that prints half the string
  * @str: A pointer to the string
  * Return: Always NULL
  */
void puts_half(char *str)
{
	int len, count;

	len = 0;
	while (*(str + len) != 0)
	{
		len++;
	}

	if ((len % 2) == 0)
	{
		count = (len / 2);
		for (; count < len; count++)
		{
			_putchar(*(str + count));
		}
		_putchar('\n');
	}
	else
	{
		count = (len - 1) / 2;
		count++;
		for (; count < len; count++)
		{
			_putchar(*(str + count));
		}
		_putchar('\n');
	}
}
```

### 8. Write a function that prints n elements of an array of integers, followed by a new line.
- [The Most Commonly Used Format Specifiers in C](https://www.simplilearn.com/tutorials/c-tutorial/format-specifiers-in-c) 

- Prototype: `void print_array(int *a, int n);`
- where `n` is the number of elements of the array to be printed
- Numbers must be separated by comma, followed by a space
- The numbers should be displayed in the same order as they are stored in the array
- You are allowed to use `printf`

Example Code:
```
julien@ubuntu:~/0x05$ cat 8-main.c
#include "main.h"

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    int array[5];

    array[0] = 98;
    array[1] = 402;
    array[2] = -198;
    array[3] = 298;
    array[4] = -1024;
    print_array(array, 5);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 8-main.c 8-print_array.c -o 8-print_array
julien@ubuntu:~/0x05$ ./8-print_array 
98, 402, -198, 298, -1024
julien@ubuntu:~/0x05$
```

My Code:
```
#include <stdio.h>
/**
  * print_array - A function that prints n numbers of an array of integers
  * @a: A pointer to the array of integers
  * @n: The variable describing how many elements to print
  * Return: Always NULL
  */
void print_array(int *a, int n)
{
	int j, k;

	j = 0;
	k = n;
	k--;
	for (n--; n >= 0 ; n--)
	{
		if (j == 0)
		{
			printf("%d,", *(a + j));
			j++;
		}
		else if (j != k)
		{
			printf(" %d,", *(a + j));
			j++;
		}
		else
		{
			printf(" %d", *(a + j));
			break;
		}
	}
	printf("\n");
}
```

### 9. strcpy
- Prototype: `char *_strcpy(char *dest, char *src);`

Write a function that copies the string pointed to by `src`, including the terminating null byte `(\0)`, to the buffer pointed to by `dest`.

- Return value: the pointer to `dest`

FYI: The standard library provides a similar function: `strcpy`. Run `man strcpy` to learn more.

Example Code:
```
julien@ubuntu:~/0x05$ cat 9-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98];
    char *ptr;

    ptr = _strcpy(s1, "First, solve the problem. Then, write the code\n");
    printf("%s", s1);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 9-main.c 9-strcpy.c -o 9-strcpy
julien@ubuntu:~/0x05$ ./9-strcpy 
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
julien@ubuntu:~/0x05$ 
```

My Code:
```
#include "main.h"
/**
  * _strcpy - A function that copies a whole string to a buffer
  * @dest: A pointer to the destination location
  * @src: A pointer to the source location
  * Return: A pointer to the destination
  */

char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (count >= 0)
	{
		*(dest + count) = *(src + count);
		if (*(dest + count) == '\0')
			break;
		count++;
	}
	return (dest);
}
```

### 10. Write a function that convert a string to an integer.
- Prototype: `int _atoi(char *s);`
- The number in the string can be preceded by an infinite number of characters
- You need to take into account all the `-` and `+` signs before the number
- If there are no numbers in the string, the function must return `0`
- You are not allowed to use `long`
- You are not allowed to declare new variables of “type” array
- You are not allowed to hard-code special values
- We will use the `-fsanitize=signed-integer-overflow` gcc flag to compile your code.

FYI: The standard library provides a similar function: `atoi`. Run `man atoi` to learn more.

Example Code:
```
julien@ubuntu:~/0x05$ cat 100-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int nb;

    nb = _atoi("98");
    printf("%d\n", nb);
    nb = _atoi("-402");
    printf("%d\n", nb);
    nb = _atoi("          ------++++++-----+++++--98");
    printf("%d\n", nb);
    nb = _atoi("214748364");
    printf("%d\n", nb);
    nb = _atoi("0");
    printf("%d\n", nb);
    nb = _atoi("Suite 402");
    printf("%d\n", nb);
    nb = _atoi("         +      +    -    -98 Battery Street; San Francisco, CA 94111 - USA             ");
    printf("%d\n", nb);
    nb = _atoi("---++++ -++ Sui - te -   402 #cisfun :)");
    printf("%d\n", nb);
    return (0);
}
julien@ubuntu:~/0x05$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 -fsanitize=signed-integer-overflow 100-main.c 100-atoi.c -o 100-atoi
julien@ubuntu:~/0x05$ ./100-atoi 
98
-402
-98
214748364
0
402
98
402
julien@ubuntu:~/0x05$ 
```

__Notes__
- Incase of a signed integer overflow, use an unsigned integer to increase range.
- [ASCII TABLE](https://ascii.cl/)
- [Mapping values in C](https://stackoverflow.com/questions/5731863/mapping-a-numeric-range-onto-another)
My C Mapping Function:
> int output = output_start + ((output_end - output_start) / (input_end - input_start)) * (input - input_start);

```
	int output_start = 0;
    int output_end = 9;
    int input_start = 48; //ASCII 0
    int input_end = 57;   //ASCII 9

    int input = 55; //ASCII 7

    int output = output_start + ((output_end - output_start) / (input_end - input_start)) * (input - input_start);

    printf("The number is %d \n", output); //PRINTS 7
```

My Code:
```

```