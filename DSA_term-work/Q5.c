//Write a menu driven program to implement circular queue using linked list.

#include <stdio.h>
#include <stdlib.h>
typedef struct list{
    int data;
    struct list* next;
}str;

typedef struct Queue{
    struct list*f;
    struct list*r;
}que;


que* createQueue();
int isEmpty(que*);
void enqueue(que*,int);
int dequeue(que*);
void display(que*);

int main() {
    que*q = createQueue();
    int ch, data;

    do {
        printf("\nCircular Queue Menu:\n");
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &ch);

        switch(ch){
            case 1:
                printf("Enter data to enqueue: ");
                scanf("%d", &data);
                enqueue(q, data);
                break;
            case 2:
                if(q->f != NULL){
                    printf("%d dequeued from circular queue.\n", dequeue(q));
                }
                else{
                    printf("Circular queue is empty.\n");
                }
                break;
            case 3:
                display(q);
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


// Function to create an empty circular queue
que* createQueue() {
    que* q;
    q=(que*)malloc(sizeof(que));
    if (q==NULL) {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    q->f = NULL;
    q->r = NULL;
    return q;
}



// Function to enqueue an element into the circular queue
void enqueue(que*q,int data) {
    str*new;
    new=(str*)malloc(sizeof(str));
    if(new==NULL){
        printf("Memory allocation failed.\n");
        exit(1);
    }
    new->data = data;
    new->next = NULL;
    if (q->f==NULL){
        q->f=new;
    }
    else{
        q->r->next=new;
    }
    q->r=new;
    q->r->next=q->f;
    printf("%d enqueued to the circular queue.\n", data);
}

// Function to dequeue an element from the circular queue
int dequeue(que* q) {
    if (q->f == NULL) {
        printf("Circular queue is empty.\n");
        exit(1);
    }
    int data;
    str*ptr = q->f;
    if (q->f == q->r) {
        q->f = NULL;
        q->r = NULL;
    } else {
        q->f = q->f->next;
        q->r->next = q->f;
    }
    data = ptr->data;
    free(ptr);
    return data;
}

// Function to display the circular queue
void display(que* q) {
    if (q->f == NULL) {
        printf("Circular queue is empty.\n");
        return;
    }
    str*ptr= q->f;
    printf("Circular queue: ");
    do {
        printf("%d ", ptr->data);
        ptr = ptr->next;
    } while (ptr != q->f);
    printf("\n");
}