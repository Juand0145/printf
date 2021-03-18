# :seedling: OUR _PRINTF! :seedling:

Here we will find a file that work in a similar way to the normal printf function in C, with the objective to learn more about the construction of new functions and work in a team.


# Description :memo:

Printf is a function that allows you to print arguments depending on the format that is proposed. The project intends to copy the functionality of printf for string printing with the formats: **%s , %c, %% , %i, %d, %f, %b** and **%R** .
## :pencil2: Our _PRINTF Structure :chart_with_upwards_trend:


## Requirements :white_check_mark:
-   Allowed editors:  `vi`,  `vim`,  `emacs`
-   All your files will be compiled on Ubuntu 14.04 LTS
-   Your programs and functions will be compiled with  `gcc 4.8.4`  using the flags  `-Wall`  `-Werror`  `-Wextra`  `and -pedantic`
-   All your files should end with a new line
-   A  `README.md`  file, at the root of the folder of the project is mandatory
-   Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
-   You are not allowed to use global variables
-   No more than 5 functions per file
-   In the following examples, the  `main.c`  files are shown as examples. You can use them to test your functions, but you dont have to push them to your repo (if you do we wont take them into account). We will use our own  `main.c`  files at compilation. Our  `main.c`  files might be different from the one shown in the examples
-   The prototypes of all your functions should be included in your header file called  `holberton.h`
-   Dont forget to push your header file
-   All your header files should be include guarded
-   Note that we will not provide the  `_putchar`  function for this project
## Archives :memo:

The repository contains the following files:

### holberton.h :pencil2:

The file contains all the libraries and prototypes used in the project, in addition to the structure proposed for the function selector.

### _print.c :pencil2:

The file selects the function corresponding to the format that is granted.
Taking into account the following function **prototype**.
> **Function:** int _printf(const char *format, ...);


### mandatory_functions.c :pencil2:

The file contains the functions for printing the formats:
**%c** - print a single character.
**%s** -  print a string.
**%i , %d** - prints a number.

### helper_functions.c :pencil2:

The file contains useful functions for the program, such as printing and character counting.

### advanced_functions.c :pencil2:
The file contains the functions for printing the formats:
**%f** - prints float number.
**%d** - print character in binary.
### other_functions.c :pencil2:
The file contains the function for printing the format:
**%R** - print a strig in rot13 format.
###  test :package:
Contains the test files main.c

### man_3_printf :pencil2:
Is the basic manual of the function **_printf** designed.
