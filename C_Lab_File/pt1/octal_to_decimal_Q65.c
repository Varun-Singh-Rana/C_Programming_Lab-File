#include <stdio.h>
#include <math.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    int rem, place = 0, octal, tempOctal, decimal = 0;
    printf("Enter any octal number: ");
    scanf("%d", &octal);
    tempOctal = octal;
    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        decimal += pow(8, place) * rem;
        tempOctal /= 10;
        place++;
    }
    printf("Octal number = %d\n", octal);
    printf("Decimal number = %d", decimal);
    return 0;
}
