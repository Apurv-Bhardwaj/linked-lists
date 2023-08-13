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


//--------------------------------------------------------------------------------------
    
  struct node *temp, *ptr;
    ptr = head;
    temp = (struct node*)malloc(sizeof(struct node));
 temp->data = 67;
 temp->link = NULL;
 
 while (ptr->link != NULL){
     ptr = ptr->link;
 }
 ptr->link = temp;
 
//--------------------------------------------------------------------------------------
 if(head == NULL)
        printf("linked list is empty");
    struct node * prt = NULL;
    prt = head;
    while(prt != NULL){
        printf("%d \n", prt->data);
        prt = prt->link;
    }
}

