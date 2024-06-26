//    Write a C program to Insert and Delete elements form a Queue using link list ,each node
//    should have the following information about a product EMP_Id(char) , EMP_Name(string)     
//   ,EMP_Salary(float),EMP_Contact_No(Char).

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct list
{
    char EMP_Id;
    char EMP_Name[100];
    float EMP_Salary;
    int EMP_Contact_No;
    struct list* next;
} sl;
sl* enque(sl* r, sl* f);
void display(sl*);
sl* deque(sl*f);

int main(){
    int ch;
    sl* f = NULL;
    sl* r = NULL;
    do{
        printf("\nQueue Menu:\n");
        printf("1 -> Enqueue \n2 -> Display \n3 -> deque \n");
        printf("Enter your choice:");
        scanf("%d", &ch);
        switch(ch)
        {
            case 1:
                r = enque(r, f);
                if (f == NULL)
                {
                    f = r;
                }
                break;

            case 2:
                display(f);
                break;

            case 3:
                f = deque(f);
                break;

            default:
                printf("Invalid input\n");
                break;
        }
    } while(ch <= 3);
}
//ENQUE THE ELEMENT IN QUEUE

sl* enque(sl* r, sl* f) 
{
    //DYNAMICALLY ALLOCATING MEMORY
    sl* newnode = (sl*)malloc(sizeof(sl));
    if (newnode == NULL)
    {
        printf("Memory not allocated ");
        return r;
    }
    //ENTERING THE DATA OF EMPLOYEE
    printf("\nEnter EMP_Id: ");
    scanf(" %c", &newnode->EMP_Id);
    printf("Enter EMP_Name: ");
    scanf("%s", newnode->EMP_Name);
    printf("Enter EMP_Salary: ");
    scanf("%f", &newnode->EMP_Salary);
    printf("Enter EMP_Contact_No: ");
    scanf("%d", &newnode->EMP_Contact_No);
    //FOR FIRST NODE

    if (f == NULL && r == NULL)
    {
        f = r = newnode;
    }
    else
    {
        r->next = newnode;
        r = newnode;
    }

    newnode->next = NULL;

    return r;
}

void display(sl* f)
{
    sl* temp = f;

    //TO CHECK QUEUE IS EMPTY 

    if (f == NULL)
    {
        printf("Queue is empty\n");
        return;
    }
    else
    {
        printf("\nEmployees in the queue:\n");
        while (temp != NULL)
        {
            //DISPLAY THE DETAILS OF EMPLOYEE
            printf("EMP_Id: %c\n", temp->EMP_Id);
            printf("EMP_Name: %s\n", temp->EMP_Name);
            printf("EMP_Salary: %.2f\n", temp->EMP_Salary);
            printf("EMP_Contact_No: %d\n", temp->EMP_Contact_No);
            temp = temp->next;
        }
    }
}

sl*deque(sl*f){
    sl*del_node=NULL;
    //DEL_NODE EQUAL TO FIRST NODE
    del_node = f;
    if(f==NULL)
    {
        printf("queue is empty \n");
        return ;
    }
    else{
        f = f->next;
    }
    //DEALLOCATING THE MEMORY 
free(del_node);
 return f;
}