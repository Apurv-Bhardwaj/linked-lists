#include <stdio.h>
#include <stdlib.h>
struct node{
    int data;
struct node * link;

};
int main(){
  struct node * head = NULL;
head = (struct node *)malloc(size of(struct node)); //this line helps create the node for the list as we have the designated head (first) node as null. malloc makes it possible to assign the node's location.
//now the node has been created, its time to access it.
head ->data = 456;
head ->link = NULL;
//now we will print the data that is assigned to the node and thus end the program.
printf("%d", head->data);
return 0;
}
