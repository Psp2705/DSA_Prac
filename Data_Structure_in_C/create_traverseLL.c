#include<stdio.h>
#include<stdlib.h>


struct Node {
    int data;
    struct Node *next;
};

void traverse_list(struct Node *h){
    while(h!=NULL){
        printf("%d->", h->data);

        if(h->next == NULL){
            printf("NULL");
        }

        h = h -> next;
    }
}

int main(){

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;

    // allocate memory to three needed nodes

    head = (struct Node*)malloc(sizeof(struct Node));
    second = (struct Node*)malloc(sizeof(struct Node));
    third = (struct Node*)malloc(sizeof(struct Node));

    // now we allocate values to data fields of node and make link between them

    head -> data = 3;
    head -> next = second;

    second -> data = 10;
    second -> next = third;

    third -> data = 2;
    third -> next = NULL;

    // creation of LL is completed
    // now we will traverse it

    traverse_list(head);


    return 0;
}