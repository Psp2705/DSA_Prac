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


struct Node* create_single_node(int value){

    struct Node *node = (struct Node*)malloc(sizeof(struct Node));
    node-> data = value;
    node-> next = NULL;

    return node;
}

struct Node* insert_at_beginning(struct Node *head, int value){

    struct Node *new_node = create_single_node(value);
    new_node -> next = head;
    head = new_node;

    return head;

}

struct Node* insert_at_end(struct Node *head, int value){
    struct Node *new_node = create_single_node(value);
    struct Node *demo = head;
    // traversing the LL
    while(demo->next != NULL){
        demo = demo -> next;
    }
    // we have reached at last node
    demo -> next = new_node;

    return head;
}

struct Node* insert_at_mid(struct Node *head, int value){
    struct Node *new_node = create_single_node(value);
    struct Node *demo = head;
    struct Node *track = head;
    int c = 0;
    int mid;

    while(demo != NULL){
        c++;
        demo = demo -> next;
    }
    if((c/2) == 0){
        mid = (c/2);
    }
    else{
        mid = (c+1)/2;
    }
    c = 1;
    while(c!=mid && track!=NULL){
        c++;
        track = track->next;
    }
    // we've reached node at mid
    // now new node will be inserted just after node at mid
    // the node at mid id 'track'
    new_node -> next = track->next;
    track->next = new_node;
    return head;
}

int main(){


    int value;
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


    // Let's do insertion in the begining
    printf("\nEnter the value of node to be inserted at beginning: ");
    scanf("%d", &value);
    head =  insert_at_beginning(head, value);
    traverse_list(head);

    // insertion at the end
    printf("\nEnter the value of node to be inserted at end: ");
    scanf("%d", &value);
    head =  insert_at_end(head, value);
    traverse_list(head);


    // insertion in the middle 
    printf("\nEnter the value of node to be inserted in the middle: ");
    scanf("%d", &value);
    head =  insert_at_mid(head, value);
    traverse_list(head);


    return 0;
}