//recursion
#include<stdio.h>
#include<conio.h>

int fac(int n)
{
	if(n==0)
	{
		return 1;
	}
	else
	{
		return n*fac(n-1);
	}
	
}
int main()
{
	int n;
	printf("enter the n number: ");
	scanf("%d",&n);
	
	printf("the %d factorial number is %d",n,fac(n));
}

