#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    
    int n, i;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    printf("The array in reverse order is: ");
    for(i = n-1; i >= 0; i--)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    return 0;
}