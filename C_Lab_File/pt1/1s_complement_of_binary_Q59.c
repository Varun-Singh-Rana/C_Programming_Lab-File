#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    int i, error=0,a=8;
    char binary[a + 1], onesComp[a + 1];
    printf("Enter %d bit binary value: ",a);
    gets(binary);
    for(i=0; i<a; i++)
    {
        if(binary[i] == '1')
        {
            onesComp[i] = '0';
        }
        else if(binary[i] == '0')
        {
            onesComp[i] = '1';
        }
        else
        {
            printf("Invalid Input");
            error = 1;
            break;
        }
    }
    onesComp[a] = '\0';
    if(error == 0)
    {
        printf("Original binary = %s\n", binary);
        printf("Ones complement = %s", onesComp);
    }
    return 0;
}