#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int i,j,n,sum=0;
    printf("Enter number:");
    scanf("%d",&n);
    printf("All Perfect numbers between 1 to %d:\n",n);
    for(i=1; i<=n; i++)
    {
        for(j=1; j<i; j++)
        {
            if(i % j == 0)
            {
                sum += j;
            }
        }
        if(sum == i)
        {
            printf("%d, ", i);
        }
    }

    return 0;
}