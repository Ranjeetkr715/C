#include<stdio.h>
#include<conio.h>
int main()
{
	int i,j,n;
	printf("enter the n number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n-i+1;j++)
		{
			printf("%d",i);
		}
		printf("\n");
	}
}
