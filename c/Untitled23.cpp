//consider the following series:1,1,2,3,4,9,8,27,...
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=1,b=1,i;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			b=b*2;
		}
		else
		{
			a=a*2;
		}
	}
	if(n%2==0)
	{
		printf("%d of the series is %d",n+2,b);
	}
	else
	{
		printf("%d of the series is %d",n+2,a);
	}
}
