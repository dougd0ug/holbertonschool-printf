# 🚀 Printf - Holberton School Project

Welcome to our printf project! ✨

Join us on our printf adventure, where we take on the exciting challenge of reconstructing the standard printf function using the C programming language, working together as a team of two, as part of our Holberton School training! 💻

## 📌 Detailed Description

The goal of this project is to recreate the printf function from the standard library. This custom printf implementation allows users to print formatted data to the standard output, handling both basic and advanced conversion specifiers.

Our version supports:

Basic specifiers: %c (character), %s (string), %d and %i (integers)

The key challenge was to replicate the behavior of the standard printf function without directly using it, ensuring efficiency and precision while managing variadic arguments and format specifiers.




## 🔧 Technologies & Tools

+ ![C](https://img.shields.io/badge/C-00599C?style=for-the-badge&logo=c&logoColor=white)
+ ![Linux Badge](https://img.shields.io/badge/Linux-333333?style=for-the-badge&logo=linux&logoColor=white)
+ ![Vim](https://img.shields.io/badge/Vim-019733?style=for-the-badge&logo=vim&logoColor=white)
+ ![Git](https://img.shields.io/badge/Git-F05032?style=for-the-badge&logo=git&logoColor=white)
+ ![GCC](https://img.shields.io/badge/GCC-343741?style=for-the-badge&logo=gnu&logoColor=white)



## 🛠️ Installation and Compilation

Your project will be compiled on Ubuntu 20.04 LTS using gcc with the following compilation flags:

````
bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c
````

Your code must adhere to the Betty coding style and will be validated with the betty-style.pl and betty-doc.pl scripts.


## 🚫 Restrictions

For this project, we have a few **strict limitations** to follow. These include function/macros restrictions, global variables, and a maximum number of functions per file.

### ✅ **Authorized Functions and Macros**

The following functions and macros are **authorized** for use:

- 📝 [`write`](https://man7.org/linux/man-pages/man2/write.2.html) (man 2 write)
- 🛠️ [`malloc`](https://man7.org/linux/man-pages/man3/malloc.3.html) (man 3 malloc)
- 🧹 [`free`](https://man7.org/linux/man-pages/man3/free.3.html) (man 3 free)
- ⏩ [`va_start`](https://man7.org/linux/man-pages/man3/va_start.3.html) (man 3 va_start)
- 🛑[`va_end`](https://man7.org/linux/man-pages/man3/va_end.3.html) (man 3 va_end)
- 🔄 [`va_copy`](https://man7.org/linux/man-pages/man3/va_copy.3.html) (man 3 va_copy)
- 🔢[`va_arg`](https://man7.org/linux/man-pages/man3/va_arg.3.html) (man 3 va_arg)

### 🚫 **Restrictions on Code Structure**

- **Global variables are not permitted**: Your code must not use global variables under any circumstances.
- **Maximum of 5 functions per file**: To keep the project modular, you are restricted to a maximum of **5 functions** per source file. Keep your code clean and organized!


## 📚 Examples

### Basic String and Character Output:

````
#include "main.h"

int main(void) 
{
    char initial = 'D';
    char *name = "Dorine and Louis";
    int len;

    len = _printf("Initial: %c, Name: %s\n", initial, name);
    _printf("Printed %i characters.\n", len);

    return 0;
}
````

### Expected Output:

````
Initial: D, Name: Dorine and Louis
Printed 21 characters.
````

### Explanation:

Demonstrates %c for characters and %s for strings.
Shows how _printf returns the character count.


## ♻️ Our Flowchart

This flowchart explains the _printf command:

https://github.com/dougd0ug/holbertonschool-printf/blob/main/Flowchart%20printf%20project.png?raw=true

## 📝 Our Man Page

To ensure proper usage of the _printf command, please refer to the manual below.

````
.TH _printf "Holberton School" "March 2025"

.SH NAME
.B _printf
- formatted output conversion

.SH SYNOPSIS
#include "main.h"
.br
.B _printf
(const char *format, ...);

.SH DESCRIPTION
The function
.B _printf
writes a string, including any formatted argument.

.SH OPTIONS
There is the specificiers supported :
.br
.TP
.B %c -
print the converted character.
.br
.TP
.B %s -
print the converted string.
.br
.TP
.B %i -
print the converted number.
.br
.TP
.B %d -
print the converted decimal number.
.br
.TP
.B %% -
print a '%'.

.SH RETURN VALUE
In success, the function will return the number of bytes printed, excluding the NULL byte.
.br

.SH ERRORS
If there is no format in the input, the function will return -1.
.br
If the last character if the string is '%', the function will return -1.
.br

.SH EXAMPLES
.TP
_printf("character : %c.", 'I');
.br
output : I.
.TP
_printf("string : %s.", "Hugo is the best");
.br
output : Hugo is the best.
.TP
_printf("number : %i.", 2);
.br
output : 2.
.TP
_printf("decimal number : %d.", 2.25);
.br
output : 2.25
.TP
_printf("Hello %% everyone.");
.br
output : Hello % everyone.
.TP
_printf("I'm %i years old", );
.br
output : Error.
.br
````










## Authors

👧 Dorine Lemee: [dougd0ug](https://github.com/dougd0ug)

👦 Louis Manchon: [LouisManchon](https://github.com/LouisManchon)

