#include <stdio.h>
int main()
{
    printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");

    int days,years,weeks;
    days = 1329;
    years = days/365;
    weeks = (days % 365)/7;
    days = days- ((years*365) + (weeks*7));
    printf("Years: %d\n", years);
    printf("Weeks: %d\n", weeks);
    printf("Days: %d \n", days);
    return 0;
}