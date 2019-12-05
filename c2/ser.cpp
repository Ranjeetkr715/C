#include<stdio.h>
int main()
{
	int a=0,b=0,n,i;
	printf("enter the value of n: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			b=b+6;
		}
		else
		{
			a=a+7;
		}
	}
	if(n%2==0)
	{
		printf("no is %d of %d: ",n+2,b);
	}
	else
	{
		printf("no is %d is %d: ",n+2,a);
	}
}
