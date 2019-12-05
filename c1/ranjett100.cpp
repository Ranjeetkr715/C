#include<stdio.h>
#include<conio.h>
int main()
{
	int i,n,sum=0;
	printf("enter the number n: ");
	scanf("%d",n);
	for(i=0;i<=n;i++)
	{
		if(n%i==0)
		{
		sum=sum+i;
			}
	}
	if(n=sum)
	{
		printf("number is perfect");
	}
	else
	{
		printf("no is not perfect");
	}
}
