#include <stdio.h>
#include <math.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    
    int originalNum, n, lastDigit, digits, sum=0;
    printf("Enter any number to check Armstrong number: ");
    scanf("%d", &n);
    originalNum = n;
    digits = (int) log10(n) + 1;
    while(n > 0)
    {
        lastDigit = n % 10;
        sum = sum + round(pow(lastDigit, digits));
        n = n / 10;
    }
    if(originalNum == sum)
    {
        printf("%d is ARMSTRONG NUMBER", originalNum);
    }
    else
    {
        printf("%d is NOT ARMSTRONG NUMBER", originalNum);
    }
    return 0;
}