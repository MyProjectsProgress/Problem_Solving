#include <stdio.h>

/* declaration is a prototype needed to declare how variables are declared */
/* definition is  */
/* library is a code can be used, it contains some functions.
 we put all its declarations in the include file */
/* include means get this file open it and put its contents here */
/* <> gets something that exists already in the place where the code is written */

// int means the return of main function is integer
// main means a function, sequentially operated functions, code must be written inside main
// void is the arguments of the main function, void ya3ny wla 7aga 7arfyan.

/* for the header file, c make is responsible of reaching the .c files needed for the included
 header files */

// char is an integer data type of 1 byte.
// how float and double are stored in certain standard
// search for IEEE 754 or floating point
// signed or unsigned numbers

int main(void){

    const int x = 5; // it is still a variable but it is read only, can't be changed in runtime
    printf("Hello world!"); // function call with argument of type string
    return 0; // output of main

}
