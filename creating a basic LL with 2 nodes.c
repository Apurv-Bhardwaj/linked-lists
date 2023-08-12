#include <stdio.h>
#include <stdlib.h>

struct node{
    int data;
    int doja;
    int deci;
    struct node * link;
};
int main(){
    struct node * head = NULL;
    head = (struct node *) malloc(sizeof(struct node));
    head -> data = 34;
    head -> link = NULL;

    struct node *current = malloc(sizeof(struct node)); //creating the new node here named 'current' 
    current ->data = 69; //assigning data to the new node
    current ->link = NULL; //asssigning the link of the location of the NEXT node which is null
    head ->link = current; // assigning the link of the previous node to the newly made node current.


    printf("%d %d", head->data, current->data); //printing out both the given datas. 
    return 0;
}
