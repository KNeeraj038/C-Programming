#include<stdlib.h>
#include<stdio.h>

struct Node{
    int data;
    struct Node *next;
};

struct Node* head = NULL;
struct Node* current = NULL;

void insert_data( int data)
{
    if(head == NULL){
        head = malloc(sizeof(struct Node));     
        head->data = data;
        head->next = NULL;
    }else {
        struct Node *new_node = malloc(sizeof(struct Node));
        new_node->data = data;
        new_node->next = NULL;

        if(head->next == NULL){
            head->next = new_node;
            current = new_node; 
        }else{
            current->next = new_node;
            current = new_node;
        }
    }    
}

void print_ll()
{
    struct Node* temp = head;
    printf("Linked is : \n");
    
    while(temp != NULL){
        printf("--> %d",temp->data);
        temp = temp->next;
    }
}

int main()
{
    insert_data(10);
    insert_data(11);
    insert_data(12);
    insert_data(13);
    
    print_ll();

    printf("\n");
    return EXIT_SUCCESS;
}