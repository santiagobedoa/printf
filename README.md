# _printf
```_printf``` is a custom implementation of the C programming function ```printf```. This project is an application of the C programming knowledge that [Holberton School](https://www.holbertonschool.com/) cohort 17 students have learned.

**Prototype:** ```int _printf(const char *format, ...);```

## Examples
**String**
* Input: ```_printf("%s\n", 'Hello world!');```
* Output: ```Hello world!```

**Character**
* Input: ```_printf("The first letter in "Hello world!" is %c\n", 'H');```
* Output: ```The first letter in "Hello world" is H```

**Integer**
* Input: ```_printf("There are %i minutes in an hour\n", 60);```
* Output: ```There are 60 minutes in an hour```

**Decimal:**
* Input: ```_printf("%d\n", 1000);```
* Output:  ```1000```

## Project Requirements
### General
* All files will be compiled on Ubuntu 20.04 LTS
* Your code should use the Betty style. It will be checked using [betty-style.pl](https://github.com/holbertonschool/Betty/blob/master/betty-style.pl) and [betty-doc.pl](https://github.com/holbertonschool/Betty/blob/master/betty-doc.pl)
* Global variables are not allowed
### Authorized functions and macros:
  * ```write``` (man 2 write)
  * ```malloc``` (man 3 malloc)
  * ```free``` (man 3 free)
  * ```va_start``` (man 3 va_start)
  * ```va_end``` (man 3 va_end)
  * ```va_copy``` (man 3 va_copy)
  * ```va_arg``` (man 3 va_arg)
### Compilation
```gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c```

## Mandatory Tasks
- [] Write function that produces output with conversion specifiers ```c```, ```s```, and ```%``` and **Returns** the number of characters printed (excluding the null byte used to end output to strings).
- [] Handle conversion specifiers ```d```, ```i```.
- [] Create a man page for your function.

## Advanced Tasks
**PENDIENTE**

## Files Description
**PAENDIENTE**

## Authors
<a href = 'https://www.github.com/Crisgrva'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/github.svg"/></a> [@carlosberrio](https://github.com/carlosberrio) | [@santiagobedoa](https://github.com/santiagobedoa)

<a href = 'https://www.twitter.com/crisgrvc'> <img width = '32px' align= 'center' src="https://raw.githubusercontent.com/rahulbanerjee26/githubAboutMeGenerator/main/icons/twitter.svg"/></a> [@Carlosberro6](https://twitter.com/carlosberro6) | [@santiagobedoa](https://twitter.com/santiagobedoa)
