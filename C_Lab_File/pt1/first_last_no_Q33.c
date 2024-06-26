#include <stdio.h>
int main()
{ 
	printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
	
    int n,f,l;
    printf("Enter any number: ");
    scanf("%d", &n);
    f = n;
    l = n;    
    while(f >= 10)
    {
        f = f / 10;
    }
    printf("First digit = %d", f);

    while (l>=10)
    {
        l = l % 10;
    }
    printf("\nLast digit = %d",l);
    return 0;
}