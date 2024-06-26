#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    
    int a, b, c;
    printf("Enter the values of a and b: ");
    scanf("%d %d", &a, &b);
    printf("Before swapping: a = %d, b = %d\n", a, b);
    c = a;
    a = b;
    b = c; 
    printf("After swapping: a = %d, b = %d\n", a, b);
    
    return 0;
}
