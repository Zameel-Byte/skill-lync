/*
* challenge3-1.c
*
* Created on: Jan 20, 2023
* Author: zameel
*/

#include <stdio.h>//We have to include stdio.h (standard input output library for C language)
//to use printf function
#include <string.h>//We have to include string.h, to use "strlen"

//starting of main function,inside this main function we have to write our logic
int main(){
    //delaring variables
    char string1[20];   //for string
    int i, length;  //for itarable,length
    int flag = 0;   //flag variable for if case
   
    printf("Enter a string:");
    scanf("%s", string1);
   
    length = strlen(string1);   //storing the length of input string to "length" variable
   
    for(i=0;i < length ;i++){
        //reversing string and comparing with original string
        if(string1[i] != string1[length-i-1]){
            flag = 1;   //if the string is not palindrome, then flag will be set to "1"
            break;
           }
        }
   
    if (flag) {
        printf("%s is not a palindrome", string1);     //for non palindrome case
    }    
    else {
        printf("%s is a palindrome", string1);          //for palindrome case
    }
    return 0;
}
