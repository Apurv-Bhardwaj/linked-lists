#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;

    struct node * link;
};

void main(){

 struct node *head = NULL;
 head = (struct node *)malloc(sizeof(struct node));
 head ->data = 45;
 head ->link = NULL;

 struct node * current = malloc(sizeof(struct node));
 current ->data = 345;
 current ->link = NULL;
 head ->link = current;

 current = malloc(sizeof(struct node));
 current ->data= 456;
 current ->link= NULL;
 head->link->link = current;

 //printf("%d %d %d\n", head->data, head->link->data, head->link->link->data);

    //THIS is the correct method to count all the data in the linked list and can be used in every code for any amount of nodes
 if(head == NULL)
     printf("linked list is empty");
 struct node * prt = NULL;
 prt = head;
 while(prt != NULL){
     printf("%d \n", prt->data);
     prt = prt->link;
 }

 int count = 0;
 struct node *ptr = NULL;
 if(head == NULL)
 printf("the given code has no nodes or linked lists");
 ptr = head;
 while(ptr != 0) {
     count++;
     ptr = ptr->link;
 }
 printf("%d", count);
}

