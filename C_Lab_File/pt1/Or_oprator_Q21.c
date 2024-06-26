#include<stdio.h>
int main()
{
	printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
		  
	int x,p=2,u=5;
	printf("Enter No Here:-");
	scanf("%d",&x);
	
	if(x%p==0 || x%u==0 )
	{
		printf("\n%d is Divide By 2 or 5 ",x);
	}
	else
	{
		printf("\n%d is Not Divided BY 2 or 5\n ",x);
	}
	return 0;
}