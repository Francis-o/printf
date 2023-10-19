
## Printf Project ##

## Description
This collaborative endeavor is a fundamental component of ALX's first-year curriculum. The task at hand involves creating a replica of the printf() function found in the C standard library.

What you should learn from this project:

* How to use git in a team setting
* Applying variadic functions to a big project
* The complexities of printf
* Managing a lot of files and finding a good workflow

---

## Prototype ##
```int _printf(const char *format, ...);```

## Usage ##
* Prints a string to the standard output, according to a given format
* All files were created and compiled on Ubuntu 14.04.4 LTS using GCC 4.8.4 with the command ```gcc -Wall -Werror -Wextra -pedantic *.c```
* Returns the number of characters in the output string on success, -1 otherwise
* Call it this way: ```_printf("format string", arguments...)``` where ```format string``` can contain conversion specifiers and flags,
along with regular characters

## Examples ##

* ```_printf("Hello, main\n")``` *prints "Hello, Main", followed by a new line*
* ```_printf("%s", "Hello")``` *prints "Hello"*
* ```_printf("This is a number: %d", 98)``` *prints "This is a number: 98"*

---

## Files
All of the following files are scripts and programs written in C:

| Filename | Description |
| -------- | ----------- |
| Task 0: Basic Printf Function |Create a function _printf that can handle the conversion specifiers c, s, and %. Your function should return the number of characters printed. You don't need to handle various flags, field width, precision, or length modifiers.|
| Task 1: Handling d and i Conversion Specifiers' |Extend your printf function to handle the conversion specifiers d and i. You still don't need to handle flags, field width, precision, or length modifiers. |
| Task 2: Handling Custom Binary Conversion Specifier (b) | Add support for a custom conversion specifier %b, which converts an unsigned integer to binary.|
| Task 3: Handling Additional Conversion Specifiers (u, o, x, X) |Extend your printf function to handle the conversion specifiers u, o, x, and X. You still don't need to handle flags, field width, precision, or length modifiers.|
| Task 4: Buffer Optimization |Optimize your code by using a local buffer of 1024 characters to minimize calls to the write function. |
| Task 5: Handling Custom String Conversion Specifier (S) |Implement support for a custom conversion specifier %S, which prints strings and escapes non-printable characters as \x followed by their ASCII code in hexadecimal.|
| Task 6: Handling Pointer (p) Conversion Specifier |Add support for the p conversion specifier, which prints pointers.|
| Task 7: Handling Flag Characters (+, space, #) |Handle the flag characters +, space, and # for non-custom conversion specifiers.|
| Task 8: Handling Length Modifiers (l, h) | Implement the length modifiers l and h for non-custom conversion specifiers d, i, u, o, x, and X.|
| Task 9: Handling Field Width'|Add support for handling field width for non-custom conversion specifiers.|
| Task 10: Handling Precision |Handle precision for non-custom conversion specifiers.|
| Task 11: Handling the 0 Flag Character |Implement the 0 flag character for non-custom conversion specifiers.|
| Task 12: Handling the - Flag Character |Add support for the - flag character for non-custom conversion specifiers.|
| Task 13: Custom Conversion Specifier (r) - Reversed String |Implement a custom conversion specifier %r that prints the reversed string.|
| Task 14: Custom Conversion Specifier (R) - Rot13'ed String |Add a custom conversion specifier %R that prints the Rot13'ed string.|
| Task 15: Integration of All Features |Ensure that all the features you've implemented work well together.|

### * All the above options work well together * ##
---

### Authors
* **Ifeanyi Ekezie** - [iiekeze@gmail.com](https://github.com/iiekezie)
* **Osazuwa Idubor** - [osazuwaidubor01@gmail.com](https:https://github.com/Francis-o)
