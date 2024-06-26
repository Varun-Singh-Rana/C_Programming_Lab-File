#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int i,originalNum,n,lastDigit,sum=0,fact;
    printf("Enter number to check Strong number: ");
    scanf("%d", &n);
    originalNum = n;
    while(n > 0)
    {
        lastDigit = n % 10;
        fact = 1;
        for(i=1; i<=lastDigit; i++)
        {
            fact = fact * i;
        }
        sum = sum + fact;

        n = n / 10;
    }
    if(sum == originalNum)
    {
        printf("%d is STRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT STRONG NUMBER", originalNum);
    }

    return 0;
}