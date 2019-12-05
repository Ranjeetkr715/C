//strong number
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fact=1,r,sum=0;
	printf("enter the number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum=sum+fact;
		n=n/10;
	}
	if(sum==n)
	{
		printf("strong number is ");
	}
	else
	{
		printf("not a strong number is %d",n);
	}
}
