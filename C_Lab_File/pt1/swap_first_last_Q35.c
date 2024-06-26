#include <stdio.h>
#include <math.h>
int countDigits(int n)
{
  int count = 0;
  while (n != 0)
  {
    n = n / 10;
    count++;
  }
  return count;
}
int swapFirstLast(int n)
{
    int digits = countDigits(n);
    int first = n / pow(10, digits - 1);
    int last = n % 10;
    n = n - first * pow(10, digits - 1) + last * pow(10, digits - 1);
    n = n - last + first;
    return n;
}
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    printf("The number after swapping first and last digits is: %d\n", swapFirstLast(num));
    return 0;
}
