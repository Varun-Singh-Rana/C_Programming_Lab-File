#include <stdio.h>
#include <math.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    
    int N=0,base=2,binary,decimal=0,tempBinary;
    printf("Enter binary number: ");
    scanf("d", &binary);
    tempBinary = binary;
    while(tempBinary!=0)
    {
        if(tempBinary % 10 == 1)
        {
            decimal += pow(base, N);
        }
        N++;
        tempBinary /= 10;
    }
    printf("Binary number = %d\n", binary);
    printf("Decimal number= %d", decimal);

    return 0;
}
