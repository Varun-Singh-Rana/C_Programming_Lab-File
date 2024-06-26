#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int num1, num2, num3, max;
    printf("Enter 1st numbers: ");
    scanf("%d",&num1);
    printf("Enter 2nd numbers: ");
    scanf("%d",&num2);
    printf("Enter 3rd numbers: ");
    scanf("%d",&num3);
    if((num1 > num2) && (num1 > num3))
    {
        max = num1;
    }
    else if(num2 > num3)
    {
        max = num2;
    }
    else
    {
        max = num3;
    }
    printf("Maximum among all three numbers = %d", max);
    return 0;
}