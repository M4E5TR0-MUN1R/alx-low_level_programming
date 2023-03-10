# 0x06. C - More pointers, arrays and strings
## Tasks
### 0. strcat
Write a function that concatenates two strings.

- Prototype: `char *_strcat(char *dest, char *src);`
- This function appends the `src` string to the `dest` string, overwriting the terminating null byte (`\0`) at the end of `dest`, and then adds a terminating null byte
- Returns a pointer to the resulting string `dest`

FYI: The standard library provides a similar function: `strcat`. Run `man strcat` to learn more.

Example Code:
```
julien@ubuntu:~/0x06$ cat 0-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strcat(s1, s2);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 0-main.c 0-strcat.c -o 0-strcat
julien@ubuntu:~/0x06$ ./0-strcat 
Hello 
World!
Hello World!
World!
Hello World!
julien@ubuntu:~/0x06$
```

### 1. strncat
Write a function that concatenates two strings.

- Prototype: `char *_strncat(char *dest, char *src, int n);`
- The `_strncat` function is similar to the `_strcat` function, except that
  - it will use at most `n` bytes from `src`; and
  - `src` does not need to be null-terminated if it contains n or more bytes
- Return a pointer to the resulting string `dest`

FYI: The standard library provides a similar function: `strncat`. Run `man strncat to learn more.

Example code:
```
julien@ubuntu:~/0x06$ cat 1-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[98] = "Hello ";
    char s2[] = "World!\n";
    char *ptr;

    printf("%s\n", s1);
    printf("%s", s2);
    ptr = _strncat(s1, s2, 1);
    printf("%s\n", s1);
    printf("%s", s2);
    printf("%s\n", ptr);
    ptr = _strncat(s1, s2, 1024);
    printf("%s", s1);
    printf("%s", s2);
    printf("%s", ptr);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 1-main.c 1-strncat.c -o 1-strncat
julien@ubuntu:~/0x06$ ./1-strncat 
Hello 
World!
Hello W
World!
Hello W
Hello WWorld!
World!
Hello WWorld!
julien@ubuntu:~/0x06$ 
```

### 2. strncpy
Write a function that copies a string.

- Prototype: `char *_strncpy(char *dest, char *src, int n);`
- Your function should work exactly like `strncpy`
- 
FYI: The standard library provides a similar function: `strncpy`. Run `man strncpy` to learn more.

Example Code:
```
julien@ubuntu:~/0x06$ cat 2-main.c
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
    int i;

    for (i = 0; i < 98 - 1; i++)
    {
        s1[i] = '*';
    }
    s1[i] = '\0';
    printf("%s\n", s1);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 5);
    printf("%s\n", s1);
    printf("%s\n", ptr);
    ptr = _strncpy(s1, "First, solve the problem. Then, write the code\n", 90);
    printf("%s", s1);
    printf("%s", ptr);
    for (i = 0; i < 98; i++)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", s1[i]);
    }
    printf("\n");
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 2-main.c 2-strncpy.c -o 2-strncpy
julien@ubuntu:~/0x06$ ./2-strncpy 
*************************************************************************************************
First********************************************************************************************
First********************************************************************************************
First, solve the problem. Then, write the code
First, solve the problem. Then, write the code
0x46 0x69 0x72 0x73 0x74 0x2c 0x20 0x73 0x6f 0x6c
0x76 0x65 0x20 0x74 0x68 0x65 0x20 0x70 0x72 0x6f
0x62 0x6c 0x65 0x6d 0x2e 0x20 0x54 0x68 0x65 0x6e
0x2c 0x20 0x77 0x72 0x69 0x74 0x65 0x20 0x74 0x68
0x65 0x20 0x63 0x6f 0x64 0x65 0x0a 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00 0x00
0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x2a 0x00
julien@ubuntu:~/0x06$ 
```

### 3. strcmp
Write a function that compares two strings.

- Prototype: `int _strcmp(char *s1, char *s2);`
- Your function should work exactly like `strcmp`

FYI: The standard library provides a similar function: `strcmp`. Run `man strcmp` to learn more.

__Notes__
- [Comparison of different strings - strcmp](https://www.codingame.com/playgrounds/14213/how-to-play-with-strings-in-c/string-length-string-comparison#:~:text=strcmp%20is%20used%20to%20compare,same%20length%2C%20it%20returns%200.)
- `strcmp` is used to compare two different C strings. When the strings passed to `strcmp` contains exactly same characters in every index and have exactly same length, it returns 0.
- If the passed parameters aren't same, `strcmp` returns either a positive or a negative integer.
- `strcmp` returns a negative integer if the first character that's mismatched between passed parameters has a lower ASCII value in the first string. For Example:
```
char str1[] = "Look HerE";
char str2[] = "Look Here";

int i = strcmp(str1, str2);
```
- `i` will be a negative number in the above example because the ASCII value of 'E' is lower than the ASCII value of `e`. Refer to the ASCII table. This is the first character (index 8) where these two strings differ.
- A negative return value indicates that the first string would come before the second string if the strings are sorted in ascending order.

Example Code:
```
julien@ubuntu:~/0x06$ cat 3-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char s1[] = "Hello";
    char s2[] = "World!";

    printf("%d\n", _strcmp(s1, s2));
    printf("%d\n", _strcmp(s2, s1));
    printf("%d\n", _strcmp(s1, s1));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 3-main.c 3-strcmp.c -o 3-strcmp
julien@ubuntu:~/0x06$ ./3-strcmp 
-15
15
0
julien@ubuntu:~/0x06$ 
```

### 4. Write a function that reverses the content of an array of integers.
- Prototype: `void reverse_array(int *a, int n);`
- Where `n` is the number of elements of the array.

__Challenge__
- How to check the size of an int array from its pointer, is it even possible?

Example code:
```
julien@ubuntu:~/0x06$ cat 4-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 * @a: an array of integers
 * @n: the number of elements to swap
 *
 * Return: nothing.
 */
void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
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
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 4-main.c 4-rev_array.c -o 4-rev_array
julien@ubuntu:~/0x06$ ./4-rev_array 
0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337
1337, 1024, 98, 9, 8, 7, 6, 5, 4, 3, 2, 1, 0
julien@ubuntu:~/0x06$ 
```

### 5. Write a function that changes all lowercase letters of a string to uppercase.
- Prototype: `char *string_toupper(char *);`

__Notes__
- My mapping function comes to play yet again!
- Or just minus 32 from all small letters to make them capital letters!

My C Mapping Function:
> int output = output_start + ((output_end - output_start) / (input_end - input_start)) * (input - input_start);

	int output_start = 0;
    int output_end = 9;
    int input_start = 48; //ASCII 0
    int input_end = 57;   //ASCII 9

    int input = 55; //ASCII 7

    int output = output_start + ((output_end - output_start) / (input_end - input_start)) * (input - input_start);

    printf("The number is %d \n", output); //PRINTS 7
    


Example Code:
```
julien@ubuntu:~/0x06$ cat 5-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Look up!\n";
    char *ptr;

    ptr = string_toupper(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 5-main.c 5-string_toupper.c -o 5-string_toupper
julien@ubuntu:~/0x06$ ./5-string_toupper 
LOOK UP!
LOOK UP!
julien@ubuntu:~/0x06$ 
```

### 6. Write a function that capitalizes all words of a string.
- Prototype: `char *cap_string(char *);`
- Separators of words: space, tabulation, new line, `,`, `;`, `.`,`!`, `?`, `"`, `(`, `)`, `{`, and `}`.

__Notes__
- Have a look at [ASCII control characters (character code 0-31)](https://www.ascii-code.com/)

__Challenge__
- Check first character before moving on to task logic!

Example code:
```
julien@ubuntu:~/0x06$ cat 6-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char str[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\nhello world! hello-world 0123456hello world\thello world.hello world\n";
    char *ptr;

    ptr = cap_string(str);
    printf("%s", ptr);
    printf("%s", str);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 6-main.c 6-cap_string.c -o 6-cap
julien@ubuntu:~/0x06$ ./6-cap 
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
Expect The Best. Prepare For The Worst. Capitalize On What Comes.
Hello World! Hello-world 0123456hello World Hello World.Hello World
julien@ubuntu:~/0x06$ 
```

### 7. Write a function that encodes a string into 1337.
- [1337](https://en.wikipedia.org/wiki/Leet)
- Letters `a` and `A` should be replaced by `4`
- Letters `e` and `E` should be replaced by `3`
- Letters `o` and `O` should be replaced by `0`
- Letters `t` and `T` should be replaced by `7`
- Letters `l` and `L` should be replaced by `1`
- Prototype: `char *leet(char *);`
- You can only use one if in your code
- You can only use two loops in your code
- You are not allowed to use switch
- You are not allowed to use any ternary operation

Example Code:
```
julien@ubuntu:~/0x06$ cat 7-main.c
#include "main.h"
#include <stdio.h>

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char s[] = "Expect the best. Prepare for the worst. Capitalize on what comes.\n";
    char *p;

    p = leet(s);
    printf("%s", p);
    printf("%s", s);
    return (0);
}
julien@ubuntu:~/0x06$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 7-main.c 7-leet.c -o 7-1337
julien@ubuntu:~/0x06$ ./7-1337 
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
3xp3c7 7h3 b3s7. Pr3p4r3 f0r 7h3 w0rs7. C4pi741iz3 0n wh47 c0m3s.
julien@ubuntu:~/0x06$ 
```

### 8. 