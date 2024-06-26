//Write a C program to split a singly linked list in two linked lists, the node information is given 
//       by the user at  which linked list has to split.


#include <stdio.h>
#include <stdlib.h>

typedef struct list {
    int data;
    struct list* next;
} str;

// Function prototypes
str* createNode(int);
str* insert(str*, int);
void display(str*);
void splitlist(str**, str*, int);

int main() {
    str* head = NULL, *list1 = NULL;
    int ch, data, split;
    do {
        printf("\nLinked List Menu:\n");
        printf("1. Insert element\n");
        printf("2. Display linked list\n");
        printf("3. Split linked list\n");
        printf("4. Display split linked lists\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data to insert: ");
                scanf("%d", &data);
                head = insert(head, data);
                break;
            case 2:
                printf("Linked list:\n");
                display(head);
                break;
            case 3:
                printf("Enter the value of the node where you want to split the linked list: ");
                scanf("%d", &split);
                splitlist(&list1, head, split); // Pass list1 as a double pointer
                break;
            case 4:
                printf("Linked List 1 after splitting:\n");
                display(list1);
                printf("Linked List 2 after splitting:\n");
                display(head); // Display the remaining part of the original list
                break;
            case 5:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (ch != 5);
    return 0;
}

// Function to create a new node
str* createNode(int data) {
    str* new = (str*)malloc(sizeof(str));
    if (new == NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new->data = data;
    new->next = NULL;
    return new;
}

// Function to insert a node at the end of the linked list
str* insert(str* start, int data) {
    if (start == NULL)
        return createNode(data);

    str* temp = start;
    while (temp->next != NULL)
        temp = temp->next;

    temp->next = createNode(data);
    return start;
}

// Function to display the linked list
void display(str* start) {
    str* temp = start;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

// Function to split the linked list into two based on user input
void splitlist(str** list1, str* start, int split) {
    str* current = start;
    str* prev = NULL;
    *list1 = NULL;

    while (current != NULL){
        if (current->data == split){
            *list1 = current->next;
            current->next = NULL;
            break;
        }
        prev = current;
        current = current->next;
    }
}