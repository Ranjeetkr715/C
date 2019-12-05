//find the 15th term of the series:0,0,7,6,14,12,21,18,28...
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,a=0,b=0,i;
	printf("enter the number: ");
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
		printf("%d term of series is %d",n+2,b+6);
	
	}
	else
	{
		printf("%dterm of series is %d",n+2,a+7);
	}
}
