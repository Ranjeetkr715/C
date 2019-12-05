#include<stdio.h>
#include<conio.h>
int fact(int n)
{
	if(n==1)
	{
		return 1;
	}
	else
		return n*fact(n-1);
	}

int main()
{
	int n;
	printf("entr the n number ");
	scanf("%d",&n);
	printf("factorial number  is %d",fact(n));
	return 0;
	
}
