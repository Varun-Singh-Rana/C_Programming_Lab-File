#include <stdio.h>

int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int OCTALVALUES[] = {0, 1, 10, 11, 100, 101, 110, 111};
    int rem, octal, tempOctal, binary, place;
    printf("Enter Octal number: ");
    scanf("%d", &octal);
    tempOctal = octal;
    binary = 0;
    place  = 1;
    while(tempOctal > 0)
    {
        rem = tempOctal % 10;
        binary = (OCTALVALUES[rem] * place) + binary;
        tempOctal /= 10;
        place *= 1000;
    }
    printf("Octal number = %d\n", octal);
    printf("Binary number = %d", binary);

    return 0;
}
