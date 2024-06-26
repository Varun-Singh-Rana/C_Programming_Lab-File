#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    
    int i,n,sum=0;
    printf("Enter number to check perfect number:");
    scanf("%d",&n);
    for(i = 1; i <= n / 2; i++)
    {
        if(n%i == 0)
        {
            sum += i;
        }
    }
    if(sum == n && n > 0)
    {
        printf("%d is PERFECT NUMBER",n);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER",n);
    }

    return 0;
}