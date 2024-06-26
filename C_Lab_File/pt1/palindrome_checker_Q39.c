#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int n,a=0,r,or;
    printf("Enter Number:");
    scanf("%d", &n);
    or = n;
    
    while (n != 0)
    {
        r = n % 10;
        a = a*10+r;
        n /= 10;
    }
    
    if (or == a)
    printf("%d is a palindrome.", or);
    else
    printf("%d is not a palindrome.", or);
    
    return 0;
}