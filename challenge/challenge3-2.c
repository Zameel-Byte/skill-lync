/*
* challenge3-2.c
*
* Created on: Jan 20, 2023
* Author: zameel
*/

#include <stdio.h>//We have to include stdio.h (standard input output library for C language)
//to use printf function

//declaring function, and arguments for calulating average and percentage
void avg_per(int a, int b, int c, float *avg, float *per);

//starting of main function,inside this main function we have to write our logic
int main()
{
//delaring required varables
int a, b, c;
float avg, per; //avegrage and percentage maybe floating values. so, declared in float data type

//taking data from user/student
printf("Enter the marks of subject 1: ");
scanf("%d", &a);
printf("Enter the marks of subject 2: ");
scanf("%d", &b);
printf("Enter the marks of subject 3: ");
scanf("%d", &c);

//calling function(call by referance method)
avg_per(a, b, c, &avg, &per);

//printing output in main func
printf("\n The Average: %.2f", avg); //only printing two decimal points
printf("\nThe Percentage: %.2f%%", per);
return 0;
}

//func prototyping for calculating average and percentage
void avg_per(int a, int b, int c, float *avg, float *per)
{
//calulating average
*avg = (a+b+c)/3.0;
//calculating percentage
*per = ((a+b+c)/300.0)*100;
}
