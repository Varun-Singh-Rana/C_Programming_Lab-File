//Write a ‘C’ program to create a dynamic array to store N elements, and then apply binary  
//         search technique to search a  key given by the user.
 

#include <stdio.h>
#include <stdlib.h>
int binarySearch(int[], int, int);

int main() {
    int ch, N, key, index;
    printf("\nBinary Search Menu:\n");
    printf("1. Perform Binary Search\n");
    printf("2. Exit\n");

    do {
        printf("\nEnter your choice: ");
        scanf("%d", &ch);

        switch (ch) {
            case 1:
                printf("Enter the number of elements: ");
                scanf("%d", &N);

                int *arr = (int *)malloc(N * sizeof(int));
                printf("Enter %d elements in sorted order:\n", N);
                for (int i = 0; i < N; i++) {
                    scanf("%d", &arr[i]);
                }
                printf("Enter the key to search: ");
                scanf("%d", &key);

                index = binarySearch(arr, N, key);
                if (index != -1)
                    printf("Element found at index %d.\n", index);
                else
                    printf("Element not found.\n");

                free(arr);
                break;

            case 2:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice. Please enter a valid option.\n");
        }
    } while (ch!=2);
    return 0;
}

// Function to perform binary search
int binarySearch(int arr[], int size, int key) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == key)
            return mid;
        if (arr[mid] < key)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}