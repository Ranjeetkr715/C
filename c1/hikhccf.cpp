#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,j;
	printf("enter the n number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n+1-i ;j++)
		{
			printf("%d", j);
		}
		printf("\n");
	}
}
