#include <stdio.h>
void merge_desc(int arr1[], int arr2[], int n, int merged[])
{
    int i = 0, j = 0, k = 0;
    while (i < n && j < n)
    {
        if (arr1[i] >= arr2[j])
        {
            merged[k] = arr1[i];
            i++;
            k++;
        }
        else
        {
            merged[k] = arr2[j];
            j++;
            k++;
        }
    }
    while (i < n)
    {
        merged[k] = arr1[i];
        i++;
        k++;
    }
    while (j < n)
    {
        merged[k] = arr2[j];
        j++;
        k++;
    }
}
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    int arr1[] = {9, 7, 5, 3, 1};
    int arr2[] = {8, 6, 4, 2, 0};
    int n = sizeof(arr1) / sizeof(arr1[0]);
    int merged[2 * n];
    merge_desc(arr1, arr2, n, merged);
    printf("Merged array in descending order: ");
    for (int i = 0; i < 2 * n; i++)
    {
        printf("%d ", merged[i]);
    }
    printf("\n");
    return 0;
}