/*

* challenge4-1.c

*

* Created on: Jan 31, 2023

* Author: zameel

*/

 

#include <stdio.h> //We have to include stdio.h (standard input output library for C language)
//to use printf function
#include <string.h> //We have to include string.h, to use "strcmp"

//Creating a "struct" type to store names and numbers
struct customer {
char full_name[100]; //variable for names
int telephone_number; //variable for phone no.
};

// Creating a function for sorting customers with arguments customer list and number of customers
void sort_customers(struct customer customers[], int n) {
int i, j; //iteration variables
struct customer temp;
for (i = 0; i < n - 1; i++) {
   for (j = i + 1; j < n; j++) {
// comparing strings and swaping
if (strcmp(customers[i].full_name, customers[j].full_name) > 0) {
temp = customers[i];
customers[i] = customers[j];
customers[j] = temp;
    }
  }
 }
}

// Main function begins

int main() {
//array of customer list
struct customer customers[3] = {
{"Joseph Louis Lagrange", 90345},
{"Jean Robert Argand", 89765},
{"Carl Friedrich Gauss", 80654}
};

int i, n = 3; //iteration var, number of customers var
// function call
sort_customers(customers, n);

printf("Revised list:\n");
// Reversing the customer list
/* --------------LOGIC--------------------- */
/* The revised list is obtained by parsing each full_name string into its constituent parts (first name, middle name, and last name) using the strtok function, and printing the last name followed by the first and middle initials. */

for (i = 0; i < n; i++) {
char first_initial, middle_initial;
char *first_name, *middle_name, *last_name;

first_name = strtok(customers[i].full_name, " ");
middle_name = strtok(NULL, " ");
last_name = strtok(NULL, " ");

first_initial = first_name[0];
middle_initial = middle_name[0];

printf("%s %c %c\n", last_name, first_initial, middle_initial);
}

return 0;
}
