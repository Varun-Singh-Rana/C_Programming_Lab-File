#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr1[n], arr2[n];
    printf("Enter the elements of the first array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("Copying the elements of the first array into the second array...\n");
    for(i = 0; i < n; i++)
    {
        arr2[i] = arr1[i];
    }
    printf("The elements of the second array are: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }
    printf("\n");
    return 0;
}