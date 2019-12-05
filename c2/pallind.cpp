//pallindrome
#include<stdio.h>
int main()
{
	int i,sum=0,r,n,temp;
	printf("enter the number: ");
	scanf("%d",&n);
	temp=n;
	while(n>0)
	{
		r=n%10;
		sum=sum*10+r;
		n=n/10;
	}
	if(sum==temp)
	{
		printf("pallindrome");
	}
	else
	{
		printf("not a pallindrome");
	}
	
}
