#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,a=1,b=1;
	printf("enter the  number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			b=b*2;
		}
		else
		{
			a=a*3;
		}
	}
	if(n%2==0)
	{
		printf("%d of the series is %d",n+2,b);
	}
	else
	{
		printf("%d of thr series is %d",n+2,a);
	}
}
