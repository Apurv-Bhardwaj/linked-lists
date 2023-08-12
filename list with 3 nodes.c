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

    struct node *current = malloc(sizeof(struct node));
    current ->data = 69;
    current ->link = NULL;
    head ->link = current;

    struct node *current2 = malloc(sizeof(struct node)); //using the same method as above we create a new node to extend our linked list.
    current2 -> data = 40;
    current2-> link = NULL;
    current ->link = current2;

  printf("%d %d %d", head->data, current->data, current2->data);

return 0;
}
