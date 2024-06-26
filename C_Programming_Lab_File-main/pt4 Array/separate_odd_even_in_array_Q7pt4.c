#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int arr[] = {12, 35, 45, 90, 8, 40, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int odd[n], even[n];
    int i = 0, j = 0;
    for (int k = 0; k < n; k++)
    {
        if (arr[k] % 2 == 1)
        {
            odd[i] = arr[k];
            i++;
        }
        else
        {
            even[j] = arr[k];
            j++;
        }
    }
    printf("Odd array: ");
    for (int k = 0; k < i; k++)
    {
        printf("%d ", odd[k]);
    }
    printf("\n");
    printf("Even array: ");
    for (int k = 0; k < j; k++)
    {
        printf("%d ", even[k]);
    }
    printf("\n");
    return 0;
}