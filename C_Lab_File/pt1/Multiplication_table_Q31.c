#include<stdio.h>
int main()
{
	printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
	
	int n;
	printf("Enter Number Here:-");
	scanf("%d",&n);
	  
	for(int i=1;i<=10;i++)
	{
		printf("\n%d * %d = %d\n",n,i,n*i);
	}
	return 0;
}