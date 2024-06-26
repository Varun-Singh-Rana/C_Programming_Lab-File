#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int i, n, p=1;
    printf("Enter any number to check prime: ");
    scanf("%d", &n);
    for(i=2; i<=n/2; i++)
    {
        if(n%i==0)
        {
            p = 0;
            break;
        }
    }
    if(p == 1 && n > 1)
    {
        printf("%d is prime number", n);
    }
    else
    {
        printf("%d is not a prime number", n);
    }

    return 0;
}
