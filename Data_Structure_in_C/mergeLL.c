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

    struct Node * node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = value;
    node -> next = NULL;

    return node;
}

struct Node* merge_LL(struct Node *head_one,struct Node *head_two){

    struct Node *demo = head_one;
    while (demo -> next != NULL)
    {
       demo = demo -> next;
    }
    // we've reached last node of 1st LL 
    // mow we make this last  node to point to head of 2nd LL
    
    demo-> next = head_two;
    
    return head_one;
}

int main(){

    struct Node *head_one = NULL;
    struct Node *head_two = NULL;
    struct Node *one_second,  *one_third, *two_second, *two_third;

    int value;
    printf("Creating First LL\n");

    printf("Enter data:\n");
    scanf("%d", &value);
    head_one = create_single_node(value);

    printf("Enter data:\n");
    scanf("%d", &value);
    one_second = create_single_node(value);
    head_one -> next = one_second;

    printf("Enter data:\n");
    scanf("%d", &value);
    one_third = create_single_node(value);
    one_second -> next = one_third;
  
    printf("\ntraversing the first LL\n");
    traverse_list(head_one);

    printf("\ncreating second LL\n");

    printf("Enter data:\n");
    scanf("%d", &value);
    head_two = create_single_node(value);

    printf("Enter data:\n");
    scanf("%d", &value);
    two_second = create_single_node(value);
    head_two -> next = two_second;

    printf("Enter data:\n");
    scanf("%d", &value);
    two_third = create_single_node(value);
    two_second -> next = two_third;

    printf("\ntraversing the second LL\n");
    traverse_list(head_two);

    // merge both of the LL

    head_one =  merge_LL(head_one, head_two);
    printf("\nthe merged LL is: \n");
    traverse_list(head_one);

    return 0;
}