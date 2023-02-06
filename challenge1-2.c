/*
* challenge1-2.c
*
* Created on: Dec 25, 2022
* Author: zameel
*/

#include <stdio.h>//We have to include stdio.h (standard input output library for C language)
//to use printf function

/*in problem statement,it's mentioned that we have to
Initialize an enum with 2 members and print their values
so,we need to declare two members to store the data*/

enum gender{boy,girl};  //declaring enum variable gender

//starting of main function,inside this main function we have to write our logic
int main()
{
enum gender x; //declaring enum object x
x = boy;
enum gender y; //declaring enum object y
y = girl;
printf("%d \n%d",x,y); //printing values of x,y
return 0;
}
