#include<stdio.h>
int main()
{
	printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
	
	int a,b;
	printf("Enter any two number:");
	scanf("%d %d",&a,&b);
	++a;
	--b;
	printf("\n \nIncrement opretor = %d\nDecrement opretor = %d \n" ,a,b);
	
	return 0;
}