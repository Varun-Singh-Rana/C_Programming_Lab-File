#include<stdio.h>
int main()
{
	printf("-----NAME:VARUN SINGH RANA ----\n-----SID:231601117----\n");
	
	int i,n,p=0;
	printf("Enter Number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			p+=i;
		}
	}
	printf("\n Sum of all even no from 1 to %d = %d\n",n,p);
	return 0;  
}
