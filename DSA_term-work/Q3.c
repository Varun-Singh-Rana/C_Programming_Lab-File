///Write a C program to create two link lists positive and negative from a Original linked list, so  
///that positive linked list contains all positive elements and negative linked list contains negative   
///elements. Positive and negative linked lists should use the node of existing original linked list.

#include <stdio.h>
#include <stdlib.h>
typedef struct list {
    int data;
    struct list* next;
}str;

str*insert(str*,int);
void splitList(str*, str**, str**);
void displayList(str*);
void freeList(str*);

int main() {
    str* orglist = NULL,* poslist = NULL,* neglist = NULL;
    int ch, data;

    do {
        printf("\nLink Lists Menu:\n");
        printf("1. Insert element into original list\n");
        printf("2. Split original list into positive and negative lists\n");
        printf("3. Display original list\n");
        printf("4. Display positive list\n");
        printf("5. Display negative list\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                printf("Enter data to insert into original list: ");
                scanf("%d", &data);
                orglist = insert(orglist, data);
                printf("Element %d inserted into original list.\n", data);
                break;
            case 2:
                splitList(orglist, &poslist, &neglist);
                printf("Original list split into positive and negative lists.\n");
                break;
            case 3:
                printf("Original List: ");
                displayList(orglist);
                break;
            case 4:
                printf("Positive List: ");
                displayList(poslist);
                break;
            case 5:
                printf("Negative List: ");
                displayList(neglist);
                break;
            case 6:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }while(ch!=6);
    // Freeing the memory allocated to the lists
    freeList(orglist);
    freeList(poslist);
    freeList(neglist);
    return 0;
}

// Function to insert a node at the end of the linked list
str* insert(str*start,int data){
    str* new = (str*)malloc(sizeof(str));
    if (new == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    new->next = NULL;
    if (start == NULL){
        return new;
    }
    str* temp = start;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = new;
    return start;
}

// Function to split the original linked list into positive and negative linked lists
void splitList(str* start, str** poslist, str** neglist) {
    str* current = start;
    while (current != NULL) {
        if (current->data >= 0)
            *poslist = insert(*poslist, current->data);
        else
            *neglist = insert(*neglist, current->data);
        current = current->next;
    }
}

// Function to display a linked list
void displayList(str* head) {
    str* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to free the memory allocated to a linked list
void freeList(str* head) {
    str* temp;
    while (head != NULL) {
        temp = head;
        head = head->next;
        free(temp);
    }
}