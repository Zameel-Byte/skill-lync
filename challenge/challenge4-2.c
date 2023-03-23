/*

* challenge4-2.c

*

* Created on: Jan 31, 2023

* Author: zameel

*/

 

#include <stdio.h>//We have to include stdio.h (standard input output library for C language)

//to use printf function

//Main function begins
int main() {
// storing time-stamp of both students
int student1_hours = 6;
int student1_minutes = 40;
int student1_seconds = 39;

int student2_hours = 8;
int student2_minutes = 30;
int student2_seconds = 50;
/* -----------------LOGIC----------------- */
/* subtracting the number of seconds taken by student 1 from the number of seconds taken by student 2. The time difference is then converted to hours, minutes, and seconds using integer division and modulus operations */
//caluclating seconds
int time_difference_seconds = (student2_hours - student1_hours) * 3600 +
(student2_minutes - student1_minutes) * 60 +
(student2_seconds - student1_seconds);
//calculating minutes
int time_difference_minutes = time_difference_seconds / 60;
time_difference_seconds %= 60;
//calculating hours
int time_difference_hours = time_difference_minutes / 60;
time_difference_minutes %= 60;

printf("Time difference: %d hours %d minutes %d seconds\n",
time_difference_hours, time_difference_minutes, time_difference_seconds);

return 0;
}
