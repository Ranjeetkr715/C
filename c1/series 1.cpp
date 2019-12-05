#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=0,b=0,i;
	printf("enter the n number: ");
	scanf("%d",&n);
	for(i=1;i<=n-2;i++)
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
		printf("%d of the series is %d",n+2,b+6);
	}
	else
	{
			printf("%d of the series is %d",n+2,a+7);
	}
	return 1;
}
