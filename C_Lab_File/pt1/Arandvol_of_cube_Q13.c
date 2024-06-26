#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    
    int s, A, V;
    printf("Enter the length of one side of the cube: ");
    scanf("%d", &s);
    A = 6 * s * s;
    V = s * s * s;
    printf("The area of the cube is %d square units\n", A);
    printf("The volume of the cube is %d cubic units\n", V);

    return 0;
}