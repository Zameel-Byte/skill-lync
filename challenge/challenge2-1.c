/*
* challenge2-1.c
*
* Created on: Jan 6, 2023
* Author: zameel
*/

#include <stdio.h>//We have to include stdio.h (standard input output library for C language)
//to use printf function

//starting of main function,inside this main function we have to write our logic
int main()
{
int a, b, c; //declaring variables

printf("Enter three numbers\n"); //print instruction for user to understand
scanf("%d %d %d", &a, &b, &c); //taking input from user

//-------------LOGIC-----------//

if(a > b) // compare A and B
{
if(a > c) //If A is higher then B, compare A and C
printf("a: %d is largest\n", a); //If A is larger then print "A is largest"
else
printf("b: %d is largest\n", b); //If B is larger then print "B is largest"
}
else if(b > c) //If A is not larger than B, compare B and C
printf("b: %d is largest\n", b); //If B is larger then print "B is largest"
else
printf("c: %d is largest\n", c); //If C is largest then print "C is largest"

return 0;
}
