#include <stdio.h>

int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    int side1, side2, side3;

    /* Input all three sides of a triangle */
    printf("Enter three sides of triangle:Ṇ");
    scanf("%d%d%d", &side1, &side2, &side3);

    if((side1 + side2 > side3) && (side1 + side3 > side2) && (side2 + side3 > side1))
    {
        printf("Triangle is valid.");
    }
    else
    {
        printf("Triangle is not valid.");
    }

    return 0;
}
