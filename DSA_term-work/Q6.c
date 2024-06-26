//Write a C program to implement Stack using linked list and then display stack from bottom to top.

#include <stdio.h>
#include <stdlib.h>
typedef struct list {
    int data;
    struct list* next;
}list;
typedef struct Stack {
    list* top;
}stack;

void initializeStack(stack*);
void push(stack*, int);
int pop(stack*);
void display(stack*);

int main() {
    struct Stack stack;
    stack.top = NULL;
    int ch, data;

    do {
        printf("\nStack Menu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display stack from bottom to top\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter data to push onto the stack: ");
                scanf("%d", &data);
                push(&stack, data);
                printf("Element %d pushed onto the stack.\n", data);
                break;
            case 2:
                if (stack.top == NULL) {
                    printf("Stack is empty. Cannot pop.\n");
                } else {
                    data = pop(&stack);
                    printf("Popped element: %d\n", data);
                }
                break;
            case 3:
                display(&stack);
                break;
            case 4:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    }while(ch!=4);
    return 0;
}
// Function to push an element onto the stack
void push(stack* stack, int data) {
    list* new = (list*)malloc(sizeof(list));
    if (new == NULL) {
        printf("Memory allocation failed.\n");
        exit(EXIT_FAILURE);
    }
    new->data = data;
    new->next = NULL;
    new->next = stack->top;
    stack->top = new;
}

// Function to pop an element from the stack
int pop(struct Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack underflow.\n");
        exit(EXIT_FAILURE);
    }
    list* temp = stack->top;
    int data = temp->data;
    stack->top = stack->top->next;
    free(temp);
    return data;
}

// Function to display the stack from bottom to top
void display(struct Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Stack elements from bottom to top: ");
    list* current = stack->top;
    while (current != NULL) {
        printf("%d ", current->data);
        current = current->next;
    }
    printf("\n");
}