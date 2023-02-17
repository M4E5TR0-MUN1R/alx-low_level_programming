# 0x00. C - Hello, World

## Resources
* ["C" Programming Language: Brian Kernighan - Computerphile](https://www.youtube.com/watch?v=de2Hsvxaf8M )
* [Understanding C program Compilation Process](https://www.youtube.com/watch?v=VDslRumKvRA)
* [Betty](https://github.com/holbertonschool/Betty)
* [Why C Programming Is Awesome](https://www.youtube.com/watch?v=smGalmxPVYc)
* [Learning to Program in C (Part 01)](https://www.youtube.com/watch?v=rk2fK2IIiiQ)
* [Learning to Program in C (Part 02)](https://www.youtube.com/watch?v=FwpP_MsZWnU)
* [Compiling, assembling, and linking](https://www.youtube.com/watch?v=N2y6csonII4)
* [Betty wiki](https://github.com/holbertonschool/Betty/wiki)
* [Research Unix, Jan 1980](https://twitter.com/unix_byte/status/1024147947393495040?s=21)
* [Linus Torvalds on C++](http://harmful.cat-v.org/software/c++/linus)

***
## Notes
### Everything you need to know to start with C
C is an imperative (procedural) language.<br>
All the code has to be inside a function.<br>
C files are source code of your program.<br>
You have to compile C files with a compiler (for instance gcc) to create an executable file.<br>
comments begin with /* and end with */<br>
***
When using strings, the computer creates an array of chars, containing the same<br>
number of cells as the length of the string + 1, and then fills the array with the<br>
ASCII codes of each letter of the string. In the extra cell (the last one) the<br>
computer will store the ASCII code of the special character ‘\0’<br>
***
__Affectations__ Change the content of a variable (update the value in memory)
> g = 32 + 8;

The value of a comparison is 0 if false, and something else if true.

***
Binary operators
Bitwise operations
- " | " OR 
- " & " AND 
- " << " LEFT SHIFT 
- " >> " RIGHT SHIFT
- " ^ " XOR
- " ~ " NOT
***
```
a = 402; // 0000 0001 1001 0010 , 402
b = 98;  // 0000 0000 0110 0010 , 98
a | b;   // 0000 0001 1111 0010 , 498
a & b;   // 0000 0000 0000 0010 , 2
a >> 2;  // 0000 0000 0110 0100 , 100
a << 2;  // 0000 0110 0100 1000 , 1608
~a;	 // 1111 1110 0110 1101 , 4294966893			
```
***
__Ternary conditional__<br>
> expression1? expression2: expression3

Evaluates to expression2 if expression1 is true, and to expression3 otherwise
***
return<br>
Ends the function and returns to the calling function. `return;`<br>
If used with an expression, the expression becomes the return value of the
function, `return(expression);`
The type of expression must match the return type of the function
Any code after return will never be executed.
***
**COMPONENTS OF THE COMPILER**
![](https://www.cs.auckland.ac.nz/references/unix/digital/APS30DTE/FIGU_010.GIF)<br>
- Preprocessor generates .c file
- The compiler takes the (.c) file from the pre-processor as input and generates assembly code
- The assembler converts assembly code to object code/machine language  (.o)
- The linker links our object code with the libraries we used to generate an executable file.
***

## Miscellaneous 
**Dennis MacAlistair Ritchie** (September 9, 1941 – c. October 12, 2011) was an American computer scientist. He is most well-known for creating the C programming language and, with long-time colleague Ken Thompson, the Unix operating system and B programming language. Ritchie and Thompson used C to write UNIX
***
**BETTY**<br>
Betty linter<br>
To run the Betty linter just with command `betty <filename>:`
- Go to the <a href="https://github.com/holbertonschool/Betty">Betty</a> repository
- Clone the repo to your local machine
- cd into the Betty directory
- Install the linter with sudo `./install.sh`
- `emacs` or `vi` a new file called `betty`, and copy the script below:
```
#!/bin/bash
# Simply a wrapper script to keep you from having to use betty-style
# and betty-doc separately on every item.
# Originally by Tim Britton (@wintermanc3r), multiargument added by
# Larry Madeo (@hillmonkey)

BIN_PATH="/usr/local/bin"
BETTY_STYLE="betty-style"
BETTY_DOC="betty-doc"

if [ "$#" = "0" ]; then
    echo "No arguments passed."
    exit 1
fi

for argument in "$@" ; do
    echo -e "\n========== $argument =========="
    ${BIN_PATH}/${BETTY_STYLE} "$argument"
    ${BIN_PATH}/${BETTY_DOC} "$argument"
done
```
- Once saved, exit file and change permissions to apply to all users with `chmod a+x betty`
- Move the betty file into /bin/ directory or somewhere else in your `$PATH` with `sudo mv betty /bin/`
- You can now type `betty (filename)` to run the Betty linter!
***
**GCC**<br>
- [GCC REF SHEET](https://lzone.de/cheat-sheet/GCC)
- [Linux, Git, C/C++ Cheat Sheet](https://www.csl.cornell.edu/courses/ece2400/handouts/ece2400-cheat-sheet.pdf)
- [GCC Options in Linux Environment](https://www.educba.com/gcc-command-in-linux/)<br>
- [GCC compilation Step by Step explanation with Example Video](https://www.youtube.com/watch?v=ldHJVQNEYV4)<br>
To check the default version of gcc compiler in your system, you can use the command as –version in your Linux command prompt. `gcc –version`. <br>
The basic gcc syntax is: `gcc [options] [source_file] [object_files] [-o output_file]`<br>

- `gcc -o` outputfile outputs binary file name
- `gcc -c` Compiles source files to object files without linking to any other object files.
- `gcc -w` Disables all warning messages during the compilation.
- -O3 turn on optimizations
- `gcc –E main.c > preProcessedFile` to get preprocessed output
- `gcc -S main.c` This outputs main.s which is assembly code
- `gcc main.c -o output.o` This generates machine language code
- `gcc main.c` will output a.out or a.exe which we can run by `./a.out` 

## Tasks
### 0. Write a script that runs a C file through the preprocessor and save the result into another file.
- The C file name will be saved in the variable `$CFILE`
- The output should be saved in the file `c`
```
#!/bin/bash
gcc -E $CFILE > c
```
or
```
#!/bin/bash
gcc -E $CFILE -o c
```
### 1. Write a script that compiles a C file but does not link.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
- Example: if the C file is main.c, the output file should be main.o
```
#!/bin/bash
gcc $CFILE -o $CFILE.o	
```

### 2. Write a script that generates the assembly code of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`
- The output file should be named the same as the C file, but with the extension `.o` instead of `.c`.
- Example: if the C file is main.c, the output file should be main.s
```
#!/bin/bash
gcc -S $CFILE
```

### 3. Write a script that compiles a C file and creates an executable named `cisfun`.
- The C file name will be saved in the variable `$CFILE`
```
#!/bin/bash
gcc $CFILE -o cisfun
```

### 4. Write a C program that prints exactly `"Programming is like building a multilingual puzzle`, followed by a new line.
- Use the function puts
- You are not allowed to use printf
- Your program should end with the value 0
```
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	puts("\"Programming is like building a multilingual puzzle");
	return (0);
}
```

### 5. Write a C program that prints exactly `with proper grammar, but the outcome is a piece of art,`, followed by a new line.
- Use the function `printf`
- You are not allowed to use the function `puts`
- Your program should return `0`
- Your program should compile without warning when using the `-Wall` `gcc` option
```
#include<stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("with proper grammar, but the outcome is a piece of art,\n");
	return (0);
}
```

### 6. Write a C program that prints the size of various types on the computer it is compiled and run on.
- You should produce the exact same output as in the example
- Warnings are allowed
- Your program should return 0
- You might have to install the package `libc6-dev-i386` on your Linux to test the `-m32 gcc` option
- The Example:
```
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m32 -o size32 2> /tmp/32
julien@ubuntu:~/c/0x00$ gcc 6-size.c -m64 -o size64 2> /tmp/64
julien@ubuntu:~/c/0x00$ ./size32
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 4 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ ./size64
Size of a char: 1 byte(s)
Size of an int: 4 byte(s)
Size of a long int: 8 byte(s)
Size of a long long int: 8 byte(s)
Size of a float: 4 byte(s)
julien@ubuntu:~/c/0x00$ echo $?
0
julien@ubuntu:~/c/0x00$ 
```
Task Code:
```
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Size of a char: %d byte(s)\n", sizeof(char));
	printf("Size of an int: %d byte(s)\n", sizeof(int));
	printf("Size of a long int: %d byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %d byte(s)\n", sizeof(long long int));
	printf("Size of a float: %d byte(s)\n", sizeof(float));
	return (0);
}
```
### 7. Write a script that generates the assembly code (Intel syntax) of a C code and save it in an output file.
- The C file name will be saved in the variable `$CFILE`.
- The output file should be named the same as the C file, but with the extension `.s` instead of `.c`.
- Example: if the C file is `main.c`, the output file should be `main.s`
```
#!/bin/bash
gcc -S -masm=intel $CFILE
```

### 8. Write a C program that prints exactly `and that piece of art is useful" - Dora Korpar, 2015-10-19` , followed by a new line, to the standard error.
- You are not allowed to use any functions listed in the NAME section of the man (3) `printf` or man (3) `puts`
- Your program should return 1
- Your program should compile without any warnings when using the `-Wall gcc` option
```
#include <unistd.h>
/**
 * main - Entry point
 *
 * Return: Always 1 (Success)
 */
int main(void)
{
	char str1[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, str1, 59);
	return (1);
}
```

