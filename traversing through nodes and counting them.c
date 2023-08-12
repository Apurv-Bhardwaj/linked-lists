#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    int doja;
    int deci;
    struct node * link;
};
int main(){

    struct node *head = malloc(sizeof(struct node));
    head -> data = 34;
    head -> link = NULL;

   struct node *current = malloc(sizeof(struct node));
   current->data = 2;
   current->link = NULL;
   head ->link = current;

   current = malloc(sizeof(struct node));
   current ->data = 3;
   current ->link = NULL;
   
   head->link->link= current; //using the basic knowledge of pointing the system at the next node using the link method which means the location of the next node. very efficient
   
    printf("%d %d %d", head->data,  head->link->data, head->link->link->data);
//HERE we have used the following code to create a new node ptr which takes on the link from head and then traverses through the list and counts the number of nodes as it passes each nodes till ptr hits NULL.
  int count = 0;
  if (head == NULL)
    printf("the linked list has no nodes");
  struct node *ptr;
  ptr = head;
  while (ptr != NULL){
    count++;
    ptr = ptr->link;
  }
  printf("%d is the number of nodes in the given linked list");

}
