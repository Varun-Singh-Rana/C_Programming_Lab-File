#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int i,a,b,min,hcf=1;
    printf("Enter any two numbers to find HCF:");
    scanf("%d%d",&a,&b);
    min = (a<b) ? a:b;

    for(i=1; i<=min; i++)
    {
        if(a%i==0 && b%i==0)
        {
            hcf = i;
        }
    }
    printf("HCF of %d and %d = %d\n",a,b,hcf);
    return 0;
}