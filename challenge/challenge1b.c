/*
* challenge1b.c
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
swap two numbers which are X = 2.5 and Y = 5.5
so,we need to declare two variable to store the data of X and Y --*/
float x = 2.5; //X = 2.5;
float y = 5.5; //Y = 5.5;

//printing the value of a and b variable before swapping
printf("Before swapping,Value of X is: %f and Y is: %f \n",x,y);


//----------------------now logic for swapping is as follows----------------------//


/*
* 1.declare one extra variable let's say c
* 2.first transfer the value of a to c
* 3.then transfer the value of b to a
* 4.finally transfer the value of c to b
*/

//write your code here for swapping
float c; //declaring extra variable for temporary use

c = x; //storing X=2.5 in variable c
x = y; //storing Y=5.5 in variable x
y = c; //storing variable c in y


//printing the value of a and b variable after swapping
printf("after swapping,Value of X is: %f and Y is: %f",x,y);

//after executing this main function this function will return 0 value
return 0;
}
