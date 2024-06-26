#include<math.h>
#include<stdio.h>
int main() 
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    double a,b,c,dis,root1,root2,realPart,imagPart;

    printf("Enter coefficients a:");
    scanf("%lf",&a);
    printf("Enter coefficients b:");
    scanf("%lf",&b);
    printf("Enter coefficients c:");
    scanf("%lf",&c);
    
    dis = b * b - 4 * a * c;

    if (dis > 0) 
    {
        root1 = (-b + sqrt(dis)) / (2 * a);
        root2 = (-b - sqrt(dis)) / (2 * a);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }
    else if (dis == 0) 
    {
        root1 = root2 = -b / (2 * a);
        printf("root1 = root2 = %.2lf;", root1);
    }
    else 
    {
        realPart = -b / (2 * a);
        imagPart = sqrt(-dis) / (2 * a);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }
} 

