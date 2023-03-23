/*

* challenge4-3.c

*

* Created on: Jan 31, 2023

* Author: zameel

*/

 

 

#include <stdio.h> //We have to include stdio.h (standard input output library for C language)

//to use printf function

 

#include <string.h> 

// Define a union to store student record
union student_record {
char name[100]; // To store student name
char subject[100]; // To store student subject
float percentage; // To store student percentage
};

int main() {
union student_record student; // Declare a variable of union type

// Prompt user to enter student name
printf("Enter student name: ");
scanf("%s", student.name);

// Prompt user to enter student subject
printf("Enter student subject: ");
scanf("%s", student.subject);

// Prompt user to enter student percentage
printf("Enter student percentage: ");
scanf("%f", &student.percentage);

// Print student record
printf("Student record:\n");
printf("Name: %s\nSubject: %s\nPercentage: %.2f\n",
student.name, student.subject, student.percentage);

return 0;
}
