# 0x07. C - Even more pointers, arrays and strings
## Resources
- The saved pointers webpage from ALX
- [A pointer to a pointer](https://www.tutorialspoint.com/cprogramming/c_pointer_to_pointer.htm)
- [Double pointer with example](https://beginnersbook.com/2014/01/c-pointer-to-pointer/)
- [C multi dimensional arrays](https://www.tutorialspoint.com/cprogramming/c_multi_dimensional_arrays.htm)
- [C 2D arrays](https://beginnersbook.com/2014/01/2d-arrays-in-c-example/)

## Learning Objectives
- What are pointers to pointers and how to use them.
- What are multidimensional arrays and how to use them.
- What are the most common C standard library functions to manipulate strings.

## Tasks
### 0. Write a function that fills memory with a constant byte.
- Prototype: `char *_memset(char *s, char b, unsigned int n);`
- The `_memset()` function fills the first n bytes of the memory area pointed to by s with the constant byte b
- Returns a pointer to the memory area s
- 
FYI: The standard library provides a similar function: `memset`. Run `man memset` to learn more.

Example Code:
```
julien@ubuntu:~/0x07$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
        unsigned int i;

        i = 0;
        while (i < size)
        {
                if (i % 10)
                {
                        printf(" ");
                }
                if (!(i % 10) && i)
                {
                        printf("\n");
                }
                printf("0x%02x", buffer[i]);
                i++;
        }
        printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0x00};

    simple_print_buffer(buffer, 98);
    _memset(buffer, 0x01, 95);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-memset.c -o 0-memset
julien@ubuntu:~/0x07$ ./0-memset 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01 0x01
0x01 0x01 0x01 0x01 0x01 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
```


### 1. Write a function that copies memory area.
- Prototype: `char *_memcpy(char *dest, char *src, unsigned int n);`
- The `_memcpy()` function copies `n` bytes from memory area `src` to memory area `dest`
- Returns a pointer to `dest`

FYI: The standard library provides a similar function: `memcpy`. Run `man memcpy` to learn more.

Example Code:
```
julien@ubuntu:~/0x07$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char buffer[98] = {0};
    char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    simple_print_buffer(buffer, 98);
    _memcpy(buffer + 50, buffer2, 10);
    printf("-------------------------------------------------\n");
    simple_print_buffer(buffer, 98);    
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-memcpy.c -o 1-memcpy
julien@ubuntu:~/0x07$ ./1-memcpy 
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
-------------------------------------------------
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x01 0x02 0x03 0x04 0x05 0x07 0x07 0x08 0x09 0x0a
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
julien@ubuntu:~/0x07$ 
```

### 2. Write a function that locates a character in a string.
- Prototype: `char *_strchr(char *s, char c);`
- Returns a pointer to the first occurrence of the character `c` in the string `s`, or NULL if the character is not found

FYI: The standard library provides a similar function: `strchr`. Run `man strchr` to learn more.

__Challenges Faced__
- To use the keyword NULL we have to `#include <stddef.h>` 
```
‘NULL’ is defined in header ‘<stddef.h>’; did you forget to ‘#include <stddef.h>’? 
#include <stddef.h>
```
- Check my code 1 (wrong) and my code 2 (correct)
After checking all the characters, dont forget to check the last one.

Example Code:
```
julien@ubuntu:~/0x07$ cat 2-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello";
    char *f;

    f = _strchr(s, 'l');

    if (f != NULL)
    {
        printf("%s\n", f);
    }
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strchr.c -o 2-strchr
julien@ubuntu:~/0x07$ ./2-strchr 
llo
julien@ubuntu:~/0x07$ 
```

My code 1 (Wrong!)
```
#include <stddef.h>
/**
  * _strchr - A function that scans a string to find char c
  * @s: the string to be scanned
  * @c: the character to be found
  * Return: Null if not found or 1st occurence of char c
  */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		if (*(s + j) == c)
		{
			return (s + j);
		}
	}
	return (NULL);
}
```

My code 2 (Correct)
```
#include <stddef.h>
/**
  * _strchr - A function that scans a string to find char c
  * @s: the string to be scanned
  * @c: the character to be found
  * Return: Null if not found or 1st occurence of char c
  */
char *_strchr(char *s, char c)
{
	int j;

	for (j = 0; *(s + j) != '\0'; j++)
	{
		if (*(s + j) == c)
		{
			return (s + j);
		}
	}
	if (*(s + j) == c)
	{
		return (s + j);
	}
	else
		return (NULL);
}
```

### 3. Write a function that gets the length of a prefix substring.
- Prototype: `unsigned int _strspn(char *s, char *accept);`
- Returns the number of bytes in the initial segment of `s` which consist only of bytes from accept

FYI: The standard library provides a similar function: `strspn`. Run `man strspn` to learn more.

Example Code:
```
julien@ubuntu:~/0x07$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "hello, world";
    char *f = "oleh";
    unsigned int n;

    n = _strspn(s, f);
    printf("%u\n", n);
    return (0);
}
julien@ubuntu:~/0x07$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strspn.c -o 3-strspn
julien@ubuntu:~/0x07$ ./3-strspn 
5
julien@ubuntu:~/0x07$ 
```

My code:
```
#include "main.h"
/**
  * _strspn - A fnction tht returns the pstion where chars have bn found +1
  * @s: the string to be scanned
  * @accept: the characters to be found in s
  * Return: The index where all chars have been found + 1
  */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int j, k, bool;

	/** 
	  * j will loop through all string characters
	  * j loop will only break if bool = 0
	  * bool will only be 0 if the j char is not among all the accept chars
	  * every character of s will be checked against all the accept chars
	  * If we finally check a character against accept and get no match 
	  * then we break out of the loop and get the position from j
	  */
	for (j = 0; *(s + j) != '\0' ; j++)
	{
		bool = 0;
		for (k = 0; *(accept + k) != '\0'; k++)
		{
			if (*(s + j) == *(accept + k))
			{
				bool = 1;
				break;
			}
		}
		if (bool == 0)
			break;
	}
	return (j);
}
```