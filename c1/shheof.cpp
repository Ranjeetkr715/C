#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j,k,c=80;
	printf("enter the number n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i;j++)
		{
		   printf("  ");
		}
		for(k=1;(2*i)-1<=n;k++)
		{
			printf("*");
		
		}
		printf("\n");
	}
}
