// Write a menu driven program to create a single link list and then write another C function to    
//      sort that linked list use separate functions.

#include <stdio.h>
#include <stdlib.h>
typedef struct list{
    int data;
    struct list* next;
}str;

str* insert(str*,int);
void display(str*);
void sort(str*);

int main() {
    str* start = NULL;
    int ch, data;
    do {
        printf("\nLinked List Menu:\n");
        printf("1. Insert\n");
        printf("2. Display\n");
        printf("3. Sort the linked list\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch)
        {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                start = insert(start,data);
                break;
            case 2:
                display(start);
                break;
            case 3:
                sort(start);
                printf("Linked list sorted successfully.\n");
                break;
            case 4:
                printf("Exiting program.\n");
                exit(0);
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (ch!=4);
    return 0;
}

// Function to insert a node at the end of the linked list
str* insert(str* start,int num){
    str*new,*ptr;
    new = (str*)malloc(sizeof(str));
    if (new==NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new->data = num;
    new->next = NULL;
    if (start==NULL) {
        start = new;
    }
    else{
        ptr = start;
        while (ptr->next != NULL){
            ptr = ptr->next;
        }
        ptr->next = new;
    }
    printf("%d inserted at the end of the list.\n",num);
    return start;
}

// Function to display the linked list
void display(str* start){
    str* ptr=start;
    if (ptr==NULL) {
        printf("Linked list is empty.\n");
        return;
    }
    printf("Linked list: ");
    while (ptr!=NULL){
        printf("%d ",ptr->data);
        ptr=ptr->next;
    }
    printf("\n");
}

// Function to swap data of two nodes
void swapData(str* a, str* b) {
    int temp = a->data;
    a->data = b->data;
    b->data = temp;
}

// Function to perform bubble sort on the linked list
void sort(str* start) {
    int swap;
    str*ptr,*last=NULL;

    if(start == NULL){
        printf("Linked list is empty.\n");
        return;
    }
    do{
        swap = 0;
        ptr = start;
        while (ptr->next != last){
            if (ptr->data > ptr->next->data) {
                swapData(ptr, ptr->next);
                swap = 1;
            }
            ptr = ptr->next;
        }
        last = ptr;
    } while(swap);
}