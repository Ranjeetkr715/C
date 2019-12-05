#include<stdio.h>
int main()
{
	int i,j=0,k=0,n;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			for(j=k+1;j<k+i;j++)
			{
				printf("%d*",j);
				
			}
			
				printf("%d",j);
				j++;
				k=j;
		
		}
		else
		{
			k=k+i-1;
			for(j=k;j>k-i+1;j--)
			{
				printf("%d*",j);
			}
			printf("%d",j);
		}
		printf("\n");
	}
}
