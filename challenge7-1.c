/*

* challenge7-1.c

*

* Created on: Feb 22, 2023

* Author: zameel

*/

#include <stdio.h>
#include <stdlib.h>

// define a Node struct for a linked list node
struct Node {
    int val;
    struct Node *next;
};

// define a function to insert a new node into a sorted linked list
struct Node *insert_node(struct Node *head, int val) {
    // create a new node with the given value
    struct Node *new_node = (struct Node *)malloc(sizeof(struct Node));
    new_node->val = val;
    new_node->next = NULL;
    
    // case 1: the linked list is empty, so set the head to the new node and return the head
    if (!head) {
        head = new_node;
        return head;
    }
    
    // case 2: the new node's value is less than the head's value, so insert the new node at the beginning of the linked list
    if (val < head->val) {
        new_node->next = head;
        head = new_node;
        return head;
    }
    
    // case 3: traverse the linked list to find the correct position to insert the new node
    struct Node *curr = head;
    while (curr->next && val > curr->next->val) {
        curr = curr->next;
    }
    
    // insert the new node by updating the next pointers of the current node and the new node
    new_node->next = curr->next;
    curr->next = new_node;
    
    // return the head of the modified linked list
    return head;
}

// driver code to test the function
int main() {
    struct Node *head = NULL;
    head = insert_node(head, 5);
    head = insert_node(head, 3);
    head = insert_node(head, 7);
    head = insert_node(head, 1);
    head = insert_node(head, 9);
    while (head) {
        printf("%d ", head->val);
        head = head->next;
    }
    return 0;
}
