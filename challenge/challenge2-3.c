/*
* challenge2-3.c
*
* Created on: Jan 6, 2023
* Author: zameel
*/

#include <stdio.h>//We have to include stdio.h (standard input output library for C language)
//to use printf function

//starting of main function,inside this main function we have to write our logic

int main()
{

//declaring variables of different data types
char a;
int x;
float p,q;

//assigning variables

a='a';
x=125;
p=10.25,q=18.76;

//printing their address with format specifier %u

//adress representing '&'

printf("%c is stored at address %u\n",a,&a);
printf("%d is stored at address %u\n",x,&x);
printf("%f is stored at address %u\n",p,&p);
printf("%f is stored at address %u\n",q,&q);
return 0;
}
