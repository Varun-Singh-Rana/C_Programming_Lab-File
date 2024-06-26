#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int num1, num2;
    printf("Enter 1st numbers: ");
    scanf("%d",&num1);
    printf("Enter 2nd numbers: ");
    scanf("%d",&num2);
    if(num1 > num2)
    {
        printf("%d is maximum", num1);        
    }
    else
    {
        printf("%d is maximum", num2);
    }
    return 0;
}