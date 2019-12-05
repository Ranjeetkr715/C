#include<stdio.h>
int main()
{
	int n,i,r,c,sum=0,temp;
	printf("enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		c=r*r*r;
		sum+=c;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("armstrong number");
	}
	else
	{
		printf("not a armstrong number");
	}
}
