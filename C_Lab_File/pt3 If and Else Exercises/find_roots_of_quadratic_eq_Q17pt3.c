#include <stdio.h>
#include <math.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    float a,b,c,dis,root1,root2,imag;
    printf("Enter values of a, b, c of quadratic equation (aX^2 + bX + c): ");
    scanf("%f%f%f", &a, &b, &c);
    dis = (b * b) - (4 * a * c);
    if(dis > 0)
    {
        root1 = (-b + sqrt(dis)) / (2*a);
        root2 = (-b - sqrt(dis)) / (2*a);
        printf("Two distinct and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(dis == 0)
    {
        root1 = root2 = -b / (2 * a);
        printf("Two equal and real roots exists: %.2f and %.2f", root1, root2);
    }
    else if(dis < 0)
    {
        root1 = root2 = -b / (2 * a);
        imag = sqrt(-dis) / (2 * a);
        printf("Two distinct complex roots exists: %.2f + i%.2f and %.2f - i%.2f",root1, imag, root2, imag);
    }
    return 0;
}
