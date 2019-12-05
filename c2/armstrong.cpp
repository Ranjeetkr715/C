#include<stdio.h>
#include<conio.h>
int main()
{
	int n,r,c,sum=0;
	printf("enter the n number: ");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum+=c;
		n=n/10;
	}
	if(sum==n)
	{
		printf("number is armstrong");
	}
	else
	{
		printf("number is not a armstrong number");
	}
}
