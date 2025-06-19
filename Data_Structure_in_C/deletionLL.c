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

struct Node* delete_node(struct Node *head, int value){

    struct Node *demo = head;
    struct Node* prev;

    // Let's check whether node we want to delete is head node or not
    if(demo != NULL && demo -> data == value){
        head = demo->next;
        free(demo);
    }
    else if(demo != NULL){
        while(demo != NULL && demo->data != value){
            prev = demo;
            demo = demo -> next;
        }
        if(demo == NULL){
            printf("\nThe node you want to delete is not in the Linked List\n");
        }
        else{
            prev -> next = demo -> next;
        }
        free(demo);
    }

    return head;
}
int main(){

    struct Node *head = NULL;
    struct Node *second = NULL;
    struct Node *third = NULL;
    int value;

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

    // code to delete a node
    printf("\nEnter the value of the node you want to delete: \n");
    scanf("%d",&value);
    head = delete_node(head, value);
    traverse_list(head);


    return 0;
}