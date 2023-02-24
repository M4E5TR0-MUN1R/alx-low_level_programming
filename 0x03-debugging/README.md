# 0x03. C - Debugging
## Resources
- [Debugging](https://en.wikipedia.org/wiki/Debugging)
- [Rubber Duck Debugging](https://www.thoughtfulcode.com/rubber-duck-debugging-psychology/)

## Learning Objectives
- What is debugging
- What are some methods of debugging manually
- How to read the error messages

## Notes
### Debugging
- In computer programming and software development, debugging is the process of finding and resolving bugs (defects or problems that prevent correct operation) within computer programs, software, or systems.
- The terms "bug" and "debugging" are popularly attributed to Admiral Grace Hopper in the 1940s. While she was working on a Mark II computer at Harvard University, her associates discovered a moth stuck in a relay and thereby impeding operation, whereupon she remarked that they were "debugging" the system.
- Debuggers are software tools which enable the programmer to monitor the execution of a program, stop it, restart it, set breakpoints, and change values in memory. The term debugger can also refer to the person who is doing the debugging.
- Generally, high-level programming languages, such as Java, make debugging easier, because they have features such as exception handling and type checking that make real sources of erratic behaviour easier to spot. In programming languages such as C or assembly, bugs may cause silent problems such as memory corruption, and it is often difficult to see where the initial problem happened. In those cases, memory debugger tools may be needed.
- For debugging electronic hardware (e.g., [computer hardware](https://en.wikipedia.org/wiki/Computer_hardware) as well as low-level software (e.g., [BIOSes](https://en.wikipedia.org/wiki/BIOS), [device drivers](https://en.wikipedia.org/wiki/Device_driver) and [firmware](https://en.wikipedia.org/wiki/Firmware), instruments such as [oscilloscopes](https://en.wikipedia.org/wiki/Oscilloscope), [logic analyzers](https://en.wikipedia.org/wiki/Logic_analyzer), or [in-circuit emulators](https://en.wikipedia.org/wiki/In-circuit_emulation) (ICEs) are often used, alone or in combination. An ICE may perform many of the typical software debugger's tasks on low-level [software](https://en.wikipedia.org/wiki/Software) and [firmware](https://en.wikipedia.org/wiki/Firmware).

- __Wolf fence algorithm__
  - "Wolf fence" algorithm: Edward Gauss described this simple but very useful and now famous algorithm in a 1982 article for Communications of the ACM as follows: "There's one wolf in Alaska; how do you find it? First build a fence down the middle of the state, wait for the wolf to howl, determine which side of the fence it is on. Repeat process on that side only, until you get to the point where you can see the wolf."[9] This is implemented e.g. in the Git version control system as the command git bisect, which uses the above algorithm to determine which commit introduced a particular bug.

- __Debugging for embedded systems__
  - In contrast to the general purpose computer software design environment, a primary characteristic
  of embedded environments is the sheer number of different platforms available to the developers
  (CPU architectures, vendors, operating systems, and their variants). Embedded systems are, by
  definition, not general-purpose designs: they are typically developed for a single task (or small
  range of tasks), and the platform is chosen specifically to optimize that application. Not only
  does this fact make life tough for embedded system developers, it also makes debugging and testing
  of these systems harder as well, since different debugging tools are needed for different
  platforms.
  - Despite the challenge of heterogeneity mentioned above, some debuggers have been developed
  commercially as well as research prototypes. Examples of commercial solutions come from [Green
  Hills Software](https://en.wikipedia.org/wiki/Green_Hills_Software),[Lauterbach GmbH](https://en.wikipedia.org/wiki/Lauterbach_(company)) and Microchip's MPLAB-ICD (for in-circuit debugger).
  Two examples of research prototype tools are Aveksha and Flocklab. They all leverage a
  functionality available on low-cost embedded processors, an On-Chip Debug Module (OCDM), whose
  signals are exposed through a standard [JTAG interface](https://en.wikipedia.org/wiki/JTAG). They
  are benchmarked based on how much change to the application is needed and the rate of events that
  they can keep up with.
  - In addition to the typical task of identifying bugs in the system, embedded system debugging also
  seeks to collect information about the operating states of the system that may then be used to
  analyze the system: to find ways to boost its performance or to optimize other important
  characteristics (e.g. energy consumption, reliability, real-time response, etc.).

- __Anti-debugging__
  - Anti-debugging is "the implementation of one or more techniques within computer code that hinders
  attempts at [reverse engineering](https://en.wikipedia.org/wiki/Reverse_engineering) or debugging a
  target process". It is actively used by recognized publishers in copy-protection schemas, but is
  also used by malware to complicate its detection and elimination. Techniques used in anti-debugging
  include: 
    - API-based: check for the existence of a debugger using system information
    - Exception-based: check to see if exceptions are interfered with
    - Process and thread blocks: check whether process and thread blocks have been manipulated
    - Modified code: check for code modifications made by a debugger handling software breakpoints
    - Hardware- and register-based: check for hardware breakpoints and CPU registers 
    - Timing and latency: check the time taken for the execution of instructions
    - Detecting and penalizing debugger
    
- __Rubber Duck Debugging__
  1. Explain your (broken) code and its goals, generally. Don’t worry about details, just set the context for your duck.
  2. Line-by-line, explain what the flow of the whole function or method that’s not working is. Don’t skip details, ducks love details!
  3. If your duck friend hasn’t spotted it yet, be sure to explain all the intermediate states and transitions in detail.
  4. Find your (stupid, obvious) solution! The reason we so love “rubber duck debugging” is that
  (typically) in the process of doing this, you’ll find your problem. You made a small typo. You were
  operating on the wrong variable. Your if condition was checking the opposite of what you thought.
  Something is likely to be revealed.
 
  - When you’re assuming the ignorance of your rubber duck, you’re having to explain more thoroughly
  and exactly than you were likely thinking those specific lines of code through in your head. You’re
  forced, by the need to be precise while helping someone else understand your problem, to pay very
  careful attention to all that you were previously just taking for granted.

  - If you’ve possibly heard people recommend teaching as a great way to further your learning, it’s
  rooted in the very same shift. When you’re explaining, “and then this probably will happen because
  it usually does” feels pretty lame as an explanation. So you’re forced to understand more deeply
  and explain more fully.

  - It is precisely this that makes rubber duck debugging effective. The psychological shift outside
  of yourself, and into the rubber ducky, changes everything. Suddenly your perspective is different.
  Suddenly you think differently than you were in that rut of brokenness. And that’s super important.
 
## Tasks
### 0. Multiple mains
In most projects, we often give you only one main file to test with. For example, this main file is a test for a `postitive_or_negative()` function similar to the one you worked with in an earlier C project:
```
carrie@ubuntu:/debugging$ cat main.c
#include "main.h"

/**
* main - tests function that prints if integer is positive or negative
* Return: 0
*/

int main(void)
{
        int i;

        i = 98;
        positive_or_negative(i);

        return (0);
}
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat main.h
#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>

void positive_or_negative(int i);

#endif /* MAIN_H */
carrie@ubuntu:/debugging$ 
```

```
carrie@ubuntu:/debugging$ gcc -Wall -pedantic -Werror -Wextra -std=gnu89 positive_or_negative.c main.c
carrie@ubuntu:/debugging$ ./a.out
98 is positive
carrie@ubuntu:/debugging$
```

Based on the `main.c` file above, create a file named `0-main.c`. This file must test that the function `positive_or_negative()` gives the correct output when given a case of `0`.

You are not coding the solution / function, you’re just testing it! However, you can adapt your function from `0x01. C - Variables, if, else, while - Task #0` to compile with this main file to test locally.

- You only need to upload `0-main.c` and `main.h` for this task. We will provide our own
positive_or_negative() function.
- You are not allowed to add or remove lines of code, you may change only one line in this task.

### 1. Like, comment, subscribe
Copy this main file. Comment out (don’t delete it!) the part of the code that is causing the output to go into an infinite loop.

- Don’t add or remove any lines of code, as we will be checking your line count. You are only allowed to comment out existing code.
- You do not have to compile with `-Wall -Werror -Wextra -pedantic` for this task.
```
carrie@ubuntu:/debugging$ cat 1-main.c
#include <stdio.h>

/**
* main - causes an infinite loop
* Return: 0
*/

int main(void)
{
        int i;

        printf("Infinite loop incoming :(\n");

        i = 0;

        while (i < 10)
        {
                putchar(i);
        }

        printf("Infinite loop avoided! \\o/\n");

        return (0);
}
carrie@ubuntu:/debugging$
```

Your output should look like this:

```
carrie@ubuntu:/debugging$ gcc -std=gnu89 1-main.c -o 1-main
carrie@ubuntu:/debugging$ ./1-main
Infinite loop incoming :(
Infinite loop avoided! \o/
carrie@ubuntu:/debugging$ wc -l 1-main.c
24 1-main.c
carrie@ubuntu:/debugging$
```

### 3. This program prints the largest of three integers.
```
carrie@ubuntu:/debugging$ cat 2-main.c
#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
        int a, b, c;
        int largest;

        a = 972;
        b = -98;
        c = 0;

        largest = largest_number(a, b, c);

        printf("%d is the largest number\n", largest);

        return (0);
}
carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat 2-largest_number.c
#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
    int largest;

    if (a > b && b > c)
    {
        largest = a;
    }
    else if (b > a && a > c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return (largest);
}

carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 2-largest_number.c 2-main.c -o 2-main
carrie@ubuntu:/debugging$ ./2-main
0 is the largest number
carrie@ubuntu:/debugging$
```

> ? That’s definitely not right.

Fix the code in 2-largest_number.c so that it correctly prints out the largest of three numbers, no matter the case.

- Line count will not be checked for this task.

__Resources and notes__
- [c-program-biggest-3-numbers](https://www.geeksforgeeks.org/c-program-to-find-the-largest-number-among-three-numbers/)

### 3. Leap year
This program converts a date to the day of year and determines how many days are left in the year, taking leap year into consideration.
```
carrie@ubuntu:/debugging$ cat 3-main_a.c
#include <stdio.h>
#include "main.h"

/**
* main - takes a date and prints how many days are left in the year, taking
* leap years into account
* Return: 0
*/

int main(void)
{
    int month;
    int day;
    int year;

    month = 4;
    day = 01;
    year = 1997;

    printf("Date: %02d/%02d/%04d\n", month, day, year);

    day = convert_day(month, day);

    print_remaining_days(month, day, year);

    return (0);
}

carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat 3-convert_day.c
#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/

int convert_day(int month, int day)
{
    switch (month)
    {
        case 2:
            day = 31 + day;
            break;
        case 3:
            day = 59 + day;
            break;
        case 4:
            day = 90 + day;
            break;
        case 5:
            day = 120 + day;
            break;
        case 6:
            day = 151 + day;
            break;
        case 7:
            day = 181 + day;
            break;
        case 8:
            day = 212 + day;
            break;
        case 9:
            day = 243 + day;
            break;
        case 10:
            day = 273 + day;
            break;
        case 11:
            day = 304 + day;
            break;
        case 12:
            day = 334 + day;
            break;
        default:
            break;
    }
    return (day);
}

carrie@ubuntu:/debugging$
```

```
carrie@ubuntu:/debugging$ cat 3-print_remaining_days.c
#include <stdio.h>
#include "main.h"

/**
* print_remaining_days - takes a date and prints how many days are
* left in the year, taking leap years into account
* @month: month in number format
* @day: day of month
* @year: year
* Return: void
*/

void print_remaining_days(int month, int day, int year)
{
    if ((year % 4 == 0 || year % 400 == 0) && !(year % 100 == 0))
    {
        if (month >= 2 && day >= 60)
        {
            day++;
        }

        printf("Day of the year: %d\n", day);
        printf("Remaining days: %d\n", 366 - day);
    }
    else
    {
        if (month == 2 && day == 60)
        {
            printf("Invalid date: %02d/%02d/%04d\n", month, day - 31, year);
        }
        else
        {
            printf("Day of the year: %d\n", day);
            printf("Remaining days: %d\n", 365 - day);
        }
    }
}

carrie@ubuntu:/debugging$ 
```

```
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_a.c -o 3-main_a 
carrie@ubuntu:/debugging$ ./3-main_a
Date: 04/01/1997
Day of the year: 91
Remaining days: 274
carrie@ubuntu:/debugging$
```

Output looks good for `04/01/1997`! Let’s make a new main file `3-main_b.c` to try a case that is a leap year: `02/29/2000`.

```
carrie@ubuntu:/debugging$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 3-convert_day.c 3-print_remaining_days.c 3-main_b.c -o 3-main_b 
carrie@ubuntu:/debugging$ ./3-main_b
Date: 02/29/2000
Invalid date: 02/29/2000
carrie@ubuntu:/debugging$
```

> ? That doesn’t seem right.

Fix the `print_remaining_days()` function so that the output works correctly for all dates and all leap years.

- Line count will not be checked for this task.
- You can assume that all test cases have valid months (i.e. the value of `month` will never be less than `1` or greater than `12`) and valid days (i.e. the value of `day` will never be less than `1` or greater than `31`).
- You can assume that all test cases have valid month/day combinations (i.e. there will never be a June 31st or November 31st, etc.), but not all month/day/year combinations are valid (i.e. February 29, 1991 or February 29, 2427).

__Notes__
- A leap year is year that occurs every four years with 366 days instead of 365 days. February, of a leap year, has 29 days.
- Any year that is evenly divisible by 4 is a leap year: for example, 1988, 1992, and 1996 are leap years.
- Divisibility Rule of 4
  - If the last two digits of a number are divisible by 4, then that number is a multiple of 4 and is
  divisible by 4 completely. 
  - Example: Take the number 2308. Consider the last two digits i.e. 08. As 08 is divisible by 4, the
  original number 2308 is also divisible by 4.
- [Months and their Number of Days](https://www.timeanddate.com/calendar/months/#:~:text=The%20Gregorian%20calendar%20is%20made,28%20and%2031%20days%20long.)
- 