/*

* Project-1.c

*

* Created on: Mar 6, 2023

* Author: zameel

*/

#include <stdio.h>
#include <stdlib.h>

// A structure of linked list node
struct node

{
     int data;
     struct node *next;


} *l_lOne, *l_lTwo, *unionl_l, *intersectionl_l;

void initialize()

{
      l_lOne = l_lTwo = NULL;
}
//Given a Inserts a node in front of a singly linked list.

void insert(struct node **head, int num)

{
     // Create a new Linked List node
     struct node* newNode = (struct node*) malloc(sizeof(struct node));
     newNode->data = num;
     // Next pointer of new node will point to head node of linked list
     newNode->next = *head;
     //make new node as new head of linked list
     *head = newNode;
}

// Searches an element in Linked List by linearly traversing from head to tail
int search(struct node *head, int num)

{
     while (head != NULL)

   {
      if (head->data == num)

      {
           return 1;
       }
      head = head->next;
    }
  return 0;

}

//Returns the union of two given linked list

struct node* findunion(struct node *l_lOne, struct node *l_lTwo)

{
    unionl_l = NULL;
    // Add all nodes of first Linked List to unionl_l
    struct node *temp = l_lOne;
    while(temp != NULL)

   {
        insert(&unionl_l, temp->data);
        temp = temp->next;
    }
// Insert those nodes of l_lTwo which is not present in l_lOne
   while(l_lTwo != NULL)

  {
      if(!search(l_lOne, l_lTwo->data))

        {
             insert(&unionl_l, l_lTwo->data);
         }
         l_lTwo = l_lTwo->next;
   }
  return unionl_l;
}


//Returns the Linked List which contains common nodes of two given linked list

struct node* intersection(struct node *l_lOne, struct node *l_lTwo)

{
     intersectionl_l = NULL;
     //Search every element of l_lOne in l_lTwo, If found then add it to intersection List
     while(l_lOne != NULL)

   {
         if(search(l_lTwo, l_lOne->data))

        {
            insert(&intersectionl_l, l_lOne->data);
         }
         l_lOne = l_lOne->next;
    }
     return intersectionl_l;
}
//Prints a linked list from head node till tail node

void printLinkedList(struct node *nodePtr)

{
    while (nodePtr != NULL)

     {
        printf("%d", nodePtr->data);
        nodePtr = nodePtr->next;
        if(nodePtr != NULL)
         printf("-->");

      }
 }

int main()

{
   int i, l_lOneCount, l_lTwoCount, temp;
    initialize();
    //Creating First linked List
    printf("Enter number of nodes in first Linked List\n");
    scanf("%d", &l_lOneCount);
    printf("Enter %d integers\n", l_lOneCount);
    for(i=0; i<l_lOneCount; i++)

    {
        scanf("%d", &temp);
        insert(&l_lOne, temp);
     }
      printLinkedList(l_lOne);
      printf("\nEnter number of nodes in second Linked List\n");
      scanf("%d", &l_lTwoCount);
      printf("Enter %d integers\n", l_lTwoCount);
      for(i=0; i<l_lTwoCount; i++)

      {
         scanf("%d", &temp);
         insert(&l_lTwo, temp);
       }
      printLinkedList(l_lTwo);
      //printing Union of two given linked list
      findunion(l_lOne, l_lTwo);
      intersection(l_lOne, l_lTwo);
      printf("\nUnion Linked List\n");
      printLinkedList(unionl_l);
      printf("\nIntersection Linked List\n");
      printLinkedList(intersectionl_l);

   return 0;
}
