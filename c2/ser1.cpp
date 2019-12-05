#include<stdio.h>
int main()
{
	int n,i,a=1,b=1;
	printf("enter the number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			b=b*3;
		}
		else
		{
			a=a*2;
		}
	}
	if(n%2==0)
	{
		printf("the number is %d of %d: ",n+2,b);
	}
	else
	{
		printf("the number is %d of %d: ",n+2,a);
	}
}
