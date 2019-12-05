#include<stdio.h>
int main()
{
	int i,j,n;
	printf("enter the number: ");
	scanf("%d",&n);
		int num;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",j);
			
		}
		
		printf("\n");
	}
//	num--;
	for(i=n-1;i>=1;i--)
	{
	
		for(j=1;j<=2*i-1;j++)
		{
			printf("%d",j);
		}
		printf("\n");
	}
}
