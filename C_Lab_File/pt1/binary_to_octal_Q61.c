#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int octalConstant[] = {0, 1, 10, 11, 100, 101, 110, 111};
    int digit, place=1, i, binary, octal=0, tempBinary;
    printf("Enter binary number: ");
    scanf("%d", &binary);
    tempBinary = binary;
    while(tempBinary != 0)
    {
        digit = tempBinary % 1000;
        for(i=0; i<8; i++)
        {
            if(octalConstant[i] == digit)
            {
                octal = (i * place) + octal;
                break;
            }
        }
        tempBinary /= 1000;
        place *= 10; 
    }
    printf("Original binary number = %d\n",binary);
    printf("Octal number = %d",octal);

    return 0;
}
