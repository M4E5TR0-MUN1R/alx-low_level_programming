# Learning Objectives
## General
- What are nested loops and how to use them
- What is a function and how do you use functions
- What is the difference between a declaration and a definition of a function
- What is a prototype
- Scope of variables
- What are the `gcc` flags `-Wall -Werror -pedantic -Wextra -std=gnu89`
- What are header files and how to to use them with `#include`

## Requirements
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
- You are not allowed to use global variables
- No more than 5 functions per file
- You are not allowed to use the standard library. Any use of functions like `printf`, `puts`, etc… is forbidden
- You are allowed to use [_putchar](https://github.com/holbertonschool/_putchar.c/blob/master/_putchar.c)
- You don’t have to push `_putchar.c`, we will use our file. If you do it won’t be taken into account
- In the following examples, the `main.c` files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own `main.c` files at compilation. Our `main.c` files might be different from the one shown in the examples
- The prototypes of all your functions and the prototype of the function `_putchar` should be included in your header file called `main.h`
- Don’t forget to push your header file

## Resources
- [Nested while loops](https://www.youtube.com/watch?v=Z3iGeQ1gIss)
- [C - Functions](https://www.tutorialspoint.com/cprogramming/c_functions.htm)
- [Learning to Program in C (Part 06)](https://www.youtube.com/watch?v=qMlnFwYdqIw)
- [What is the purpose of a function prototype?](https://www.geeksforgeeks.org/what-is-the-purpose-of-a-function-prototype/)
- [C - Header Files](https://www.tutorialspoint.com/cprogramming/c_header_files.htm)

## Tasks
### 0. _putchar
Write a program that prints `_putchar`, followed by a new line.
- The program should return `0`
#### Task Notes
- To determine the length of an array (number of elements in the array), we can divide the total size of the array by the size of the array element. You could do this with the type, like this:
```
int a[17];
int length_of_a;
length_of_a = sizeof(a) / sizeof(a[0]);
// Or use pointers to get the first element
length_of_a = sizeof(a) / sizeof(*a);
```

- `_putchar` [ascii values](https://www.computerhope.com/jargon/a/ascii.htm) 95,112,117,116,99,104,97,114
- _putchar function from the main.h header file
```
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
```

> To compile,  either use the wildcard `*` so as to include all the necessary function files e.g `gcc *.c -o exec` or `gcc 0-puchar.c _putchar-c -o exec`

Task Code:

_putchar.c
```
#include <unistd.h>

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

```

0-putchar.c
```
#include "main.h"

/**
  * main - Program that prints _putchar
  *
  * Return: Always (0) Success
  *
  */
int main(void)
{
	int put_char[] = {95, 112, 117, 116, 99, 104, 97, 114};

	int i, j;

	j = sizeof(put_char) / sizeof(put_char[0]);
	for (i = 0; i < j; i++)
	{
		_putchar(put_char[i]);
	}
	_putchar('\n');
	return (0);
}
```
