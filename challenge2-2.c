/*
* challenge2-2.c
*
* Created on: Jan 6, 2023
* Author: zameel
*/

#include <stdio.h>//We have to include stdio.h (standard input output library for C language)
//to use printf function

void change(); //function prototype
int a = 17; // Global Variable x
//starting of main function,inside this main function we have to write our logic
int main() {
int a = 35; // Local Variable x
change(); //function call
printf("%d\n", a); // The value 35 is printed
return 0;
}
void change() { //function declaration
printf("%d\n", a); // The value 17 is printed
}
