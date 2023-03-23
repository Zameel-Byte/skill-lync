/*

* challenge8-1.c

*

* Created on: Feb 22, 2023

* Author: zameel

*/

#include <stdio.h>
#include <pthread.h>

// Declare a global variable and a mutex to protect it
int global_var;
pthread_mutex_t mutex = PTHREAD_MUTEX_INITIALIZER;

// Define a function that will be executed by each thread
void *thread_func(void *arg) {
// Cast the argument pointer to an integer and assign it to a local variable
int value = *(int *)arg;

// Acquire the mutex to protect access to the global variable
pthread_mutex_lock(&mutex);

// Assign the value to the global variable and print a message indicating which thread did it
global_var = value;
printf("Thread %ld assigned value %d to global variable\n", pthread_self(), value);

// Release the mutex to allow other threads to access the global variable
pthread_mutex_unlock(&mutex);

// Return NULL to indicate that the thread has finished
return NULL;
}

int main() {
// Declare an array of five threads and an array of five integer arguments for the threads
pthread_t threads[5];
int args[5] = {0, 1, 2, 3, 4};

// Create each thread and pass it the corresponding argument from the array
for (int i = 0; i < 5; i++) {
pthread_create(&threads[i], NULL, thread_func, &args[i]);
}

// Wait for each thread to finish before exiting the program
for (int i = 0; i < 5; i++) {
pthread_join(threads[i], NULL);
}

// Print the final value of the global variable
printf("Final value of global variable is %d\n", global_var);

return 0;
}

 
