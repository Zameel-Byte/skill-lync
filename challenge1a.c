/*
* challenge1a.c
*
* Created on: Dec 25, 2022
* Author: zameel
*/

#include <stdio.h>//We have to include stdio.h (standard input output library for C language)
//to use printf function

//starting of main function,inside this main function we have to write our logic
int main()
{
/*in problem statement,it's mentioned that we have to
swap two numbers which are A = 10 and B = 20
so,we need to declare two variable to store the data of A and B --*/
int a = 10; //A = 10;
int b = 20; //B = 20;

//printing the value of a and b variable before swapping
printf("Before swapping,Value of A is: %d and B is: %d \n",a,b);


//----------------------now logic for swapping is as follows----------------------//


/*
* 1.declare one extra variable let's say c
* 2.first transfer the value of a to c
* 3.then transfer the value of b to a
* 4.finally transfer the value of c to b
*/

//write your code here for swapping
int c; //declaring extra variable for temporary use

c = a; //storing A=10 in variable c
a = b; //storing B=20 in variable a
b = c; //storing variable c in b


//printing the value of a and b variable after swapping
printf("after swapping,Value of A is: %d and B is: %d",a,b);

//after executing this main function this function will return 0 value
return 0;
}
