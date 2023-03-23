/*

* challenge5-2.c

*

* Created on: Feb 6, 2023

* Author: zameel

*/

 

#include <stdio.h>

// Define a structure called "Person"
struct Person {
char name[100];
int age;
};

// Function to display the contents of a "Person" structure
void displayPerson(struct Person p) {
printf("Name: %s\n", p.name);
printf("Age: %d\n", p.age);
}

int main() {
struct Person person;

// Get information about a person
printf("Enter person's name: ");
scanf("%s", person.name);
printf("Enter person's age: ");
scanf("%d", &person.age);

// Call the displayPerson function and pass the "person" structure as a parameter
displayPerson(person);

return 0;
}
