#include<stdio.h>

int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
	{
		return n*fact(n-1);
	}
}
int main()
{
	int n;
	printf("enter the number: ");
	scanf("%d",&n);
	int l=fact(n);
	printf("factorial number is %d",l);
}
