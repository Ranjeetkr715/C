//armstrong number
#include<stdio.h>
#include<conio.h>
int main()
{
	int n,sum=0,r,c;
	printf("enter the number: \n");
	scanf("%d",&n);
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum=sum+c;
		n=n/10;
	}
	if(sum==n)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
}
