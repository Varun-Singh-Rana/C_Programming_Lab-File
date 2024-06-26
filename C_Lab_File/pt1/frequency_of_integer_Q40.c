#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int i, lastDigit, base, num, n;;
    int freq[base=10];
    printf("Enter any number: ");
    scanf("%d", &num);
    for(i=0; i<base; i++)
    {
        freq[i] = 0;
    }
    n = num; 
    while(n != 0)
    {
        lastDigit = n % 10;
        n /= 10;
        freq[lastDigit]++;
    }
    printf("Frequency of each digit in %d is: \n", num);
    for(i=0; i<base; i++)
    {
        printf("Frequency of %d = %d\n", i, freq[i]);
    }
    return 0;
}