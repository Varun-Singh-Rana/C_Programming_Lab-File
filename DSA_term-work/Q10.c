//Write a C program to sort a sequence of characters given by user in an array, using bubble sort
//         technique.

#include <stdio.h>
#define MAX 100

void b_sort(char[], int);

int main() {
    char a[MAX];
    int i, n, choice;
    printf("Enter the number of elements: ");
    scanf("%d", &n);
    
    for (i = 0; i < n; i++) {
        printf("Enter the element: ");
        scanf(" %c", &a[i]);
    }

    printf("Choose sorting technique:\n");
    printf("1. Bubble Sort\n");
    printf("2. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            b_sort(a, n);
            printf("Sorted array is:");
            for (i = 0; i < n; i++) {
                printf(" %c", a[i]);
            }
            break;
        case 2:
            printf("Exiting program.\n");
            break;
        default:
            printf("Invalid choice. Exiting program.\n");
    }

    return 0;
}

void b_sort(char a[], int n) {
    int i, j;
    char t;
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - 1 - i; j++) {
            if (a[j] > a[j + 1]) {
                t = a[j];
                a[j] = a[j + 1];
                a[j + 1] = t;
            }
        }
    }
}