#include<stdio.h>
int main()
{
	printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
	
	int num;
	float pie,area;
	printf("Enter radius:");
	scanf("%d",&num);
	pie=3.14159;
	area=pie*(num*num);
	printf("Ans= %f",area);
	
	return 0;
}