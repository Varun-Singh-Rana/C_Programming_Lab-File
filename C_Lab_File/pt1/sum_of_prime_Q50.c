#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int i,j,n,p,sum=0;
    printf("Enter number to find sum of all prime between 1 to : ");
    scanf("%d",&n);
    for(i=2; i<=n; i++)
    {
        p = 1;
        for(j=2; j<=i/2 ;j++)
        {
            if(i%j==0)
            {
                p = 0;
                break;
            }
        }
        if(p==1)
        {
            sum += i;
        }
    }
    printf("Sum of all prime numbers between 1 to %d = %d",n,sum);
    return 0;
}