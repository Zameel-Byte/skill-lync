/*

* challenge7-2.c

*

* Created on: Feb 22, 2023

* Author: zameel

*/

#include <stdio.h>

// define the states of the elevator
typedef enum {
IDLE,
MOVING_UP,
MOVING_DOWN
} ElevatorState;

// define the floors of the building
typedef enum {
FLOOR_1 = 1,
FLOOR_2,
FLOOR_3,
FLOOR_4,
FLOOR_5,
FLOOR_6
} Floor;

// define a function to handle a request to move the elevator to a specified floor
void move_to_floor(ElevatorState *state, Floor *current_floor, Floor requested_floor) {
if (requested_floor == *current_floor) {
// if the requested floor is the current floor, do nothing
printf("Elevator is already at floor %d\n", *current_floor);
} else if (requested_floor > *current_floor) {
// if the requested floor is above the current floor, change to moving up state and move to the requested floor
printf("Elevator moving from floor %d to floor %d\n", *current_floor, requested_floor);
*state = MOVING_UP;
*current_floor = requested_floor;
} else {
// if the requested floor is below the current floor, change to moving down state and move to the requested floor
printf("Elevator moving from floor %d to floor %d\n", *current_floor, requested_floor);
*state = MOVING_DOWN;
*current_floor = requested_floor;
}
}

// define the main function to simulate elevator operation
int main() {
// initialize the elevator state and current floor
ElevatorState state = IDLE;
Floor current_floor = FLOOR_1;

// simulate elevator operation by handling requests to move to different floors
move_to_floor(&state, &current_floor, FLOOR_2); // move from floor 1 to floor 2
move_to_floor(&state, &current_floor, FLOOR_4); // move from floor 2 to floor 4
move_to_floor(&state, &current_floor, FLOOR_1); // move from floor 4 to floor 1
move_to_floor(&state, &current_floor, FLOOR_6); // move from floor 1 to floor 6
move_to_floor(&state, &current_floor, FLOOR_3); // move from floor 6 to floor 3

return 0;
}

