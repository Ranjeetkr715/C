#include<stdio.h>
#include<conio.h>
int main()
{
	int n,i,fact,r,sum=0;
	printf("enter the n number: ");
	scanf("%d",&n);
	while(n>0)
	{
		fact=1;
		r=n%10;
		for(i=1;i<=r;i++)
		{
			fact=fact*i;
		}
		sum+=fact;
		n=n/10;
		}
		if(n==sum)
		{
			printf("strong number");
		}
		else
		{
			printf("not a strong number");
		}
}
