#include <stdio.h>
#include <math.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int n, lastDigit, digits, sum, i, end;
    printf("Enter upper limit:");
    scanf("%d", &end);
    printf("Armstrong number between 1 to %d are: \n", end);
    for(i=1; i<=end; i++)
    {
        sum = 0;
        n = i;
        digits = (int) log10(n) + 1;
        while(n > 0)
        {
            lastDigit = n % 10;
            sum = sum + ceil(pow(lastDigit, digits));
            n = n / 10;
        }
        if(i == sum)
        {
            printf("%d, ", i);
        }
    }
    return 0;
}