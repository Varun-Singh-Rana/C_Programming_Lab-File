#include <stdio.h>
void main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int i, j, n, a[100], b[100], c[200], temp;
    printf("Enter the number of first array :");
    scanf("%d", &n);
    printf("Enter %d number of elements in the first array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &a[i]);
        c[i] = a[i];
    }
    printf("Enter %d number of elements in the second array :\n", n);
    for (i = 0; i < n; i++)
    {
        printf("element - %d : ", i);
        scanf("%d", &b[i]);
        c[n + i] = b[i];
    }
    printf("\nThe values stored into the first array are : \n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", a[i]);
    }
    printf("\n\nThe values stored into the second array are :\n");
    for (i = 0; i < n; i++)
    {
        printf("% 5d", b[i]);
    }
    for (i = 0; i < 2 * n; i++)
    {
        for (j = i + 1; j < 2 * n; j++)
        {
            if (c[i] < c[j])
            {
                temp = c[i];
                c[i] = c[j];
                c[j] = temp;
            }
        }
    }
    printf("\n\nThe values stored into the merged array in descending order are :\n");
    for (i = 0; i < 2 * n; i++)
    {
        printf("% 5d", c[i]);
    }
    printf("\n\n");
}