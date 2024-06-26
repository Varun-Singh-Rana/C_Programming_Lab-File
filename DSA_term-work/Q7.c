//Write a menu driven program to implement a double linked list.

#include <stdio.h>
#include <stdlib.h>
typedef struct list{
    struct list* prev;
    int data;
    struct list* next;
}str;

str* insert_beg(str*,int);
str* insert_end(str*,int);
void display(str*);

int main(){
    str*l=NULL,*r=NULL;
    int ch,data;

    do {
        printf("\nDoubly Linked List Menu:\n");
        printf("1. Insert at the beginning\n");
        printf("2. Insert at the end\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data to insert at the beginning: ");
                scanf("%d", &data);
                l=insert_beg(l,data);
                break;
            case 2:
                printf("Enter data to insert at the end: ");
                scanf("%d", &data);
                l=insert_end(l,data);
                break;
            case 3:
                display(l);
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }while(ch!=4); 
    return 0;
}


// Function to insert a node at the beginning of the doubly linked list
str*insert_beg(str*start,int data){
    str*new=(str*)malloc(sizeof(str));
    if (new==NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new->data = data;
    new->prev = NULL;
    new->next = NULL;

    if (start == NULL) {
        start=new;
    } else {
        new->next=start;
        (start)->prev=new;
        start=new;
    }
    printf("%d inserted at the beginning of the list.\n", data);
    return start;
}

// Function to insert a node at the end of the doubly linked list
str*insert_end(str*start,int data) {
    str* new,*ptr;
    new=(str*)malloc(sizeof(str));
    if (new==NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new->data=data;
    new->prev=NULL;
    new->next=NULL;

    if (start==NULL) {
        start=new;
    }
    else{
        ptr=start;
        while (ptr->next != NULL) {
            ptr=ptr->next;
        }
        ptr->next=new;
        ptr->prev=ptr;
    }
    printf("%d inserted at the end of the list.\n", data);
    return start;
}

// Function to display the doubly linked list
void display(str*start) {
    if(start==NULL){
        printf("Doubly linked list is empty.\n");
        return;
    }
    printf("Doubly linked list: ");
    while (start!=NULL) {
        printf("%d ",start->data);
        start=start->next;
    }
    printf("\n");
}