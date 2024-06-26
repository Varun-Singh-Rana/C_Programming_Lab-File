#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int rem, place, tempDecimal, binary ,decimal;
    printf("Enter decimal number: ");
    scanf("%d", &decimal);
    tempDecimal = decimal;
    place = 1;
    binary = 0;
    while(tempDecimal > 0)
    {
        rem = tempDecimal % 2;
        binary = (rem * place) + binary;
        tempDecimal /= 2;
        place *= 10;
    }
    printf("Decimal number = %d\n", decimal);
    printf("Binary number = %d", binary);

    return 0;
}
